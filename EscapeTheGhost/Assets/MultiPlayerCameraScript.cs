using System.Collections;
using System.Collections.Generic;
using UnityEngine;

 [RequireComponent(typeof(Camera))]
public class MultiPlayerCameraScript : MonoBehaviour
{
    // Start is called before the first frame update
    public List<Transform> targets;
    public List<GameObject> objects;
    public Vector3 offset;
    private Vector3 velocity;
    private float smoothTime = .5f;

    public float minZoom = 60f;
   public float maxZoom = 10f;
   public float zoomLimiter =60f;
   private Camera cam;
    public Vector3 playerAvgPos;
    public SwarmInfo masterInfo;

    void Start(){
        cam = GetComponent<Camera>();
        masterInfo=GameObject.Find("SimMasterInfo").GetComponent<SwarmInfo>();
        objects = masterInfo.swarm_entities;
        
    }

    void Update()
    {
        if((masterInfo.SW_version && masterInfo.SW_EN.Count!=objects.Count)||objects[0]==null)
        {
            objects.Clear();    
            foreach (GameObject GO in masterInfo.SW_EN)
                objects.Add(GO);
        } 
        if (objects.Count==0)  
            return;
        playerAvgPos = GetCenterPoint();
        getSwarmAngle();
    }
    
    void LateUpdate()
    {
        Move();
        Zoom();
    }

    void Move(){
        if (objects.Count == 0) //if (objects.Count == 0)
            return;

        Vector3 centerPoint = GetCenterPoint();
        
        Vector3 newPosition = centerPoint + offset;

        transform.position = Vector3.SmoothDamp(transform.position, newPosition, ref velocity, smoothTime);
    }

    void Zoom(){
        float newZoom = Mathf.Lerp(maxZoom,minZoom,GetGreatestDistance() / zoomLimiter);
        cam.fieldOfView = Mathf.Lerp(cam.fieldOfView, newZoom, Time.deltaTime);
    }
    public Vector3 GetCenterPoint(){

        if(objects==null){
            return new Vector3 (0f,0f,0f);
        }
        if(objects[0]==null){     
            return new Vector3 (0f,0f,0f);
        }
        if (objects.Count ==1){ //if (objects.Count ==1){
            return objects[0].transform.position; // return objects[0].transform.position;
        }

        var bounds = new Bounds(objects[0].transform.position, Vector3.zero); //var bounds = new Bounds(objects[0].transform.position, Vector3.zero) ;
        for (int i=0; i<objects.Count;i++){     // for (int i=0; i<objects.Count;i++){ 
            bounds.Encapsulate(objects[i].transform.position);    //bounds.Encapsulate(objects[i].transform.position);
        }
        return bounds.center;
    }

    float GetGreatestDistance(){
        if( objects==null    ||  objects.Contains(null)  ||    objects.Count==0 ){
            return zoomLimiter;
        }
        if(objects[0]==null){
            return zoomLimiter;
        }
        var bounds = new Bounds(objects[0].transform.position, Vector3.zero); //var bounds = new Bounds(objects[0].transform.position, Vector3.zero);
        for (int i=0; i<objects.Count;i++){             // for (int i=0; i<objects.Count;i++){ 
            bounds.Encapsulate(objects[i].transform.position);
        }
        return bounds.size.x;
    }

    public Vector3 getSwarmAngle(){

    // Returns average angle value for the average orientation of the swarm (players only) in euler Angles

        Vector3 total_angle= Vector3.zero;
        for (int i=0 ;i<objects.Count;i++){
            total_angle.x+=objects[i].transform.eulerAngles.x%360;
            total_angle.y+=objects[i].transform.eulerAngles.y%360;
            total_angle.z+=objects[i].transform.eulerAngles.z%360;  //objects[i].transform.eulerAngles for degrees ; rotation for quat
        }
        total_angle/=objects.Count;
        //Debug.Log(total_angle);
        return total_angle;
    }
}
