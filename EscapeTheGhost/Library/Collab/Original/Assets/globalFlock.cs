﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class globalFlock : MonoBehaviour
{
    
    public static int swarmInitSize=5;     //Number of fishes (played and unplayed)
    public static GameObject[] swarm_entities=new GameObject[swarmInitSize];  //Array as number of fishes is static

    public static int controlledUnits=1;
    public static List<GameObject> players;
    public static Vector3 spawnPos = new Vector3(10,5,10);
    public static float spawnRadius=10f; 
    public GameObject fishPrefab;
    public static float fishMaxSpeed=3f;
    [SerializeField]
    public static Vector3 goalPos;
    public bool spawnOn = true;
    // Start is called before the first frame update
    void Start()
    {
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

            swarm_entities[i]= (GameObject) Instantiate(fishPrefab,pos,Quaternion.identity);
            //TODO : fishPrefab = prefabVariantsArray[i];
                //swarm_entities[i].Renderer.material.mainTexture=newTexture;
            goalPos.Set(250f,50f,150f);
        }
    }

    // Update is called once per frame
    void Update()
    {
        goalPos=goalPos+Vector3.forward;
    }

    Vector3 sphereSpawnRange(){
        float r = Random.Range(0,spawnRadius);
        float phi = Random.Range(0,2*Mathf.PI);
        float theta = Random.Range(0,Mathf.PI);

        return new Vector3(r*Mathf.Cos(theta)*Mathf.Sin(phi),
                        r*Mathf.Sin(theta)*Mathf.Sin(phi),
                        r*Mathf.Cos(theta));
    }
}
