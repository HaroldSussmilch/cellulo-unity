using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LibDotsMapping : MonoBehaviour
{
    // // Start is called before the first frame update
    // void Start()
    // {
        
    // }

    // // Update is called once per frame
    // void Update()
    // {
        
    // }
    [SerializeField]
    int minX;
    [SerializeField]
    int maxX;
    [SerializeField]
    int minY;
    [SerializeField]
    int maxY;
    int rangeX;
    int rangeY;
    int nb_zones;
    int lineSepWidth =10;
    int line_start_pos;
    float X_pos;
    float Y_pos;
    [Range(0.0f,0.5f)]
    public float deadZoneThreshold = 0.05f;
    public enum ScalingMode {Linear,Exponential,Steps};
    public ScalingMode controlMode = ScalingMode.Linear;
    public enum PaperFormat {A0,A1,A2,A3,A4}
    PaperFormat format=PaperFormat.A3;


    public Vector3 libDotsConvertion(float X, float Y, int MappingMode){
        //Converts X,Y libdots coordinates
        //TODO : mode is int, string might be more clear
    //A3 : 297 × 420 mm
        format=(PaperFormat) GameObject.Find("PaperTypeDropDown").GetComponent<TMPro.TMP_Dropdown>().value;  
        X_pos=X;
        Y_pos=Y;
        switch ((int)format)
        {
            case(int)PaperFormat.A0:
                minX=0;
                minY=0;
                maxX=1189;
                maxY=-841;
                break;
            case(int)PaperFormat.A1:
                minX=0;
                minY=0;
                maxX=841;
                maxY=-594;
                break;
            case(int)PaperFormat.A2:
                minX=0;
                minY=0;
                maxX=594;
                maxY=-420;
                break;
            case(int)PaperFormat.A3:
                minX=0;
                minY=0;
                maxX=420;
                maxY=-297;
                break;
            case(int)PaperFormat.A4:
                minX=0;
                minY=0;
                maxX=297;
                maxY=-210;
                break;
            default:
                minX=0;
                minY=0;
                maxX=420;
                maxY=-297;
                break;
        }
        addCelluloOffet();


        Vector3 returnVector =  Vector3.zero;
        switch (MappingMode){
            case 0: //Mono Joystick type : [-1,1] ; mode forward speed Cst + rotation around Y(up) and X(side) local axis
                //Libdot range : [25,-40] -> [410, -265]
                nb_zones=1;
/*                 minX=25;
                minY=-40;
                maxX=410;
                maxY=-277; */

                computerange();
                //TODO :
                returnVector[0]=-1+2*(X_pos-minX)/rangeX; //Rotation around X axis (modifying up/down)
                returnVector[1]=-(-1+2*Mathf.Abs((Y_pos-minY))/rangeY); //Rotation around Y axis (modifying left/right direction)
                returnVector[2]=0;  //Rotation on Z axis

                break;
            case 1: //Dual Joystick type : [-1,1] ; sheet even-split in the middle verticaly (landscape orientation of A4 sheet)
                    //Control forward-normal plane movement (2D mario type) on left and down-normal plane movement (top-down Pac-man like)
                nb_zones=2;
                computerange();
                line_start_pos =minX+rangeX;
                int zone =dualZoneDetection();
                if (zone==0){
                    returnVector[0]=0;
                    returnVector[1]=0;
                    returnVector[2]=0;
                }
                if (zone==1){
                    X_pos = (2*(X_pos -(minX))/rangeX)-1; //X_pos between -1 and 1;
                    Y_pos = -(2*Mathf.Abs((Y_pos -(minY))/rangeY))+1;
                    returnVector[0]=X_pos;
                    returnVector[1]=Y_pos;
                    returnVector[2]=0;
                }
                if (zone==2){
                    X_pos = (2*(X_pos -(line_start_pos))/rangeX)-1; //X_pos between -1 and 1;
                    Y_pos = -(2*Mathf.Abs((Y_pos -(minY))/rangeY))+1;
                    returnVector[0]=X_pos;
                    returnVector[1]=0;
                    returnVector[2]=Y_pos;
                }
                break;
            default: //No more ideas
                returnVector[0]=0;
                returnVector[1]=0;
                returnVector[2]=0;
                break;
        }
        //string controlMode="exp";

        if (controlMode==ScalingMode.Exponential) //for exponential movement controll on cellulo
        {
            returnVector=ExpNormalized(returnVector);
        }
        
        if(Mathf.Abs(returnVector[0])<deadZoneThreshold)
            returnVector[0]=0;
        if(Mathf.Abs(returnVector[1])<deadZoneThreshold)
            returnVector[1]=0;
        if(Mathf.Abs(returnVector[2])<deadZoneThreshold)
            returnVector[2]=0;

        if(Mathf.Abs(returnVector[0])>1)
            returnVector[0]=(int)returnVector[0];
        if(Mathf.Abs(returnVector[1])>1)
            returnVector[1]=(int)returnVector[1];
        if(Mathf.Abs(returnVector[2])>1)
            returnVector[2]=(int)returnVector[2];
        if(controlMode==ScalingMode.Linear)
            return returnVector;
        if (controlMode==ScalingMode.Steps)
        {
            returnVector=discretizeVector(returnVector);
        }

        return returnVector;

        

    } 

    void computerange(){
        //Computes the range of our control joysticks, depending on number of zones
        if (nb_zones==1){
        rangeX=maxX-minX;
        rangeY=Mathf.Abs(maxY-minY);
        return;
        }

        if (nb_zones==2){
        rangeX=(Mathf.Abs(maxX-minX) -lineSepWidth*(nb_zones-1))/nb_zones;      //Works for Horizontal zones, implement nb_Horiz_zones and nb_Vert_zones
        rangeY=(Mathf.Abs(maxY-minY));
        }

    }
    int dualZoneDetection(){
        if (X_pos<line_start_pos && X_pos>minX)     //if (on sheet left side)
        {
            return 1;
        }
        else if(X_pos>line_start_pos+lineSepWidth && X_pos<maxX) //if (on sheet right side)
        {

            return 2;
        }
        else                                            //else : lib dot irregular value or on line)
            return 0;
        
    }

    Vector3 discretizeVector(Vector3 returnVector){
        float step =0.2f;
        float mult=1/step;
        for (int i=0;i<3;i++){
            returnVector[i]=((int)(returnVector[i]*mult))*step;
        }
        return returnVector;
    }
    Vector3 ExpNormalized(Vector3 returnVector){
        float expRange =3f;
        float expMin = 0;
        float sign;

        for (int i=0;i<3;i++){
            sign=Mathf.Sign(returnVector[i]);
            returnVector[i]=Mathf.Abs(returnVector[i]);
            returnVector[i]*=expRange;
            returnVector[i]+=expMin;
            returnVector[i]=Mathf.Exp(returnVector[i]) ;
            returnVector[i]-= Mathf.Exp(expMin);
            returnVector[i]/=Mathf.Exp(expRange+expMin-(expRange*0.1f));
            returnVector[i]*=sign;
        }
        return returnVector;
    }
    void addCelluloOffet(){
        //Offsets the range of coordinates so that the -1 - 1 values are reachable 
        minY-=10;
        maxY+=10;
        minX+=20;
        maxX-=20;

    }
}
