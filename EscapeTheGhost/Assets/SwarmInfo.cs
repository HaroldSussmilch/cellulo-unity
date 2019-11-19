using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwarmInfo : MonoBehaviour
{
    public int initSwarmSize;
    public GameObject prefab;
    public List<GameObject> swarm_entities;
    public GameObject[] SW_EN;
    public List<GameObject> players ;
    public Transform swarm_transform ;   //contains pos and orientation
    public float ac_coef =5f;
    public float cohesion_coef =5f;
    public float moveSpeed=10;
    public bool SW_version =true ;
    // Start is called before the first frame update
    void Start()
    {
        swarm_transform=GameObject.Find("SwarmCenter").transform; //create GameObject SwarmCenter
        // for (i=0;i<initSwarmSize;initSwarmSize++){
        //     Vector3 pos = new Vector3(0+i%5,5,(i/5)%5);
        //     Vector3 rot = Vector3.zero;
        //     GameObject test = Instantiate(prefab, pos, rot);
        //     test.name=new_instance_name;
        //     swarm_entities.Add(test);
        //     obj.objects.Add(test);
        // }
        
    }

    // Update is called once per frame
    void Update()
    {
        SW_EN = globalFlock.swarm_entities; //4.11 Update


        swarm_transform.eulerAngles=getSwarmAngle();
        swarm_transform.position=getSwarmCenter();
        //Debug.DrawRay(swarm_transform.position, swarm_transform.TransformDirection(Vector3.forward)*3, Color.green);
        for (int i=0;i<players.Count;i++){
            GameObject i_GO= players[i];
            BasicBehaviourScript script=i_GO.GetComponent<BasicBehaviourScript>();
            if (script==null){
                BasicBehaviourScriptCellulo script2=i_GO.GetComponent<BasicBehaviourScriptCellulo>();
                script2.mSpeed=moveSpeed;
                return;
            }
            script.mSpeed=moveSpeed;
        }

    }

    public Vector3 getSwarmAngle(){

    // Returns average angle value for the average orientation of the swarm (players only) in euler Angles

        Vector3 total_angle= Vector3.zero;
        for (int i=0 ;i<swarm_entities.Count;i++){
            total_angle.x+=swarm_entities[i].transform.eulerAngles.x%360;
            total_angle.y+=swarm_entities[i].transform.eulerAngles.y%360;
            total_angle.z+=swarm_entities[i].transform.eulerAngles.z%360;  //objects[i].transform.eulerAngles for degrees ; rotation for quat
        }
        total_angle/=swarm_entities.Count;
        if (SW_version==false)
            return total_angle;        
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

    // Necessary fix for 3rd person camera : Unity recalculates the transform.rotation and does 180° Y-flips on negative X or Z

        float total_angle= 0;
        for (int i=0 ;i<swarm_entities.Count;i++){
            total_angle+=swarm_entities[i].transform.eulerAngles.y%360;
        }
        total_angle/=swarm_entities.Count;

        if (SW_version==false)
            return total_angle;
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
        for (int i=0 ;i<swarm_entities.Count;i++){
            total_pos+=swarm_entities[i].transform.position;           
        }
        total_pos/=swarm_entities.Count;

        if (SW_version==false)
            return total_pos;
        // SW_EN Version : 
        total_pos = Vector3.zero;
        for (int i=0 ;i<SW_EN.Length;i++){
            total_pos+=SW_EN[i].transform.position;           
        }
        total_pos/=SW_EN.Length;

        return total_pos;
    }

    public Vector3 FlockingForce(GameObject self){
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

    Vector3 OrientationTorque(GameObject self){
        Vector3 diff = (-self.transform.eulerAngles+swarm_transform.eulerAngles );
        Vector3 ret = self.transform.eulerAngles+(diff/50);
        if ((ret-swarm_transform.eulerAngles).magnitude<0.6)
        {
            Debug.Log("fishes oriented");
            return swarm_transform.eulerAngles;
        }
        return ret;

    }
}
