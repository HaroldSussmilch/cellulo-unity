using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PredatorAvoidance : MonoBehaviour
{

    // Update is called once per frame
    public List<GameObject> PredatorList;
    public GameObject PredatorPrefab;
    public int predNumber=1;
    public GameObject SwarmCenter;
    Vector3 spawnPosition=new Vector3 (100,100,100);
    // Start is called before the first frame update
    void Start()
    {
        PredatorList.Clear();
        predatorInstantiation();
        SwarmCenter=GameObject.Find("SwarmCenter");
                
    }
    void Update()
    {
        
        //PredatorArray=GameObject.FindGameObjectsWithTag("Predator");
        foreach(GameObject Pred in PredatorList){
            //Debug.Log(Pred.name);
            Transform LookAtTarget=getTarget(Pred);
            Pred.transform.LookAt(LookAtTarget,Vector3.up);
            Pred.transform.Translate(0,0,Time.deltaTime * 5);

        }

        
    }

    Transform getTarget(GameObject Pred){
        


        return SwarmCenter.transform;
    }
    public void predatorInstantiation(){
        
        int num = getPredatorNumber();
        
        //PredatorList=new GameObject[num];
        for (int i = 0; i < num; i++)
        {
            //PredatorArray[i]=Instantiate(PredatorPrefab,spawnPosition,Quaternion.identity);
            //PredatorArray[i].tag="Predator";
            GameObject newAddition=Instantiate(PredatorPrefab,spawnPosition,Quaternion.identity);
            newAddition.tag="Predator";
            int j=i+1;
            newAddition.name="Predator n°"+j;
            PredatorList.Add(newAddition);

        }


    }
    
    int getPredatorNumber(){

        /* if(getFromUI=true)
            predNumber= GameObject.Find("LevelDropDown1").GetComponent<TMP_Dropdown>().value; */
            
        return predNumber;
    }


    /// <summary>
    /// OnCollisionEnter is called when this collider/rigidbody has begun
    /// touching another rigidbody/collider.
    /// </summary>
    /// <param name="other">The Collision data associated with this collision.</param>
    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.name.Contains("Fish")){
            //if fish not eaten
                //kill other.gameObject;
                //score -100
        }
    }
    
    void destroyPredators(){
        foreach(GameObject Pred in PredatorList){
            Destroy(Pred);
        }
        PredatorList.Clear();
    }
}
