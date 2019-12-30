using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class globalFlock : MonoBehaviour
{
    
    public static int swarmInitSize=10;     //Number of fishes (played and unplayed)
    public static List<GameObject> swarm_entities;  //Array as number of fishes is static

    //public static int controlledUnits=1;
    public static List<GameObject> players;
    public List<GameObject>  Publicswarm_entities;
    public static Vector3 spawnPos = new Vector3(10,5,10);
    public static float spawnRadius=30f; 
    public GameObject fishPrefab;
    public static float fishMaxSpeed=3f;
    public static float AutorotationSpeed=4f;
    public static float CelluloRotationSpeed=4f;
    public float Speed=3f;
    public float manualRotationSpeed=4f;
    public float AutoFlockRotSpeed=4f;
    static int currentNumber;

    [SerializeField]
    public static Vector3 goalPos;
    public bool spawnOn = true;
    // Start is called before the first frame update
    public void Start()
    {
        if (swarm_entities==null)
        {
           swarm_entities =new List<GameObject>();
        }
        swarm_entities.Clear();

        if(!spawnOn){
            // swarm_entities[0]=GameObject.Find("Cube1");
            // return;   
        }
        spawnPos.Set(50f,25f,10f);

        for (int i = 0; i< swarmInitSize ; i++){

            Vector3 pos = new Vector3(  Random.Range(-spawnRadius,spawnRadius),
                                        Random.Range(-spawnRadius,spawnRadius),
                                        Random.Range(-spawnRadius,spawnRadius));
            pos=sphereSpawnRange();
            pos+=spawnPos;

            GameObject new_swarm_entities= (GameObject) Instantiate(fishPrefab,pos,Quaternion.identity);
            // : fishPrefab = prefabVariantsArray[i];
                //new_swarm_entities.Renderer.material.mainTexture=newTexture;
            int j=i+1;
            new_swarm_entities.name="Fish n°"+j;
            swarm_entities.Add(new_swarm_entities);
            goalPos.Set(250f,50f,150f);
        }
        currentNumber=swarmInitSize+1;
    }
    
    // Update is called once per frame
    void Update()
    {
        
        CelluloRotationSpeed=manualRotationSpeed;
        swarmInitSize= this.gameObject.GetComponent<SwarmInfo>().SwarmSize;
        fishMaxSpeed=Speed;//this.gameObject.GetComponent<SwarmInfo>().moveSpeed;
        AutorotationSpeed=AutoFlockRotSpeed;
        //goalPos;
        Publicswarm_entities=swarm_entities;
    }

    Vector3 sphereSpawnRange(){
        float r = Random.Range(spawnRadius/2,spawnRadius);
        float phi = Random.Range(0,2*Mathf.PI);
        float theta = Random.Range(0,Mathf.PI);

        return new Vector3(r*Mathf.Cos(theta)*Mathf.Sin(phi),
                        r*Mathf.Sin(theta)*Mathf.Sin(phi),
                        r*Mathf.Cos(theta));
    }
    void DynamicSwarmSize(){
        //if()
    }

    public void UIMappingModeChange(){

        int val =GameObject.Find("MappingModeDropdown").GetComponent<TMPro.TMP_Dropdown>().value;

        foreach(GameObject GO in swarm_entities){
            GO.GetComponent<BasicBehaviourScriptCellulo>().MappingMode=(BasicBehaviourScriptCellulo.Mode) val;
        }
    }
    public void UIControlModeChange(){

        int val =GameObject.Find("ControlModeDropdown").GetComponent<TMPro.TMP_Dropdown>().value;

        foreach(GameObject GO in swarm_entities){
            GO.GetComponent<BasicBehaviourScriptCellulo>().MoveMode=(BasicBehaviourScriptCellulo.ControlMode) val;
        }
    }

    public void addFish(){
        Vector3 pos=GameObject.Find("SwarmCenter").transform.position+sphereSpawnRange();
        GameObject new_swarm_entity= (GameObject) Instantiate(fishPrefab,pos,Quaternion.identity);

        new_swarm_entity.name="Fish n°"+currentNumber;
        swarm_entities.Add(new_swarm_entity);
        currentNumber++;
    }

    
     public void removeFish(){
        currentNumber--;
        GameObject ToDestroy=swarm_entities.FindLast(x => x.name.Contains(currentNumber.ToString()));
        swarm_entities.Remove(ToDestroy);
        if(ToDestroy.GetComponent<BasicBehaviourScriptCellulo>().robot!=null)ToDestroy.GetComponent<BasicBehaviourScriptCellulo>().robot.clearTracking ();
        Destroy(ToDestroy);
        
    }
}
