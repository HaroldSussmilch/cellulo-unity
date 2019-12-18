using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PredatorAvoidance : MonoBehaviour
{

    // Update is called once per frame
    GameObject[] PredatorArray;
    public GameObject PredatorPrefab;
    public int predNumber=1;


    // Start is called before the first frame update
    void Start()
    {
        PredatorArray=null;
    }
    void Update()
    {
        //PredatorArray=GameObject.FindGameObjectsWithTag("Predator");

        predatorInstantiation();
    }


    void predatorInstantiation(){
        
        int num = getPredatorNumber();
        Vector3 spawnPosition=new Vector3 (100,100,100);
        PredatorArray=new GameObject[num];
        for (int i = 0; i < num; i++)
        {
            PredatorArray[i]=Instantiate(PredatorPrefab,spawnPosition,Quaternion.identity);
            PredatorArray[i].tag="Predator";
        }


    }
    
    int getPredatorNumber(){

        /* if(getFromUI=true)
            predNumber= [GetUIValue] */
            
        return predNumber;
    }
}
