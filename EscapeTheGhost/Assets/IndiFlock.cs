using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Drawing;

public class IndiFlock : MonoBehaviour
{
    public float speed;
    float AutorotationSpeed=3.5f;
    Vector3 averageHeading;
    Vector3 averagePosition;
    float neighbourDistance=45.0f;
    MaterialMods materialScript;
    public class ColorCodes{ 
        public float[] bodyColors= new float[3];
        public float[] stripesColors= new float[3];
        string bodyColorString ;
        string stripesColorString ;

        void setColorFromText(){
            System.Drawing.Color curr;      //Using .NET Color class instead of Unity for more properties access
            //Colors from https://docs.microsoft.com/en-us/dotnet/api/system.drawing.color?view=netframework-4.8 
            //If DLL not found for color definition : https://github.com/dotnet/core/issues/2746 ; check install libc6-dev / libgdiplus
            switch (bodyColorString)
            {
                case "Citrus":
                    curr=System.Drawing.Color.GreenYellow;
                    break;                                        
                case "Classic":
                    curr=System.Drawing.Color.Orange;
                    break;                     
                case "DeepSea":
                    curr=System.Drawing.Color.Navy;                                      
                    break;
                case "Dusk":
                    curr=System.Drawing.Color.Purple;
                    break;                                     
                case "Lagoon":
                    curr=System.Drawing.Color.MediumTurquoise;
                    break;                                     
                case "Lava":
                    curr=System.Drawing.Color.OrangeRed;
                    break;                                     
                case "Magenta":
                    curr=System.Drawing.Color.MediumVioletRed;
                    break;                                     
                default:
                    break;
            }
            bodyColors[0]=curr.R;
            bodyColors[1]=curr.G;
            bodyColors[2]=curr.B;

            switch (stripesColorString)
            {
                case "Blue":
                    curr=System.Drawing.Color.SkyBlue;
                    break;                                        
                case "BW":
                    curr=System.Drawing.Color.White;
                    break;                                        
                case "DarkBlue":
                    curr=System.Drawing.Color.Indigo;
                    break;                                        
                case "Green":
                    curr=System.Drawing.Color.DarkGreen;
                    break;                                                            
                case "LightGreen":
                    curr=System.Drawing.Color.SpringGreen;
                    break;                                        
                case "Magenta":
                    curr=System.Drawing.Color.Violet;
                    break;                                                            
                case "Pink":
                    curr=System.Drawing.Color.Pink;
                    break;                                     
                case "Red":
                    curr=System.Drawing.Color.Firebrick;                                        
                    break;                    
                default:
                    break;
                   
            }
            stripesColors[0]=curr.R;
            stripesColors[1]=curr.G;
            stripesColors[2]=curr.B;
            return;
        }


        public void setStringsFromTable(string[] colorStr){
            if(colorStr.Length!=2)
                print("HolUp, string fed is not 2 entries");
            this.bodyColorString=colorStr[0];
            this.stripesColorString=colorStr[1];
            setColorFromText();
            return; 
        }
        public void displayColors(){
            print("I'm a fish and my body color is "+bodyColorString+" and my stripes are "+stripesColorString);
            return;
        }
        public string getStripesString(){
            return stripesColorString;
        }
        public float[] getStripesValues(){
            return stripesColors;
        }
        public string getBodyString(){
            return bodyColorString;
        }
        public float[] getBodyValues(){
            return bodyColors;
        }
        public float getStripesRedValue(){
            return stripesColors[0];
        }
        public float getStripesGreenValue(){
            return stripesColors[1];
        }
        public float getStripesBlueValue(){
            return stripesColors[2];
        }
        public float getBodyRedValue(){
            return bodyColors[0];
        }
        public float getBodyGreenValue(){
            return bodyColors[1];
        }
        public float getBodyBlueValue(){
            return bodyColors[2];
        }



    }
    public ColorCodes FishColor= new ColorCodes();
    public ColorCodes prevFishColor= new ColorCodes();
    public bool colorSent;
    string mainTextureName;
    public Quaternion CelluoInputQuat;          //Quat Cellulo tells the fish to rotate to
    public Quaternion GoalQuat=Quaternion.identity;
    bool amIcontrolled;
    public float RotationSpeed;
    public bool foodGotten=false;
    public bool GoalReached=false;
    public float forwardSpeedModfier=1;
    public bool helpImLost=false;
    // Start is called before the first frame update
    void Start()
    {
        speed=globalFlock.fishMaxSpeed;
        //speed=0.9f;
        materialScript=this.gameObject.GetComponentInChildren<MaterialMods>();
        colorSent=false;
        CelluoInputQuat=Quaternion.identity;
        RotationSpeed=AutorotationSpeed;
        forwardSpeedModfier=1;
        previousFrameTransform=this.transform;
    }

    // Update is called once per frame
    void Update()
    {
        RotationSpeed=globalFlock.CelluloRotationSpeed;
        AutorotationSpeed=globalFlock.AutorotationSpeed;
        amIcontrolled=this.gameObject.GetComponent<BasicBehaviourScriptCellulo>().amIcontrolled;
        if (FishColor!=null)
            prevFishColor=FishColor;
        if (materialScript==null)
            materialScript=this.gameObject.GetComponentInChildren<MaterialMods>();

        if(Random.Range(0,10)<10)
            ApplyFlockingRules();

        swimForward();
       

        string previousMTN = mainTextureName;
        if(previousMTN!=this.GetComponentInChildren<Renderer>().material.mainTexture.name)
        {
            //print("Color change");
            colorSent=false;
            //Color Robot LED and put variable "robot color On" to limit Bandwidth usage
        }

        mainTextureName =this.GetComponentInChildren<Renderer>().material.mainTexture.name;
        if (mainTextureName[0]=='F'){
            string[] colorstxt={materialScript.colourIdentification(mainTextureName)[0],materialScript.colourIdentification(mainTextureName)[1]};
            FishColor.setStringsFromTable(colorstxt);
        }

        toggleAura();

        randomTeleportFix();

    }

    void swimForward(){
        transform.Translate(0,0,Time.deltaTime * 5*speed);
        return;
    }
    void toggleAura(){
                //Aura : add to Cellulo Script to display only if controlled.
        
        ParticleSystem ps = GetComponentInChildren<ParticleSystem>();
        if(ps!=null){
        //ps.main.startColor = new Color(r,g,b,a);
        var main = ps.main;
        //print(FishColor.getStripesRedValue()+" \n"+FishColor.getStripesRedValue()+" \n"+FishColor.getStripesBlueValue()+" \n");
        main.startColor = new UnityEngine.Color(FishColor.getStripesRedValue()/255f,FishColor.getStripesGreenValue()/255f,
                                    FishColor.getStripesBlueValue()/255f,0.05f);
        
        if (amIcontrolled) 
            ps.Play();
        else{
            ps.Stop();
            ps.Clear();

        }
        return;
        }
    }
    void ApplyFlockingRules() {
        List<GameObject> gos;
        gos = globalFlock.swarm_entities; 

        Vector3 vcentre=Vector3.zero;
        Vector3 vavoid=Vector3.zero;
        float gSpeed = 0.1f;

        float dist;
        Vector3 goalPos=globalFlock.goalPos;

        int groupSize=0;
        //[SerializeField]
        int RuleSet=2;

        switch (RuleSet)
        {
            case 2:
                ApplyRuleSet2();
                break;
            
            default:
                ApplyRuleSet1();
                break;
        }
        

        void ApplyRuleSet2(){
            
            //Heading Method
            int playerNum=0;
            Vector3 centroidPos=Vector3.zero;
            Vector3 playerPos=Vector3.zero;
            bool playerInNeighboorhood=false;
            foreach (GameObject go in gos){
                if(go!=this.gameObject){
                    if(go.GetComponent<BasicBehaviourScriptCellulo>().amIcontrolled==true)    playerNum++;
                    dist = Vector3.Distance(go.transform.position,this.transform.position);
                    if(dist<=neighbourDistance){
                        centroidPos+=(go.transform.position); //direction centre
                        groupSize++;
                        if(dist < 10.0f){
                            vavoid+= (this.transform.position - go.transform.position)/(dist*0.2f);
                        }
                        if(go.GetComponent<BasicBehaviourScriptCellulo>().amIcontrolled==true){ //if controller swarm have higher weight for following
                            centroidPos+=(4*go.transform.position);
                            groupSize+=4;
                            playerInNeighboorhood=true;
                            playerPos=go.transform.position;
                        }
                    //    IndiFlock anotherFlock = go.GetComponent<IndiFlock>();
                    //    gSpeed = gSpeed + anotherFlock.speed;
                    }
                }
            }
            if (groupSize>0)
            {
                centroidPos/=groupSize;
            }
            bool needToSwimToPlayer=false;
            if(playerInNeighboorhood==false){
                foreach (GameObject go in gos){
                    if(go.GetComponent<BasicBehaviourScriptCellulo>().amIcontrolled==true){
                        playerPos=go.transform.position;
                        needToSwimToPlayer=true;
                    }
                }
            }            
            //GoalPos
            Vector3 swimAroundPos= new Vector3(120f,20f,750f);
            float swimAroundCoef= 0.0001f;
            
            Vector3 direction = (   3f*(centroidPos-this.transform.position) +
                                    1f*vavoid  +
                                    swimAroundCoef*Mathf.Min(10,Vector3.Distance(swimAroundPos,this.transform.position))*(swimAroundPos-this.transform.position)   );
            if(!playerInNeighboorhood && playerNum>0){
                swimAroundPos=playerPos;
                direction=swimAroundPos-this.transform.position;
            }
            if(direction!=Vector3.zero ||amIcontrolled){
                if (!(CelluoInputQuat==Quaternion.identity))
                {
                    //Quaternion.Lerp : Averages Cellulo Input and Instinct behaviour ; for controlled robots swarm does not impact
                    GoalQuat=CelluoInputQuat;   //Quaternion.Lerp(CelluoInputQuat,Quaternion.LookRotation(direction),0.0f);
                    
    
                }
                else{
                    GoalQuat = Quaternion.LookRotation(direction);
                }
                
                if (amIcontrolled){
                    if(helpImLost){
                        Vector3 swarmCenterPosition=GameObject.Find("SwarmCenter").transform.position;
                        GoalQuat=Quaternion.LookRotation(swarmCenterPosition-this.transform.position);
                    }

                    //Add to Behaviour script for speed phi theta
                    transform.rotation= Quaternion.Slerp(transform.rotation,
                                                    GoalQuat,
                                                    RotationSpeed *25*Time.deltaTime ) ;

                }

                else
                    transform.rotation= Quaternion.Slerp(transform.rotation,
                                                    GoalQuat,
                                                    AutorotationSpeed *Time.deltaTime ) ;
            }
            // //Adding random jerk movement
            //     direction.Set(direction[0]*Random.Range(-1,2),direction[1]*Random.Range(-1,2),direction[2]*Random.Range(-1,2));
            //     if(direction!=Vector3.zero && Random.Range(0,5000)<10) 
            //         transform.rotation= Quaternion.Slerp(   transform.rotation,
            //                                                 Quaternion.LookRotation(direction),
            //                                                 AutorotationSpeed *Time.deltaTime ) ;
            
            speedAdjustment();
/* 
==========================
Haptic Feedback Test code
==========================
*/         
            Quaternion desired_rot=Quaternion.FromToRotation(transform.forward, direction.normalized);
/*             print("Dot between Goal dir and forward : "+Vector3.Dot(direction.normalized,transform.forward)+
            "\n Direction : "+Vector3.Normalize(direction)+
            "\n Forward : "+Vector3.Normalize(transform.forward)
            +"\n From To rot Euler : " +desired_rot.eulerAngles );
            Debug.DrawRay(transform.position, desired_rot.eulerAngles, UnityEngine.Color.green);
             */
            if (DeBug || Vector3.Dot(direction.normalized,transform.forward)<0.85)
            {
                // print(this.gameObject.name+" ; Applying haptic brake");
                determineBrakeDirection(desired_rot);
            }

            return;

            void speedAdjustment(){
                //adjusts the speed if member of a centroid is far from the center (80% of max neighboor distance)
                Vector3 GoalDir=centroidPos-this.transform.position;
                if (GoalDir.sqrMagnitude>Mathf.Pow(neighbourDistance*0.8f,2f)){
                    float mult=Vector3.Dot(this.transform.forward, GoalDir.normalized);
                    speed=globalFlock.fishMaxSpeed*(0.9f+(0.1f*mult));
                    return;
                }
                speed=globalFlock.fishMaxSpeed;
                if (amIcontrolled)
                    speed=globalFlock.fishMaxSpeed * forwardSpeedModfier;
                if(helpImLost){
                    speed=globalFlock.fishMaxSpeed*3f;
                }
            }
        }




        void ApplyRuleSet1(){
        //Basic Flocking rules
            foreach (GameObject go in gos){
                if(go!=this.gameObject){
                    dist = Vector3.Distance(go.transform.position,this.transform.position);
                    if(dist<=neighbourDistance){
                        vcentre+=(go.transform.position -this.transform.position);
                        groupSize++;
                        if(dist < 5.0f){
                            vavoid+= (this.transform.position - go.transform.position);
                        }
                        IndiFlock anotherFlock = go.GetComponent<IndiFlock>();
                        gSpeed = gSpeed + anotherFlock.speed;
                    }
                }
            }
            if (groupSize>0)
            {
                vcentre = vcentre/groupSize + 3f*(goalPos - this.transform.position);
                //print("gsize ="+groupSize+"\n"+"gspeed="+gSpeed+"\n"+"currentspeed="+speed);
                speed= gSpeed/groupSize;
                if (speed>3)
                    speed=3;
                //print("gsize ="+groupSize+"\n"+"gspeed="+gSpeed+"\n"+"Newspeed="+speed);
                Vector3 direction = (1.2f*vcentre + 0f*vavoid) - transform.position;
                if(direction!=Vector3.zero)
                    transform.rotation= Quaternion.Slerp(transform.rotation,
                                                        Quaternion.LookRotation(direction),
                                                        AutorotationSpeed *Time.deltaTime ) ;
                direction.Set(direction[0]*Random.Range(-1,2),direction[1]*Random.Range(-1,2),direction[2]*Random.Range(-1,2));
            // //Adding random jerk movement
            //     if(direction!=Vector3.zero && Random.Range(0,1000)<100) 
            //         transform.rotation= Quaternion.Slerp(   transform.rotation,
            //                                                 Quaternion.LookRotation(direction),
            //                                                 AutorotationSpeed *Time.deltaTime ) ;
            }
        }

    }

    public bool DeBug;
    public float A;
    public float B;
    public float C;

    void determineBrakeDirection(Quaternion DesiredRot){
        Vector3 EulerForm=DesiredRot.eulerAngles;
        Vector3 forwardSample=Vector3.forward;
        forwardSample= DesiredRot*forwardSample;

        /* print(this.gameObject.name+" desired local heading "+forwardSample);
        if (forwardSample[2]<0.9f)
            print(this.gameObject.name+" needs to rotate"); */
    }
    public bool isControlled(){
        return amIcontrolled;
    }
    Vector3 previousFrameposition;
    Transform previousFrameTransform;
    void randomTeleportFix(){
        Vector3 previous_pos= previousFrameposition;
        float distMagnitude=(previous_pos-this.transform.position).sqrMagnitude;
        if(distMagnitude>500*500){
            Debug.LogWarning("Warning random teleport occurred but was fixed");
            this.transform.position=previousFrameposition;
            this.transform.rotation=previousFrameTransform.rotation;
        }
        if(amIcontrolled)print(this.transform.position+" Compared to "+previousFrameposition);
        previousFrameposition=this.transform.position;
    }
}
