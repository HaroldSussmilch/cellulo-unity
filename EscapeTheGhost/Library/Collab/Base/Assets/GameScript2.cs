using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class GameScript2 : MonoBehaviour
{

    public enum GameMode {FoodToGoal,None}
    public GameMode Gmode;
    // Start is called before the first frame update
    globalFlock globalFlock;
    float start_time=0;
    int scoreStart=1000;
    void Start()
    {
       // SliderInitGUI();
        globalFlock=GameObject.Find("SimMasterInfo").GetComponent<globalFlock>();

        //Gmode = GameMode.None;
        //FoodPos.Set(200,40,400);
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.R)){
            ResetGame();
        }
        gameUpdate();
    }
    public void ResetGame(){
        print("Reset button pressed ");
        GameInit();
    }
    IndiFlock GOscript;
    int FinalScore=0;
    void gameUpdate(){

        int total1=0;
        int total2=0;
        createObjectiveIndicator();
        foreach(GameObject GO in globalFlock.swarm_entities){
            GOscript =GO.GetComponent<IndiFlock>();
            if (GOscript.isControlled()){
                total1++;
                if (GOscript.foodGotten)
                    total2++;
                
            }
        }
        if (total2>=total1 && total2>0){
            activateGoal();
        }
        //  if(goalIsActive)
        updateObjectiveIndicator();
        scoreCompute();
        if(IsGameOver()){
            if(FinalScore==0)
                FinalScore=score;
        }
        
    }
    void GameInit(){
        scoreInit();
        resetSwarmPos();
        switch ((int)Gmode){
            case (int)GameMode.None:
                return;
            case (int)GameMode.FoodToGoal:
                goalIsActive=false;
                initFood();
                initGoal();
                break;
            default:
                break;
        }

    }
    void resetSwarmPos(){
        foreach(GameObject GO in globalFlock.swarm_entities)
        {
            //Destroy gameObject + call start ?
            Destroy(GO);
        }
        globalFlock.Start();
        setFish0CtrlToDebugCtrl();
    }

    public Vector3 FoodPos=new Vector3(200,40,400);
    public Vector3 GoalPos=new Vector3(200,40,600);

    public GameObject foodSpherePrefab;
    
    GameObject FoodSphere;
    GameObject GoalSphere;
    public GameObject goalSpherePrefab;

    void initFood(){
        Destroy(FoodSphere);
        FoodSphere=(GameObject) Instantiate(foodSpherePrefab,FoodPos,Quaternion.identity);
    }
    void initGoal(){
        Destroy(GoalSphere);
        GoalSphere=(GameObject) Instantiate(goalSpherePrefab,GoalPos,Quaternion.identity);

    }
    bool goalIsActive=false;
    void activateGoal(){
        if(goalIsActive){
            return;
        }
        GoalSphere.GetComponent<GoalCollider>().isActive=true;
        goalIsActive=true;
        return;
    }
    public GameObject IndicatorPrefab;
    GameObject Indicator;
    string IndicatorName="Target Indicator";
    void createObjectiveIndicator(){
        foreach(GameObject GO in globalFlock.swarm_entities){
            if(GO.GetComponent<IndiFlock>().isControlled()  &&  !IsIndicCreated(GO) ){
                float vertOffset=5f;
                Vector3 IndicatorPos=new Vector3(GO.transform.position[0],GO.transform.position[1]+vertOffset,GO.transform.position[2]);
                Indicator=Instantiate(IndicatorPrefab,GO.transform.position,Quaternion.identity);
                Indicator.name=IndicatorName;
                Indicator.transform.parent=GO.transform;
                Indicator.transform.localPosition=new Vector3(0,vertOffset,0);
            }
            
        }
    }
    bool IsIndicCreated(GameObject GO){
        Transform[] ts = GO.GetComponentsInChildren<Transform>();
        foreach(Transform t in ts){
            if(t.gameObject.name==IndicatorName){
                return true;
            }
        }
        return false;
    }
    void updateObjectiveIndicator(){

        foreach(GameObject GO in globalFlock.swarm_entities)
        {
            if(GO.GetComponentInChildren<IndicatorScript>()!=null){

                IndicatorScript IndicScript=GO.GetComponentInChildren<IndicatorScript>();
                if(GO.GetComponent<IndiFlock>().foodGotten==false){
                    IndicScript.pointAt=FoodSphere;
                }
                else if (GO.GetComponent<IndiFlock>().foodGotten==true){
                    IndicScript.pointAt=GoalSphere;
                }
                Vector3 relativePos = IndicScript.pointAt.transform.position - IndicScript.gameObject.transform.position;
                IndicScript.gameObject.transform.rotation=Quaternion.LookRotation(relativePos);
            }
        }
    }
    int score;
    void scoreInit(){
        FinalScore=0;
        score=scoreStart;
        start_time=Time.time;
    }
    void scoreCompute(){
        int fishThatAte=0;
        foreach(GameObject GO in globalFlock.swarm_entities){
            if(GO.GetComponent<IndiFlock>().foodGotten==true)
                fishThatAte++;
            
        }
        int foodScore=50;
        score=scoreStart-(int)(Time.time-start_time)+fishThatAte*foodScore;
       // print(score);
    }
    bool IsGameOver(){
        int total1=0;
        int total2=0;
        foreach(GameObject GO in globalFlock.swarm_entities){
            if(GO.GetComponent<IndiFlock>().isControlled()){
                total1++;
                if(GO.GetComponent<IndiFlock>().GoalReached)
                    total2++;
            }
        }
        if(total1>0 && total1==total2){
            return true;
        }


        return false;
    }
    public bool DebugMode=false;
    /* Using GUIContent to display an image, a string, and a tooltip */
    public void displayUIconnectionCheck(){
        long diff=Cellulo.totalRobots()-Cellulo.robotsRemaining();
        string display="Cellulos connected : "+Cellulo.totalRobots()+"\n Available Robots in pool : "+Cellulo.robotsRemaining()+"\n Connected players : "+diff;
        print(display);

        if(Input.GetKey(KeyCode.LeftShift)){
            DebugMode=!DebugMode;
            string OnOff=DebugMode ? "ON" : "OFF";

            print("Debug Mode Toggled : "+OnOff);
            setFish0CtrlToDebugCtrl();
            globalFlock.swarm_entities[0].GetComponent<BasicBehaviourScriptCellulo>().celluloLessDebug=DebugMode;
        }

    }

    void setFish0CtrlToDebugCtrl(){
        globalFlock.swarm_entities[0].GetComponent<BasicBehaviourScriptCellulo>().celluloLessDebug=DebugMode;
    }

    GameObject UITarget;
    public Slider sliderX; 
    public Slider sliderY;
    void SliderInitGUI(){
        sliderX=(Slider)GameObject.Find("CelluloXSlider").GetComponent<Slider>();
        sliderY=(Slider)GameObject.Find("CelluloYSlider").GetComponent<Slider>();
    }
    public void SliderChangeGUI(){
        UITarget=globalFlock.swarm_entities[0];
        if (DebugMode){
            UITarget.GetComponent<BasicBehaviourScriptCellulo>().debugCelluloX = sliderX.value;
            UITarget.GetComponent<BasicBehaviourScriptCellulo>().debugCelluloY = sliderY.value;
        }
    }



    public Texture2D icon;
    public Texture2D celluloIcon;
    
    void OnGUI () 
    {
       /*  //GUI.Button (new Rect (10,10,100,20), new GUIContent ("Click me", icon, "This is the tooltip"));
        GUIStyle style;
        GUI.backgroundColor = Color.black;
        GUI.contentColor = Color.black;
        if (GUI.Button (new Rect (10,10,40,40), new GUIContent ("", icon, "Reset Game"))) 
        {
            // This code is executed when the Button is clicked
            ResetGame();
            
        }
        GUI.Label (new Rect (10,10+40,80,20), GUI.tooltip);
        string ScoreDisplayString="Score : "+score.ToString();
        ScoreDisplayString = GUI.TextField (new Rect ((Screen.width / 2)-50, 5, 100, 30), ScoreDisplayString);
        GUI.Button (new Rect (10,Screen.height-10-40,40,40), new GUIContent ("", celluloIcon, "Remaining robots = "+Cellulo.robotsRemaining()+ "\n Robots in pool ="+Cellulo.totalRobots()));
        GUI.Label (new Rect (10,Screen.height-10-40*2,120,40), GUI.tooltip);
 */



    /*     if(IsGameOver()){
            string EndDisplayString = "Game over \n Final Score ="+score;
            EndDisplayString = GUI.TextField (new Rect ((Screen.width / 2)-50, Screen.height/2, 150, 60), EndDisplayString);

        } */
    }
}


