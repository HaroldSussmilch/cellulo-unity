using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using TMPro;

public class GameScript2 : MonoBehaviour
{

    public enum GameMode {FoodToGoal,None}
    public GameMode Gmode;
    // Start is called before the first frame update
    globalFlock globalFlock;
    float start_time=0;
    int scoreStart=1000;
    GameObject UIMaincanvas;
    GameObject SwarmSizeInputField;
    void Start()
    {
        UIMaincanvas=GameObject.Find("Canvas");
       // SliderInitGUI();
        globalFlock=GameObject.Find("SimMasterInfo").GetComponent<globalFlock>();
        toggleDebugUI();

        //Gmode = GameMode.None;
        //FoodPos.Set(200,40,400);

        SwarmSizeInputField=GameObject.Find("SwarmSetSize");
        SwarmSizeInputField.GetComponent<InputField>().text=globalFlock.swarmInitSize.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        if (UITarget==null)
            UITarget=globalFlock.swarm_entities[0]; //TODO

        if (Input.GetKeyDown(KeyCode.R)){
            ResetGame();
        }
        gameUpdate();
    }
    public void ResetGame(){
        print("Reset button pressed ");
        GameInit();
        SwarmSizeInputField.GetComponent<InputField>().text=globalFlock.swarmInitSize.ToString();

        PauseSimAMoment();
    }

    float[] storedSpeeds;
    public void  PauseSimAMoment(){
        if(globalFlock.Speed!=0 && globalFlock.AutoFlockRotSpeed!=0 && globalFlock.manualRotationSpeed!=0)
            //protection against multiple resets
            storedSpeeds=new float[3] {globalFlock.fishMaxSpeed,globalFlock.AutorotationSpeed,globalFlock.CelluloRotationSpeed};
        globalFlock.Speed=0;
        globalFlock.AutoFlockRotSpeed=0;
        globalFlock.manualRotationSpeed=0;

        Invoke("restoreSpeeds", 2.5f);
    }
    void restoreSpeeds(){
        globalFlock.Speed=storedSpeeds[0];
        globalFlock.AutoFlockRotSpeed=storedSpeeds[1];
        globalFlock.manualRotationSpeed=storedSpeeds[2];

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
        if(FoodSphere!=null)
            updateObjectiveIndicator();
        scoreCompute();
        if(!(UIMaincanvas.GetComponent<Text>().text.Contains("Game Over")))
            UIMaincanvas.GetComponent<Text>().text=score.ToString();
        DebugInfoUpdate();
        if(IsGameOver()){
            if(FinalScore==0){
                FinalScore=score;
                float elapsedTime=Time.time-start_time;
                UIMaincanvas.GetComponent<Text>().text="Game Over \n Final Score : "+FinalScore+ "\n Total time : "+elapsedTime;
                }
            
        }
        
    }
    void GameInit(){
        scoreInit();
        resetSwarmPos();
        UIMaincanvas.GetComponent<Text>().text="Start Game !";
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
            if(GO.GetComponent<BasicBehaviourScriptCellulo>().robot!=null)GO.GetComponent<BasicBehaviourScriptCellulo>().robot.clearTracking ();
        }
        globalFlock.Start();
        setFish0CtrlToDebugCtrl();
        Camera m_MainCamera=Camera.main;
        m_MainCamera.transform.position=globalFlock.swarm_entities[0].transform.position; //TODO
    }

    public Vector3 FoodPos=new Vector3(200,40,500);
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
            if(globalFlock.swarm_entities[0].GetComponent<BasicBehaviourScriptCellulo>().robot==null) //TODO
                setFish0CtrlToDebugCtrl();
            toggleDebugUI();
        }
    }
    public CanvasGroup DebugUI;
    GameObject DebugInfo;
    void toggleDebugUI(){

        DebugUI.interactable= DebugMode;
        DebugUI.alpha = DebugMode ? 1:0 ;
        DebugInfo=GameObject.Find("DebugInfo");
   }
    void setFish0CtrlToDebugCtrl(){ //TODO
        globalFlock.swarm_entities[0].GetComponent<BasicBehaviourScriptCellulo>().celluloLessDebug=DebugMode;
        globalFlock.swarm_entities[0].GetComponent<BasicBehaviourScriptCellulo>().MoveMode=(BasicBehaviourScriptCellulo.ControlMode)
                            GameObject.Find("ControlModeDropdown").GetComponent<TMP_Dropdown>().value;
    }

    GameObject UITarget;
    public Slider sliderX; 
    public Slider sliderY;
    void SliderInitGUI(){
        sliderX=(Slider)GameObject.Find("CelluloXSlider").GetComponent<Slider>();
        sliderY=(Slider)GameObject.Find("CelluloYSlider").GetComponent<Slider>();
    }
    public void SliderChangeGUI(){
        UITarget=globalFlock.swarm_entities[0]; //TODO
        if (DebugMode){
            UITarget.GetComponent<BasicBehaviourScriptCellulo>().debugCelluloX = sliderX.value;
            UITarget.GetComponent<BasicBehaviourScriptCellulo>().debugCelluloY = sliderY.value;
        }
    }

    public void DebugInfoUpdate(){
        BasicBehaviourScriptCellulo CelluloScript =UITarget.GetComponent<BasicBehaviourScriptCellulo>();
        if(CelluloScript.amIcontrolled){
            string str="Cellulo Input X,Y,Theta : "+CelluloScript.DebugInputLog;
            DebugInfo.GetComponent<TMP_Text>().text=str; 
        }
    }

}


