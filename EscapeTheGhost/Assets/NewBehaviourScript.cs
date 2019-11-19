using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{

    public GameObject prefab;
    public int number_of_robots;
    public Vector3 pos;
    public MultiPlayerCameraScript obj ;
    public SwarmInfo obj2 ;

    // Start is called before the first frame update
    void Start()
    {
        //Load game_script
        obj = (GameObject.Find("MultiplayerCamera")).GetComponent<MultiPlayerCameraScript>();
        obj2 = GameObject.Find("SimMasterInfo").GetComponent<SwarmInfo>();
        prefab = GameObject.Find("Cube1");
        number_of_robots=obj.objects.Count;
        //alt ; number_of_robots = obj2.swarm_entities.Count
    }

    // Update is called once per frame
    void Update()
    {
        //getSpawnPos();
        //get number of robots from game_script
        int instance_num=number_of_robots+1;
        string new_instance_name = "Cube "+instance_num;
        if (Input.GetKeyDown("space")&& this.name=="Cube1"){
            Vector3 orientationAngle ;
            orientationAngle.y = getSwarmOrientation().y;
            Quaternion rot = Quaternion.Euler(0, orientationAngle.y, 0);
            pos = getSpawnPos();
            GameObject test = Instantiate(prefab, pos, rot);
            test.name=new_instance_name;
            obj.targets.Add(test.transform);
            obj.objects.Add(test);
            Debug.Log("objects.Count="+obj.objects.Count);
            number_of_robots +=1;

            //obj2.swarm_entities.Add(test);

        }
        
   }

   Vector3 getSwarmOrientation(){
       Debug.Log("Swarm Orientation ="+obj.getSwarmAngle());
       return obj.getSwarmAngle();

   }
   
   Vector3 getSpawnPos(){
        float angle =  Mathf.PI * 2*(1+number_of_robots%8) /8;
        float angleDegrees = -angle*Mathf.Rad2Deg;
        float dist = 1 + (int)(number_of_robots/8);
        dist *= 5    ;              
        Vector3 return_pos= obj.playerAvgPos ;
         return_pos.x +=dist*Mathf.Cos(angle);
         //return_pos.y += 0f;
         return_pos.z += dist*Mathf.Sin(angle);
          Debug.Log ("Instance num : "+number_of_robots+"\n Return pos : "+return_pos+"\n Angle : "+angleDegrees +"\n Dist :"+dist);
        return return_pos;
   }
}
