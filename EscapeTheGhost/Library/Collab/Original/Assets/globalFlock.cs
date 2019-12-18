﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class globalFlock : MonoBehaviour
{
    
    public static int swarmInitSize=10;     //Number of fishes (played and unplayed)
    public static GameObject[] swarm_entities;  //Array as number of fishes is static

    public static int controlledUnits=1;
    public static List<GameObject> players;
    public GameObject[]  Publicswarm_entities;
    public static Vector3 spawnPos = new Vector3(10,5,10);
    public static float spawnRadius=10f; 
    public float Speed=3f;
    public GameObject fishPrefab;
    public static float fishMaxSpeed=3f;
    public static float AutorotationSpeed=3f;
    public  float AutoFlockRotSpeed=3f;

    [SerializeField]
    public static Vector3 goalPos;
    public bool spawnOn = true;
    // Start is called before the first frame update
    public void Start()
    {
        swarm_entities=new GameObject[swarmInitSize];
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
            int j=i+1;
            swarm_entities[i].name="Fish n°"+j;
            goalPos.Set(250f,50f,150f);
        }
    }

    // Update is called once per frame
    void Update()
    {
        swarmInitSize= this.gameObject.GetComponent<SwarmInfo>().SwarmSize;
        fishMaxSpeed=Speed;//this.gameObject.GetComponent<SwarmInfo>().moveSpeed;
        AutorotationSpeed=AutoFlockRotSpeed;
        //goalPos;
        Publicswarm_entities=swarm_entities;
    }

    Vector3 sphereSpawnRange(){
        float r = Random.Range(0,spawnRadius);
        float phi = Random.Range(0,2*Mathf.PI);
        float theta = Random.Range(0,Mathf.PI);

        return new Vector3(r*Mathf.Cos(theta)*Mathf.Sin(phi),
                        r*Mathf.Sin(theta)*Mathf.Sin(phi),
                        r*Mathf.Cos(theta));
    }
    void DynamicSwarmSize(){
        //if()
    }

}
