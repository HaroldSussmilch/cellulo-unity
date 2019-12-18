using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follow3rdPerson : MonoBehaviour
{
    public Transform camTransform;
    public Transform lookAt;
    private Camera cam;
    private GameObject swarmCenter;

    public float distance =30.0f;
    //private float currentX = 0.0f;
    public float yRotation = 0.0f;
    //private float sensivityX = 0.0f;
    //private float sensivityY = 0.0f;
    public float cameraHeight=2.0f;
    public float theta=3.0f;
    private SwarmInfo info;

    private void Start(){

        camTransform = GetComponent<Transform>();
        cam= GetComponent<Camera>();
        swarmCenter= GameObject.Find("SwarmCenter");
        lookAt=swarmCenter.transform;
        info=GameObject.Find("SimMasterInfo").GetComponent<SwarmInfo>();
    }

/*     private void Update() {
        //if player too far from swarm center, lookAt = player ?
    } */
    private void LateUpdate(){
        //lookAt=swarmCenter.transform;
        Vector3 dir = Vector3.zero;
        dir.Set(0f,cameraHeight,-distance);
        //currentX=swarmCenter.eulerAngles[0];
        //yRotation=swarmCenter.eulerAngles[1];
        float Yrot=info.getSwarmYrotation();

/*         Vector3 rot2= Vector3.zero;
        rot2.Set(0,Yrot,0) ;  */
        

//Correct Camera position
        Quaternion rotation = Quaternion.Euler(0,Yrot,0);
       // camTransform.position = Vector3.Lerp(camTransform.position,lookAt.position + rotation * dir,Time.deltaTime*1.9f) ; //lookAt.position + rotation * dir;
        /* theta = Mathf.Atan(cameraHeight/distance) * Mathf.Rad2Deg;  
        Vector3 thetaX=Vector3.zero;
        thetaX.Set(theta,0,0);   
        //camTransform.eulerAngles = rot2 + thetaX ;
        rot2 = rot2 + thetaX ;
        //print(rot2);
        rotation = Quaternion.Euler(rot2);
        //Debug.Log("Dist = "+distance+" Height= "+cameraHeight+" theta (deg) = "+theta+"\n rotation (euler) = "+rot2);
        camTransform.rotation = Quaternion.Slerp(camTransform.rotation, rotation, Time.deltaTime*0.9f); */
        camTransform.position = Vector3.Lerp(camTransform.position,lookAt.position - (lookAt.rotation*Vector3.forward )*distance ,Time.deltaTime*1.9f) ;
        camTransform.LookAt(swarmCenter.transform);
        return;




    }
}
