using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwarmInfo : MonoBehaviour
{
    public int SwarmSize=10;
    int StartSize=10;
    public GameObject prefab;
    public List<GameObject> swarm_entities;
    public GameObject[] SW_EN;
    public List<GameObject> players ;
    public Transform swarm_transform ;   //contains pos and orientation
    public float ac_coef =5f;
    public float cohesion_coef =5f;
    public float moveSpeed=10;
    //public static float rotSpeed=5;
    public float rotationSpeed=5;
    public bool SW_version =true ;
    // Start is called before the first frame update
    void Start()
    {
        StartSize= globalFlock.swarmInitSize;
        SwarmSize=SwarmSize;
        swarm_transform=GameObject.Find("SwarmCenter").transform; //create GameObject SwarmCenter
        // for (i=0;i<initSwarmSize;initSwarmSize++){
        //     Vector3 pos = new Vector3(0+i%5,5,(i/5)%5);
        //     Vector3 rot = Vector3.zero;
        //     GameObject test = Instantiate(prefab, pos, rot);
        //     test.name=new_instance_name;
        //     swarm_entities.Add(test);
        //     obj.objects.Add(test);
        // }
        SwarmSizeInputField=GameObject.Find("SwarmSetSize");
    }

    // Update is called once per frame
    void Update()
    {
        SW_EN = globalFlock.swarm_entities; 
       // rotSpeed=rotationSpeed;


        //swarm_transform.eulerAngles=getSwarmAngle();
        //swarm_transform.rotation=Quaternion.LookRotation(getSwarmForward(), Vector3.up);  //instant modification creates mass camera-jerking
        swarm_transform.rotation=Quaternion.Lerp( swarm_transform.rotation,Quaternion.LookRotation(getSwarmForward(), Vector3.up),5*Time.deltaTime);


        swarm_transform.position=getSwarmCenter();
        //Debug.DrawRay(swarm_transform.position, swarm_transform.TransformDirection(Vector3.forward)*3, Color.green);
        /* for (int i=0;i<players.Count;i++){
            GameObject i_GO= players[i];
            BasicBehaviourScript script=i_GO.GetComponent<BasicBehaviourScript>();
            if (script==null){
                BasicBehaviourScriptCellulo script2=i_GO.GetComponent<BasicBehaviourScriptCellulo>();
                //script2.mSpeed=moveSpeed;
                return;
            }
            //script.mSpeed=moveSpeed;
        } */

    }

    public Vector3 getSwarmAngle(){

    // Returns average angle value for the average orientation of the swarm (players only) in euler Angles

        Vector3 total_angle= Vector3.zero;
        /* for (int i=0 ;i<swarm_entities.Count;i++){
            total_angle.x+=swarm_entities[i].transform.eulerAngles.x%360;
            total_angle.y+=swarm_entities[i].transform.eulerAngles.y%360;
            total_angle.z+=swarm_entities[i].transform.eulerAngles.z%360;  //objects[i].transform.eulerAngles for degrees ; rotation for quat
        }
        total_angle/=swarm_entities.Count;
        if (SW_version==false)
            return total_angle;  */       
       // SW_EN Version : 
       total_angle= Vector3.zero;     
       for (int i=0 ;i<SW_EN.Length;i++){
           for (int j=0;j<3;j++){
               if (SW_EN[i].transform.eulerAngles[j]<180 || SW_EN[i].transform.eulerAngles[j]<0)
                {
                    total_angle[j]+=SW_EN[i].transform.eulerAngles[j];
                }
                else 
                    total_angle[j]+=SW_EN[i].transform.eulerAngles[j]-360;
           }
              //objects[i].transform.eulerAngles for degrees ; rotation for quat
        }
        total_angle/=SW_EN.Length;
        return total_angle;
    }

    public float getSwarmYrotation(){

    // Necessary fix for 3rd person camera : Unity recalculates the transform.rotation and does 180° Y-flips on negative Y or Z
        float total_angle= 0;
       /*  if (swarm_entities==null)
            return 0f;
        for (int i=0 ;i<swarm_entities.Count;i++){
            if(swarm_entities[i]==null){
                break;
            }
            total_angle+=swarm_entities[i].transform.eulerAngles.y%360;
        }
        total_angle/=swarm_entities.Count;

        if (SW_version==false)
            return total_angle; */
        // SW_EN Version : 
        total_angle= 0;
        for (int i=0 ;i<SW_EN.Length;i++){
            if (SW_EN[i].transform.eulerAngles.y<180 || SW_EN[i].transform.eulerAngles.y<0)
            {
                total_angle+=SW_EN[i].transform.eulerAngles.y;
            }
            else 
                total_angle+=SW_EN[i].transform.eulerAngles.y-360;
        }
        total_angle/=SW_EN.Length;

        return total_angle;
    }

    public Vector3 getSwarmCenter(){
        
        Vector3 total_pos = Vector3.zero;
        /* for (int i=0 ;i<swarm_entities.Count;i++){
            total_pos+=swarm_entities[i].transform.position;           
        }
        total_pos/=swarm_entities.Count;

        if (SW_version==false)
            return total_pos; */
        // SW_EN Version : 
        total_pos = Vector3.zero;
        for (int i=0 ;i<SW_EN.Length;i++){
            total_pos+=SW_EN[i].transform.position;           
        }
        total_pos/=SW_EN.Length;

        return total_pos;
    }

    /* public Vector3 FlockingForce(GameObject self){
        Vector3 sum_vector =Vector3.zero;
        Rigidbody rb = self.GetComponent<Rigidbody>();
         for (int i=0;i<swarm_entities.Count;i++){
            if (swarm_entities[i].gameObject!=self){
                GameObject objI= swarm_entities[i].gameObject;
                Vector3 i_speed = rb.velocity;
                Vector3 i_pos= objI.transform.position;
                Vector3 diff = i_pos-self.transform.position;
                float dist = diff.magnitude;
                if (dist<4)
                    sum_vector -= ac_coef *diff/(Mathf.Pow(dist,12)) ;
                else if (dist <30)
                    sum_vector += cohesion_coef*diff/(Mathf.Pow(dist,6)) ;
            }
        }
        if (sum_vector==Vector3.zero)
            return sum_vector;
        sum_vector.Normalize();
        return sum_vector;
    }
 */
/*     Vector3 OrientationTorque(GameObject self){
        Vector3 diff = (-self.transform.eulerAngles+swarm_transform.eulerAngles );
        Vector3 ret = self.transform.eulerAngles+(diff/50);
        if ((ret-swarm_transform.eulerAngles).magnitude<0.6)
        {
            Debug.Log("fishes oriented");
            return swarm_transform.eulerAngles;
        }
        return ret;

    }
 */
    public void swarmAdd(){
        SwarmSize++;
        SwarmSizeInputField.GetComponent<InputField>().text=SwarmSize.ToString();
    }
    public void swarmSub(){
        SwarmSize--;
        SwarmSizeInputField.GetComponent<InputField>().text=SwarmSize.ToString();
    }
    public GameObject SwarmSizeInputField;
    public void setSwarmSizeFromUI(){
        SwarmSize=int.Parse(SwarmSizeInputField.GetComponent<InputField>().text);
        if(SwarmSize>250){
            SwarmSize=250;
        }
        if (SwarmSize<0){
            SwarmSize=10;
        }
    }
    public Vector3 getSwarmForward(){
        Vector3 sumVector=Vector3.zero;
        for (int i=0 ;i<SW_EN.Length;i++){
            sumVector+=SW_EN[i].transform.forward;
        }
        sumVector.Normalize();
        return sumVector;
    }
    bool IsOn=true;
    public void macroSettingsShowToogle(){
        GameObject ButtonGO =GameObject.Find("Show/Hide");
        RectTransform Rtrans=ButtonGO.GetComponent<RectTransform>();
        IsOn=IsOn?false:true; //Toggle
        float angle =IsOn?180:0;
        Vector3 eulerRot=new Vector3(angle,0,0);
        Quaternion rot=Quaternion.identity;
        rot.eulerAngles=eulerRot;
        Rtrans.rotation=rot;
        int offset=28;
        int moveYby=IsOn?-offset:offset;
        Rtrans.anchoredPosition= new Vector2(Rtrans.anchoredPosition[0],Rtrans.anchoredPosition[1]+moveYby);

        GameObject.Find("PaperTypeDropDown").transform.localScale=IsOn?new Vector3(1,1,1):new Vector3(0,0,0);
        GameObject.Find("LevelChoiceDropDown").transform.localScale=IsOn?new Vector3(1,1,1):new Vector3(0,0,0);
        
        Color color= GameObject.Find("MacroSettings").GetComponent<Image>().color;
        color.a=IsOn?100:0;
        GameObject.Find("MacroSettings").GetComponent<Image>().color=color;
    }

}
