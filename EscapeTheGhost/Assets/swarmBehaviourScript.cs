using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class swarmBehaviourScript : MonoBehaviour
{

        public MultiPlayerCameraScript obj ;
        public List<GameObject> objects;
        public Vector3 center;
        public Vector3 orientation;
        //public Vector3 swarm_speed;
        private float deltaT;
        private Vector3 deltaPos;
        private Vector3 deltaOrient;
        private Vector3 deltaSpeed;
        private GameObject self;
        public bool swarm_togle=false;
        public float cohesion_coef = 5f;
        public float ac_coef = 5f;
        public float  orientation_coef =0.1f;

        public float maxR_speed=0.01f;
        private Rigidbody rb;
        public Vector3 my_speed;
        Vector3? prev_pos=null;
        //float h=0;
        public bool SwimOn=true;


    // Start is called before the first frame update
    void Start()
    {
        obj = (GameObject.Find("MultiplayerCamera")).GetComponent<MultiPlayerCameraScript>();
        rb = GetComponent<Rigidbody>();
        self=this.gameObject;
        prev_pos=null;
        maxR_speed=0.01f;
        
    }

    // Update is called once per frame
    void Update()
    {
        //OrientationTorque();
        orientation = obj.getSwarmAngle();
        center = obj.GetCenterPoint();
        deltaT= Time.deltaTime;
        deltaPos = self.transform.position-center;
        deltaOrient = self.transform.eulerAngles-orientation;
        my_speed = getSpeed();

    // =======================================================
        if(SwimOn)
            transform.Translate(0,0,Time.deltaTime*globalFlock.fishMaxSpeed);
        if (Input.GetKeyDown(KeyCode.Keypad0))
            SwimOn=!SwimOn;


    // =======================================================

        //Debug.Log("Object :"+self +"\n deltaPos :"+deltaPos);
        //deltaSpeed = self.transform.position-center;
        if (Input.GetKeyDown(KeyCode.RightControl)){
            swarm_togle= !swarm_togle;
            print("right ctrl was pressed \n Swarm behaviour ON : "+swarm_togle);
        }
        if(swarm_togle && obj.objects.Count>1){
            


            // rb.AddForce(FlockingForce());
            // Vector3 newDir = OrientationTorque(); //Vector3.forward ;
            // rb.MoveRotation(Quaternion.Euler(newDir));
        }
    }

    Vector3 getAntiCollisionForce(){            //Implemented for speed but using pos : reverse effect.
        Vector3 force=Vector3.zero;
        force=my_speed;
        for (int i=0;i<obj.objects.Count;i++){
            if (obj.objects[i].transform.gameObject!=self){
                GameObject objI= obj.objects[i].transform.gameObject;
                Vector3 i_speed = objI.GetComponent<swarmBehaviourScript>().my_speed;
                //Debug.Log(i_speed);
                //force.x += obj.objects[i].transform.position.x-self.transform.position.x ;
                //force.y += obj.objects[i].transform.position.y-self.transform.position.y ;
                //force.z += obj.objects[i].transform.position.z-self.transform.position.z ; 
                force.x += i_speed.x - my_speed.x;
                force.y += i_speed.y - my_speed.y;
                force.z += i_speed.z - my_speed.z;
                //print("This is :"+self+"\n i_speed for "+objI.name+" is : "+i_speed+"\n my speed is : "+my_speed); //Speed test OK
            }

        }
        force.x/= -(obj.objects.Count-1) ;    //repulsive force -> - sign
        force.y/= -(obj.objects.Count-1) ;
        force.z/= -(obj.objects.Count-1) ;
        force.Normalize();

        return force;
    }

    Vector3 getSpeed(){
        if (prev_pos== null){
            prev_pos=self.transform.position;
            return Vector3.zero ;
        }
        my_speed = (self.transform.position - (Vector3)prev_pos) / Time.deltaTime;
        prev_pos=self.transform.position;
        
        return my_speed;
    }
    Vector3 getCohesionForce(){
        Vector3 force=Vector3.zero;
        force=my_speed;
        for (int i=0;i<obj.objects.Count;i++){
            if (obj.objects[i].transform.gameObject!=self){
                GameObject objI= obj.objects[i].transform.gameObject;
                Vector3 i_speed = objI.GetComponent<swarmBehaviourScript>().my_speed;
                //Debug.Log(i_speed);
                //force.x += obj.objects[i].transform.position.x-self.transform.position.x ;
                //force.y += obj.objects[i].transform.position.y-self.transform.position.y ;
                //force.z += obj.objects[i].transform.position.z-self.transform.position.z ; 
                force.x += i_speed.x ;
                force.y += i_speed.y ;
                force.z += i_speed.z ;
            }

        }
        force.x/= (obj.objects.Count-1) ;    
        force.y/= (obj.objects.Count-1) ;
        force.z/= (obj.objects.Count-1) ;
      //same same y & z
        force.Normalize();

        return force;

    }
    Vector3 FlockingForce(){
        Vector3 sum_vector =Vector3.zero;
         for (int i=0;i<obj.objects.Count;i++){
            if (obj.objects[i].transform.gameObject!=self){
                GameObject objI= obj.objects[i].transform.gameObject;
                Vector3 i_speed = objI.GetComponent<swarmBehaviourScript>().my_speed;
                Vector3 i_pos= objI.transform.position;
                Vector3 diff = i_pos-self.transform.position;
                float dist = diff.magnitude;
                if (dist<4){
                    sum_vector -= ac_coef *diff/(Mathf.Pow(dist,12)) ;

                }
                else if (dist <30)
                {
                    sum_vector += cohesion_coef*diff/(Mathf.Pow(dist,6)) ;   
                }

            }
        }
        if (sum_vector==Vector3.zero)
            return sum_vector;
        sum_vector.Normalize();
        return sum_vector;
    }

    Vector3 OrientationTorque(){
        Vector3 diff = (-self.transform.eulerAngles+orientation );
        Vector3 ret = self.transform.eulerAngles+(diff/50);
        if ((ret-orientation).magnitude<0.6)
        {
           // Debug.Log("fishes oriented");
            return orientation;
        }
        return ret;

    }
}
