using System.Collections;
using System.Collections.Generic;
using UnityEngine;

 [RequireComponent(typeof(Camera))]

public class CameraTopFlockFollowing : MonoBehaviour
{
    private GameObject swarmCenter;
    public GameObject mp_cam;
    public GameObject self;
    public MultiPlayerCameraScript obj;
    private Vector3 center;
    public float height= 50;
    public bool Yoriented =true;
    SwarmInfo SwarmInfo;
    // Start is called before the first frame update
    void Start()
    {
        swarmCenter=GameObject.Find("SwarmCenter");
        self= this.gameObject;
        mp_cam = GameObject.Find("MultiplayerCamera");
        obj = mp_cam.GetComponent<MultiPlayerCameraScript>();
        SwarmInfo=GameObject.Find("SimMasterInfo").GetComponent<SwarmInfo>();
    }

    // Update is called once per frame
    void Update()
    {
        center= swarmCenter.transform.position;
        Vector3 new_pos=center;
        new_pos[1]=height;
        // float diff=(self.transform.position-new_pos).magnitude;
         //use diff
        self.transform.position=Vector3.Lerp(self.transform.position,new_pos,2*Time.deltaTime);
        
        if(!Yoriented)
            return;
        
        if(!float.IsNaN(SwarmInfo.getSwarmYrotation())){
        Quaternion rotation=this.gameObject.transform.rotation;
        this.gameObject.transform.rotation = Quaternion.Slerp(  this.gameObject.transform.rotation,
                                                                Quaternion.Euler(90f,SwarmInfo.getSwarmYrotation(),0f),
                                                                Time.deltaTime*0.9f);
        }

    }
}
