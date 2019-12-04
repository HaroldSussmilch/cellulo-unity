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
    public float rotSpeed=2.5f;
        public Cellulo robot;
    float start_time;
    //bool isRunning;

    public LibDotsMapping convertCoord;
    Vector3 currentRobotPos=Vector3.zero;

    //Cellulo Control : libdots mapping to apply
    public enum Mode {Mono,Dual, Other};
    public Mode CtrlMode = Mode.Mono;

    //Effect of the Cellulo control
    public enum ModeMvmt {RotateModel,GoToGoal};
    public ModeMvmt MoveMode = ModeMvmt.RotateModel;
    int k=0;
    bool GizmoOn=true;

    public bool celluloLessDebug=false;
    [Range(-1f,1f)]
    public float debugCelluloX;
    [Range(-1f,1f)]
    public float debugCelluloY;
    [Range(0f,360f)]
    public float debugCelluloTheta;
    public bool orientationControl=true;
    public bool amIcontrolled=false;
    float initialCelluloTheta=0f;


    void Start()
    {
        //mSpeed=5;
        Cellulo.initialize();
        if(robot != null) {
            robot.clearTracking();
        start_time=Time.time;
        CtrlMode=0;
        convertCoord= this.gameObject.GetComponent<LibDotsMapping>();
        //isRunning=true;
        //
        }
    }
    // Update is called once per frame
    void Update()
    {
        amIcontrolledUpdate();
        Vector3 celluloInput=Vector3.zero;
        float celluloTheta=0f;
        if(robot != null) {
            currentRobotPos.Set(robot.getX(), robot.getY(), 10.0f);
            celluloTheta=robot.getTheta()-initialCelluloTheta; //get the orientation of the robot - onConnect orientation
//           Debug.Log("Pos value for Cellulo :"+robot.getID()+" is :"+currentRobotPos);
            float now = Time.time;
//            Debug.Log(this.gameObject.GetComponent<LibDotsMapping>()); //returns null
            convertCoord= this.gameObject.GetComponent<LibDotsMapping>();
            celluloInput = convertCoord.libDotsConvertion(currentRobotPos[0],currentRobotPos[1],(int)CtrlMode);

//            Debug.Log("Pos value for Cellulo :"+robot.getID()+" is : "+currentRobotPos+"\n Converted to joystick axis :"+celluloInput);
            //if(!isRunning) return;
            robotVisualUpdate();
            GizmoOn = false;
            
        }
        else {
            k++;
            if (k>200){ //soften load on Unity Editor;
                k=0;
                if(Cellulo.robotsRemaining() >= 1 && false) connect();
                else
                {
                    Debug.Log("Remaining robots < 1"+ "\n Robots in pool ="+Cellulo.totalRobots());
                }
            }
        }

        



        //Debug.Log(Input.GetAxis("Horizontal"));
        //coef = mSpeed*Time.deltaTime;
        if (Input.GetAxis("Dual Ctrl")<0 && gameObject.name=="Cube2"){
            Debug.Log("Input ignored for cube2 ");
            return;
        }
        //mSpeed=GameObject.Find("SimMasterInfo").getComponent<>().moveSpeed;

        //If Camera is fixed oriented
        //    relativeTo=Space.World;
        //Else
        //    relativeTo=Space.Self;      //move with Space.Self of swarm center


        GameObject cam3p=GameObject.Find("3rdPersonCamera");
        Transform camTransform =cam3p.transform;
        Vector3 CamXAngleCorrection = Vector3.zero;
        CamXAngleCorrection.Set(-camTransform.eulerAngles[0],0,0);
        camTransform.Rotate(CamXAngleCorrection);
        //transform.Translate(mSpeed*Input.GetAxis("Horizontal")*Time.deltaTime,0,mSpeed*Input.GetAxis("Depth")*Time.deltaTime, relativeTo);
        transform.Translate(mSpeed*Input.GetAxis("Horizontal")*Time.deltaTime,mSpeed*Input.GetAxis("Vertical")*Time.deltaTime,mSpeed*Input.GetAxis("Depth")*Time.deltaTime, camTransform);
        
        //Cellulo input controls

        if (celluloLessDebug){
            celluloInput[0]=debugCelluloX;
            celluloInput[1]=debugCelluloY;
            celluloTheta=debugCelluloTheta;

        }
        
        if (orientationControl && CtrlMode==Mode.Mono)
        {
        //Z Orientation Correction
            realignZOrientation();

        //Intuitive Joystick Input Swap
            celluloInput=swapInput(celluloInput); //Rotations around X axis means changes in YZ plane and Z=0 so in Y direction

            celluloInput[1]*=10;     //Rotation modifier for turning faster in horizontal plane
            celluloInput[0]=-celluloInput[0]; //positive X is down (left handed axis in Unity)
//            print("oriCtrl (X rot, Y rot)"+celluloInput); //debug

            //If Idle, slowly go back to horizontal plane movement
            int XrotInput=0;
            if (Mathf.Abs(celluloInput[XrotInput])<0.2f && transform.eulerAngles[0]>0.1)
            {
                celluloInput[XrotInput]=Mathf.Sign(transform.eulerAngles[0]-180)*0.45f; // Rotation around X (side) back to 0 slowly if idle
                if (transform.eulerAngles[0]<1)
                    transform.eulerAngles=new Vector3(0, transform.eulerAngles[1], transform.eulerAngles[2]);
            }

            this.transform.Rotate(celluloInput*rotSpeed*Time.deltaTime);
            transform.eulerAngles=new Vector3(clampXrot(transform.eulerAngles[0]),transform.eulerAngles[1],transform.eulerAngles[2]);            //clamp rotation to [-90;90]
            if (robot!=null ||celluloLessDebug)
                this.GetComponent<IndiFlock>().CelluoInputQuat=this.transform.rotation;
        }
        else
        {
            //print("Ctrl mode 2"+celluloInput);
            /*Controlls are :   X : speed variation : max at 0 (velocity control)
                                Y : Create Rotation around X (side) axis (angular velocity control)
                                Theta : Set fish Theta (angle control)
                                */
            float baseSpeed=mSpeed;
            baseSpeed*=1f-(0.9f*Mathf.Abs(celluloInput[0]));

            celluloInput[1]*=-1; //Inverse Y controlls

            //TODO : On Low Cellulo[1], restore rotX to 0 slowly
            int XrotInput=1;
            if (Mathf.Abs(celluloInput[XrotInput])<0.2f && transform.eulerAngles[0]>0.1)
            {
                celluloInput[XrotInput]=Mathf.Sign(transform.eulerAngles[0]-180)*0.45f; // Rotation around X (side) back to 0 slowly if idle
                if (transform.eulerAngles[0]<1)
                    transform.eulerAngles=new Vector3(0, transform.eulerAngles[1], transform.eulerAngles[2]);
            }
            //  
            Vector3 Xrotation=Vector3.zero;
            Xrotation[0]=celluloInput[1];
            Quaternion XQuat=Quaternion.Euler(Xrotation);
            XQuat.SetLookRotation(XQuat*this.transform.forward);

            Quaternion celluloThetaRot= Quaternion.Euler(new Vector3(0,celluloTheta,0));
            Quaternion fromCurrToTheta=Quaternion.identity;
            fromCurrToTheta.SetLookRotation(celluloThetaRot*Vector3.forward);//celluloTheta
            if(celluloTheta<1f) //rotation of <1° mess quaternion generation
                fromCurrToTheta=Quaternion.identity;

            transform.eulerAngles=new Vector3(clampXrot(transform.eulerAngles[0]),transform.eulerAngles[1],transform.eulerAngles[2]);


            if (robot!=null || celluloLessDebug)
                this.GetComponent<IndiFlock>().CelluoInputQuat=XQuat*fromCurrToTheta;
            print((Quaternion.Euler(Xrotation)*fromCurrToTheta).eulerAngles);
        }
 
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

    void connect() {
        if(robot != null) return;

        robot = new Cellulo(); // just taking new robot from the pool or failing
        Debug.Log("Robot connection to pool tried "+"\n"+"New value is :"+robot);
        initialCelluloTheta=robot.getTheta();
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
        if (this.gameObject.GetComponent<IndiFlock>()!=null)
            {
                IndiFlock IDS =this.gameObject.GetComponent<IndiFlock>();
                print("Cellulo Item with a IndiFlock found");
                print("Color Sent bool = "+IDS.colorSent);
            // k++;
            // if (k>500)
            //     IDS.colorSent=false;
                if(IDS.colorSent)
                    return;
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
                //Aura enable
                IDS.colorSent=true;
                
            }

    }
    void OnDrawGizmos(){
        Gizmos.color = Color.yellow;
        if (amIcontrolled)
            Gizmos.color = Color.red;
        Gizmos.DrawSphere(transform.position, 0.5f);

    }
    void amIcontrolledUpdate(){
         if(robot != null || celluloLessDebug)
            amIcontrolled=true;
        else 
            amIcontrolled=false;
    }

    void OnDisable()
    {
#if !UNITY_EDITOR
        CancelInvoke();
        StopAllCoroutines();
        print("*STOP*");
#endif
    }

}