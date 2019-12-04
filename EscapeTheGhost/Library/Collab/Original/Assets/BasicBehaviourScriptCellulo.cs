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
    public float rotSpeed=0.5f;
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

    public bool celluloLessDebug=false;
    [Range(-1f,1f)]
    public float debugCelluloX;
    [Range(-1f,1f)]
    public float debugCelluloY;

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
        Vector3 celluloInput=Vector3.zero;
        if(robot != null) {
            currentRobotPos.Set(robot.getX(), robot.getY(), 10.0f);
//           Debug.Log("Pos value for Cellulo :"+robot.getID()+" is :"+currentRobotPos);
            float now = Time.time;
//            Debug.Log(this.gameObject.GetComponent<LibDotsMapping>()); //returns null
            convertCoord= this.gameObject.GetComponent<LibDotsMapping>();
            celluloInput = convertCoord.libDotsConvertion(currentRobotPos[0],currentRobotPos[1],(int)CtrlMode);

//            Debug.Log("Pos value for Cellulo :"+robot.getID()+" is : "+currentRobotPos+"\n Converted to joystick axis :"+celluloInput);
            //if(!isRunning) return;
            robotVisualUpdate();
            
        }
        else {
            k++;
            if (k>500){ //soften load on Unity Editor;
                k=0;
                if(Cellulo.robotsRemaining() >= 1) connect();
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
        bool orientationControl=true;
        
        if (celluloLessDebug){
            celluloInput[0]=debugCelluloX;
            celluloInput[1]=debugCelluloY;

        }
        
        if (orientationControl && CtrlMode==Mode.Mono)
        {
        //Z Orientation Correction
            if (Mathf.Abs(transform.eulerAngles[2])>0.5){
                celluloInput[2]=Mathf.Sign(transform.eulerAngles[2]-180)*Mathf.Max(10f,1f/(0.001f+0.0002f*Mathf.Abs(transform.eulerAngles[2]-180)));
//                print(1f/(0.0002f*Mathf.Abs(transform.eulerAngles[2]-180)));
            }
            else
            {
               transform.eulerAngles=new Vector3(transform.eulerAngles[0], transform.eulerAngles[1], 0);
            }

        //Intuitive Joystick Input Swap
            celluloInput=swapInput(celluloInput); //Rotations around X axis means changes in YZ plane and Z=0 so in Y direction


            celluloInput[0]=-celluloInput[0]; //positive X is down (left handed axis in Unity)
//            print("oriCtrl (X rot, Y rot)"+celluloInput); //debug

        //If Idle, slowly go back to horizontal plane movement
            if (Mathf.Abs(celluloInput[0])<0.2f && transform.eulerAngles[0]>0.1)
            {
                celluloInput[0]=Mathf.Sign(transform.eulerAngles[0]-180)*0.45f; // Rotation around X (side) back to 0 slowly if idle
                if (transform.eulerAngles[0]<1)
                    transform.eulerAngles=new Vector3(0, transform.eulerAngles[1], transform.eulerAngles[2]);
            }

            this.transform.Rotate(celluloInput*rotSpeed*Time.deltaTime);
            transform.eulerAngles=new Vector3(clampXrot(transform.eulerAngles[0]),transform.eulerAngles[1],transform.eulerAngles[2]);            //clamp rotation to [-90;90]

        }
        else
        {
            print("translate ctrl"+celluloInput);
            transform.Translate(mSpeed*celluloInput*Time.deltaTime, camTransform);
        }
        transform.Translate(0,0,Time.deltaTime * 5*mSpeed); //swim forward
        //transform.Translate(mSpeed*Time.deltaTime*localTranslate[0],mSpeed*Time.deltaTime*localTranslate[1],mSpeed*Time.deltaTime*localTranslate[2], Space.World);

    }

    void connect() {
        if(robot != null) return;

        robot = new Cellulo(); // just taking new robot from the pool or failing
        Debug.Log("Robot connection to pool tried "+"\n"+"New value is :"+robot);
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

    void OnApplicationQuit(){
        Debug.Log("Quiting application");
        
        if (robot!=null){
            print("\n * \n XXXXXX");
            robot=null;         //not enough, still crashes
            
            print("robot set to null");
            print(robot);
        }

        print("App quitted");
    }
}