﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Drawing;

public class IndiFlock : MonoBehaviour
{
    public float speed;
    float rotationSpeed=2.0f;
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
    // Start is called before the first frame update
    void Start()
    {
        speed=globalFlock.fishMaxSpeed;
        speed=Random.Range(0.8f*speed,1.2f *speed);
        //speed=0.9f;
        materialScript=this.gameObject.GetComponentInChildren<MaterialMods>();
        colorSent=false;
    }

    // Update is called once per frame
    void Update()
    {
        if (FishColor!=null)
            prevFishColor=FishColor;
        if (materialScript==null)
            materialScript=this.gameObject.GetComponentInChildren<MaterialMods>();

        if(Random.Range(0,10)<3)
            ApplyFlockingRules();

        swimForward();
       

        string previousMTN = mainTextureName;
        if(previousMTN!=this.GetComponentInChildren<Renderer>().material.mainTexture.name)
        {
            print("Color change");
            colorSent=false;
            //Color Robot LED and put variable "robot color On" to limit Bandwidth usage
        }

        mainTextureName =this.GetComponentInChildren<Renderer>().material.mainTexture.name;
        if (mainTextureName[0]=='F'){
            string[] colorstxt={materialScript.colourIdentification(mainTextureName)[0],materialScript.colourIdentification(mainTextureName)[1]};
            FishColor.setStringsFromTable(colorstxt);
        }

        toggleAura();

        

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
        
        //if (isControlled) : turn on aura (particle system) 
        return;
        }
    }
    void ApplyFlockingRules() {
        GameObject[] gos;
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
            Vector3 centroidPos=Vector3.zero;

            foreach (GameObject go in gos){
                if(go!=this.gameObject){
                    dist = Vector3.Distance(go.transform.position,this.transform.position);
                    if(dist<=neighbourDistance){
                        centroidPos+=(go.transform.position); //direction centre
                        groupSize++;
                        if(dist < 10.0f){
                            vavoid+= (this.transform.position - go.transform.position)/(dist*0.2f);
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

                //speed = 1;
                
                Vector3 swimAroundPos= new Vector3(120f,20f,250f);
                Vector3 direction = (   3f*(centroidPos-this.transform.position) +
                                        2f*vavoid  +
                                        0.01f*Mathf.Min(10,Vector3.Distance(swimAroundPos,this.transform.position))*(swimAroundPos-this.transform.position)   );
                if(direction!=Vector3.zero)
                    transform.rotation= Quaternion.Slerp(transform.rotation,
                                                        Quaternion.LookRotation(direction),
                                                        rotationSpeed *Time.deltaTime ) ;
            //Adding random jerk movement
                direction.Set(direction[0]*Random.Range(-1,2),direction[1]*Random.Range(-1,2),direction[2]*Random.Range(-1,2));
                if(direction!=Vector3.zero && Random.Range(0,5000)<10) 
                    transform.rotation= Quaternion.Slerp(   transform.rotation,
                                                            Quaternion.LookRotation(direction),
                                                            rotationSpeed *Time.deltaTime ) ;
            

            return;
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
                                                        rotationSpeed *Time.deltaTime ) ;
                direction.Set(direction[0]*Random.Range(-1,2),direction[1]*Random.Range(-1,2),direction[2]*Random.Range(-1,2));
            //Adding random jerk movement
                if(direction!=Vector3.zero && Random.Range(0,1000)<100) 
                    transform.rotation= Quaternion.Slerp(   transform.rotation,
                                                            Quaternion.LookRotation(direction),
                                                            rotationSpeed *Time.deltaTime ) ;
            }
        }

    }
}