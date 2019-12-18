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
        //SwarmCenter=GameObject.Find("SwarmCenter");
                SwarmCenter=Instantiate(PredatorPrefab,spawnPosition+Vector3.back*10f,Quaternion.identity);
    }
    void Update()
    {
        
        //PredatorArray=GameObject.FindGameObjectsWithTag("Predator");
        foreach(GameObject Pred in PredatorList){
            //Debug.Log(Pred.name);
            Pred.transform.LookAt(SwarmCenter.transform,Vector3.up);
        }

        
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
            predNumber= [GetUIValue] */
            
        return predNumber;
    }
}
