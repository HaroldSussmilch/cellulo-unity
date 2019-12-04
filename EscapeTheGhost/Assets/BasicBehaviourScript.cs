using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BasicBehaviourScript : MonoBehaviour
{

    //private Space relativeTo=Space.World;
    public float mSpeed;
    


    void Start()
    {
        mSpeed=5;
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(Input.GetAxis("Horizontal"));
        //coef = mSpeed*Time.deltaTime;
        if (Input.GetAxis("Dual Ctrl")<0 && gameObject.name=="Cube2"){
            Debug.Log("Input ignored for cube2 ");
            return;
        }
        //mSpeed=GameObject.Find("SimMasterInfo").getComponent<>().moveSpeed;

        //If Camera is fixed oriented
        //    relativeTo=Space.World;
        //Else
        //    relativeTo=Space.Self;      //move with Space.Self of swarm center
        GameObject cam3p=GameObject.Find("3rdPersonCamera");
        Transform camTransform =cam3p.transform;
        Vector3 CamXAngleCorrection =new Vector3 (-camTransform.eulerAngles[0],0,0);
        camTransform.Rotate(CamXAngleCorrection);
        //transform.Translate(mSpeed*Input.GetAxis("Horizontal")*Time.deltaTime,0,mSpeed*Input.GetAxis("Depth")*Time.deltaTime, relativeTo);
        transform.Translate(mSpeed*Input.GetAxis("Horizontal")*Time.deltaTime,mSpeed*Input.GetAxis("Vertical")*Time.deltaTime,mSpeed*Input.GetAxis("Depth")*Time.deltaTime, camTransform);

        
        //transform.Translate(mSpeed*Time.deltaTime*localTranslate[0],mSpeed*Time.deltaTime*localTranslate[1],mSpeed*Time.deltaTime*localTranslate[2], Space.World);

    }
}
