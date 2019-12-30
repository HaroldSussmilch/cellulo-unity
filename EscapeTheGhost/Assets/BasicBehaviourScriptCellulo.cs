using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Runtime.InteropServices;

public class BasicBehaviourScriptCellulo : MonoBehaviour
{
   // private Space relativeTo=Space.World;
    public float mSpeed;
    //public float rotSpeed=4f;
        public Cellulo robot;
    float start_time;
    //bool isRunning;

    public LibDotsMapping convertCoord;
    Vector3 currentRobotPos=Vector3.zero;

    //Cellulo Control : libdots mapping to apply
    public enum Mode {Mono,Dual, Other};
    public Mode MappingMode = Mode.Mono;

    //Effect of the Cellulo control
    public enum ControlMode {orientationControl,SpeedPhiTheta,ThetaSpeedPhi};
    public ControlMode MoveMode = ControlMode.SpeedPhiTheta;
    int k=0;
    bool GizmoOn=true;

    public bool celluloLessDebug=false;
    [Range(-1f,1f)]
    public float debugCelluloX;
    [Range(-1f,1f)]
    public float debugCelluloY;
    [Range(0f,360f)]
    public float debugCelluloTheta;
    //public bool orientationControl=true;
    public bool amIcontrolled=false;
    float initialCelluloTheta=0f;
    float horizontalToVerticalRotationAssistRatio=3f;
    public GameObject MasterInfo ;
    public GameObject TestGO ;
    GameObject SwarmCenter;

    static bool CelluloInit =false;
    CelluloTracker CelluloTrakingScript;
    void Start()
    {
        //mSpeed=5;
        if(!CelluloInit){
            Cellulo.initialize();
            CelluloInit=true;
            print("Cellulo initialized");
        }
        if(robot != null) {
            //robot.clearTracking();
            start_time=Time.time;
            MappingMode=0;
            convertCoord= this.gameObject.GetComponent<LibDotsMapping>();
            //isRunning=true;

            MasterInfo=GameObject.Find("SimMasterInfo");
            TestGO=GameObject.Find("Test GO");
            
        }
    }
    // Update is called once per frame
    public float celluloTheta=0f;
    public Vector3 celluloInput=Vector3.zero;
    public Vector3 DebugInputLog=Vector3.zero;
    public bool AmIkidnapped=false;
    void Update()
    {
        if(MasterInfo==null){
            MasterInfo=GameObject.Find("SimMasterInfo");
            CelluloTrakingScript=MasterInfo.GetComponent<CelluloTracker>();
        } 
        if(TestGO==null)    
            TestGO=GameObject.Find("Test GO");


        //rotSpeed=globalFlock.AutorotationSpeed;
        amIcontrolledUpdate();
        celluloTheta=0f;
        celluloInput=Vector3.zero;
        if(robot != null) {
            currentRobotPos.Set(robot.getX(), robot.getY(), 10.0f);
            celluloTheta=robot.getTheta()-initialCelluloTheta; //get the orientation of the robot - onConnect orientation
//           Debug.Log("Pos value for Cellulo :"+robot.getID()+" is :"+currentRobotPos);
            float now = Time.time;

            convertCoord= this.gameObject.GetComponent<LibDotsMapping>();
            celluloInput = convertCoord.libDotsConvertion(currentRobotPos[0],currentRobotPos[1],(int)MappingMode);
            DebugInputLog=celluloInput;
            DebugInputLog[2]=celluloTheta;

            robotVisualUpdate();
            GizmoOn = false;
            
        }
        else {
            k++;
            if (k>1){ //soften load on Unity Editor; not needed anymore
                k=0;
                if(CelluloTrakingScript.unAssociatedRobotsCount() >= 1) connect();
                else
                {
                    ;
                    //Debug.Log("Remaining robots < 1"+ "\n Robots in pool ="+Cellulo.totalRobots());
                }
            }
        }
        AmIkidnappedUpdate();
        if(AmIkidnapped && (this.transform.position-GameObject.Find("SwarmCenter").transform.position).magnitude >50f){
            Debug.Log("Distance to swarmCenter is : "+ (this.transform.position-GameObject.Find("SwarmCenter").transform.position).magnitude );
            this.gameObject.GetComponent<IndiFlock>().helpImLost=true;
        }
        else{
            this.gameObject.GetComponent<IndiFlock>().helpImLost=false;
        }

/*         GameObject cam3p=GameObject.Find("3rdPersonCamera");
        Transform camTransform =cam3p.transform;
        Vector3 CamXAngleCorrection = Vector3.zero;
        CamXAngleCorrection.Set(-camTransform.eulerAngles[0],0,0);
        camTransform.Rotate(CamXAngleCorrection); */

        
//Cellulo input controls 

        if (celluloLessDebug){
            celluloInput[0]=debugCelluloX;
            celluloInput[1]=debugCelluloY;
            celluloTheta=debugCelluloTheta;
        }
        if(robot!=null){
            //UI sliders take info from cellulo 

            MasterInfo.GetComponent<GameScript2>().sliderX.value=celluloInput[0]; 
            MasterInfo.GetComponent<GameScript2>().sliderY.value=celluloInput[1];
        }

        //Z Orientation Correction
        realignZOrientation();
        if (MoveMode==ControlMode.orientationControl && MappingMode==Mode.Mono)
        {


        //Intuitive Joystick Input Swap
            celluloInput=swapInput(celluloInput); //Rotations around X axis means changes in YZ plane and Z=0 so in Y direction

                //Rotation modifier for turning faster in horizontal plane
            celluloInput[1]*=horizontalToVerticalRotationAssistRatio;

            celluloInput[0]=-celluloInput[0]; //positive X is down (left handed axis in Unity)

            //If Idle in X rotation, slowly go back to horizontal plane movement
            int XrotInput=0;
            if (Mathf.Abs(celluloInput[XrotInput])<0.2f && transform.eulerAngles[0]>0.1)
            {
                celluloInput[XrotInput]=Mathf.Sign(transform.eulerAngles[0]-180)*0.45f; // Rotation around X (side) back to 0 slowly if idle
                if (transform.eulerAngles[0]<1)
                    transform.eulerAngles=new Vector3(0, transform.eulerAngles[1], transform.eulerAngles[2]);
            }

            //rotation applied to individual in swarm from cellulo input (0 if no cellulo and no debug active)
            float rotCoefToApply=(robot!=null||celluloLessDebug)?globalFlock.CelluloRotationSpeed:globalFlock.AutorotationSpeed;
            this.transform.Rotate(celluloInput*rotCoefToApply*Time.deltaTime);

            transform.eulerAngles=new Vector3(ClampAngle(transform.eulerAngles[0],-60,60),transform.eulerAngles[1],transform.eulerAngles[2]);            //clamp rotation to [-90;90]
            if (robot!=null ||celluloLessDebug)
                this.GetComponent<IndiFlock>().CelluoInputQuat=this.transform.rotation;
                
        }
  //SpeedPhiTheta
        if (MoveMode==ControlMode.SpeedPhiTheta && MappingMode==Mode.Mono)
        {
            /*Controlls are :   X : speed variation : max at 0 (velocity control)
                                Y : Create Rotation around X (side) axis (angular velocity control)
                                Theta : Set fish Theta (angle control)
                                */
            this.gameObject.GetComponent<IndiFlock>().forwardSpeedModfier=1f-(0.9f*Mathf.Abs(celluloInput[0]));
            celluloInput[1]*=-1; //Inverse Y controlls

            //On Low Cellulo[1], restore rotX to 0 slowly
//ToDO : modify : does not go back slowly if Y angle >90° tested : errors in this mode
            int XrotInput=1;
/*             if (Mathf.Abs(celluloInput[XrotInput])<0.3f && transform.eulerAngles[0]>0.1)
            {
                int sign=(ClampAngle(transform.eulerAngles[0],-60,60)>180)?1:-1;

                //Modify this :
                celluloInput[XrotInput]=-sign*0.45f; // Rotation around X (side) back to 0 slowly if idle
                if(amIcontrolled){
                    print(transform.eulerAngles[0]+ "           DEBUG\n " +sign);
                }
                if (transform.eulerAngles[0]<1)
                    transform.eulerAngles=new Vector3(0, transform.eulerAngles[1], transform.eulerAngles[2]);
            } */
            Vector3 Xrotation=Vector3.zero;
            float sensitivity=30f;
            Xrotation[0]=celluloInput[1]*sensitivity;


            Quaternion XQuat=Quaternion.identity;
            
            XQuat=Quaternion.AngleAxis(celluloInput[1]*sensitivity, Vector3.right);

            XQuat.SetLookRotation(XQuat*Vector3.forward);

            Quaternion celluloThetaRot= Quaternion.Euler(new Vector3(0,celluloTheta,0));
           if(amIcontrolled) Debug.DrawLine(this.transform.position,this.transform.position+ celluloThetaRot*Vector3.forward*5f, Color.green);

            if (robot!=null || celluloLessDebug){
                this.GetComponent<IndiFlock>().CelluoInputQuat=celluloThetaRot*XQuat;
            } 
        }
        if(MoveMode==ControlMode.ThetaSpeedPhi && amIcontrolled){

            //Y axis is speed control
            //celluloInput[1]*=-1;
            this.gameObject.GetComponent<IndiFlock>().forwardSpeedModfier=(1f+celluloInput[1])/2;

            //X axis : Control of theta ; Rotation around the Y axis   

            Vector3 Yrotation=Vector3.zero;
            float sensitivity=1f; //speed control not position ; sensitivity needed much lower
            Yrotation[0]=celluloInput[0]*sensitivity;

            Quaternion YQuat=Quaternion.identity;
            
            YQuat=this.transform.rotation;

            YQuat*=Quaternion.AngleAxis(celluloInput[0]*sensitivity, Vector3.up);    //Rotate around Up Axis
        Quaternion YQuatOG=TestGO.transform.rotation*Quaternion.AngleAxis(celluloInput[0]*sensitivity, Vector3.up);
            YQuat.SetLookRotation(YQuat*Vector3.forward); 

            //Theta : controll altitude : on angle changes


            float AngleDiff= ShortestAngleDistance(prevTheta,celluloTheta);

            if(Mathf.Abs(AngleDiff)<2f){
                AngleDiff=0;
            }            
            StartCoroutine(PrevThetaDelayer(1.5f,celluloTheta));
            AngleDiff=Mathf.Clamp(AngleDiff,-120,120);
            Quaternion XQuat=Quaternion.AngleAxis(AngleDiff*0.5f*sensitivity,Vector3.ProjectOnPlane(this.transform.right,Vector3.up));//TestGO.transform.right);

            //if(amIcontrolled) Debug.DrawLine(TestGO.transform.position,TestGO.transform.position+XQuat2*TestGO.transform.forward*8f,Color.white);
            //if(amIcontrolled) TestGO.transform.Rotate(0,1,0);
            /* if (AngleDiff==0)
                XQuat.SetLookRotation(Vector3.ProjectOnPlane(TestGO.transform.forward,Vector3.up)); */
            Quaternion QuatTotal=Quaternion.identity;
            Quaternion QuatYrotation=Quaternion.AngleAxis(celluloInput[0]*sensitivity, Vector3.up)*this.transform.rotation;
            Transform Test=this.transform;
            Test.rotation=QuatYrotation;
            
            QuatTotal=Quaternion.AngleAxis(AngleDiff*0.5f*sensitivity,Vector3.ProjectOnPlane(Test.right,Vector3.up));
            QuatTotal.SetLookRotation(QuatTotal*Vector3.ProjectOnPlane(this.transform.forward,Vector3.up));

            Debug.DrawLine(TestGO.transform.position+Vector3.down*5f,TestGO.transform.position+Vector3.down*5f+QuatTotal*TestGO.transform.forward*8f,Color.white);
            Debug.DrawLine(this.transform.position,this.transform.position+ XQuat*Vector3.forward*5f, Color.green);

            if (robot!=null || celluloLessDebug){
                this.GetComponent<IndiFlock>().CelluoInputQuat=QuatTotal;
            }

        }

        //if(robot!=null && predatorNearby)
            

        void realignZOrientation(){
            if (Mathf.Abs(transform.eulerAngles[2])>0.5){
                celluloInput[2]=Mathf.Sign(transform.eulerAngles[2]-180)*Mathf.Max(10f,1f/(0.001f+0.0002f*Mathf.Abs(transform.eulerAngles[2]-180)));
            }
            else
            {
                transform.eulerAngles=new Vector3(transform.eulerAngles[0], transform.eulerAngles[1], 0);
            }
        }


    }

    public float A;
    public float B;
    public float C;
float ShortestAngleDistance(float from,float to){
    float distance=to%360-from%360;
    if (Mathf.Abs(distance) > 180)  
        distance =-Mathf.Sign(distance)*(360-Mathf.Abs(distance));
    return distance;
}
         IEnumerator PrevThetaDelayer(float seconds,float theta){
        yield return new WaitForSeconds(seconds);
        prevTheta=theta;
    } 
    float prevTheta;
    float getPrevTheta(){
        if (prevTheta==null)
            prevTheta=celluloTheta;
        Debug.Log(prevTheta + " // " +celluloTheta);

        //if not working : coroutine storing value from 0.1s ago?
        return prevTheta; 
    }
    void connect() {
        if(robot != null) return;

        robot=CelluloTrakingScript.getUnassociatedCellulo();
        CelluloTrakingScript.AssociateGOToRobot(this.gameObject,robot);

        this.celluloLessDebug=false;
    
        Debug.Log("Robot connection to pool tried "+"\n"+"New value is :"+robot);
        initialCelluloTheta=robot.getTheta();
        initialCelluloTheta=0;
        if(!robot.hapticOn){
            robot.setHapticBackdriveAssist(0.8f, 0.8f, 0.8f);
            robot.hapticOn=true;
            print("haptic assist is ON");
        }

    }

    Vector3 swapInput(Vector3 celluloInput){
        float tmp;
        tmp=celluloInput[0];
        celluloInput[0]=celluloInput[1];
        celluloInput[1]=tmp;
        return celluloInput;
    }

    float clampXrot(float eulerAngle){  //input between 0 and 360 
        if (eulerAngle>=180)
        {
            eulerAngle-=360;
        }
        if (Mathf.Abs(eulerAngle)>60){
            eulerAngle=60*Mathf.Sign(eulerAngle);
        }
        return eulerAngle;
    }
    void robotVisualUpdate(){
        if (this.gameObject.GetComponent<IndiFlock>()!=null && robot!=null)
        {
            IndiFlock IDS =this.gameObject.GetComponent<IndiFlock>();

        // k++;
        // if (k>500)
        //     IDS.colorSent=false;
            if(IDS.colorSent)
                return;
            print("Communication LED signals");
            robot.setVisualEffect(1, (long)(IDS.FishColor.getStripesRedValue()*0.7f) ,
                                        (long)(IDS.FishColor.getStripesGreenValue()*0.7f) ,
                                        (long)(IDS.FishColor.getStripesBlueValue()*0.7f) , 1);
            robot.setVisualEffect(1, (long)(IDS.FishColor.getStripesRedValue()*0.7f) ,
                                        (long)(IDS.FishColor.getStripesGreenValue()*0.7f) ,
                                        (long)(IDS.FishColor.getStripesBlueValue()*0.7f) , 3);
            robot.setVisualEffect(1, (long)(IDS.FishColor.getBodyRedValue()*0.7f) ,
                                        (long)(IDS.FishColor.getBodyGreenValue()*0.7f) ,
                                        (long)(IDS.FishColor.getBodyBlueValue()*0.7f) , 2);                                            
            //stripes work, add body color too from IndiFlock
            IDS.colorSent=true;
            
        }

    }
    void OnDrawGizmos(){
        /* Gizmos.color = Color.yellow;
        if (amIcontrolled)
            Gizmos.color = Color.red;
        Gizmos.DrawSphere(transform.position, 0.5f); */
    }
    void amIcontrolledUpdate(){
        if(robot != null || celluloLessDebug)
            amIcontrolled=true;
        else 
            amIcontrolled=false;
    }

    public static float ClampAngle(float angle, float min, float max)
    {
        angle = Mathf.Repeat(angle, 360);
        min = Mathf.Repeat(min, 360);
        max = Mathf.Repeat(max, 360);
        bool inverse = false;
        var tmin = min;
        var tangle = angle;
        if(min > 180)
        {
            inverse = !inverse;
            tmin -= 180;
        }
        if(angle > 180)
        {
            inverse = !inverse;
            tangle -= 180;
        }
        var result = !inverse ? tangle > tmin : tangle < tmin;
        if(!result)
            angle = min;

        inverse = false;
        tangle = angle;
        var tmax = max;
        if(angle > 180)
        {
            inverse = !inverse;
            tangle -= 180;
        }
        if(max > 180)
        {
            inverse = !inverse;
            tmax -= 180;
        }
    
        result = !inverse ? tangle < tmax : tangle > tmax;
        if(!result)
            angle = max;
        return angle;
    }
    void OnCollisionEnter(Collision collision){
        if(gameObject.name.Contains("Fish n°"))
            StartCoroutine(StabilizeInXseconds(0.8f,this.gameObject));
    }
    IEnumerator StabilizeInXseconds(float seconds, GameObject GO){
        Rigidbody rb=GO.GetComponent<Rigidbody>();
        yield return new WaitForSeconds(seconds);
        rb.velocity=Vector3.zero;
        rb.ResetInertiaTensor();
        rb.ResetCenterOfMass();

    }

    void AmIkidnappedUpdate(){
        if(robot != null){
            bool Kidnapped = robot.getKidnapped();
            AmIkidnapped=Kidnapped;
        }
        else 
            AmIkidnapped=false;

    }
}