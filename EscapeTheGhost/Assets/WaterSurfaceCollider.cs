using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterSurfaceCollider : MonoBehaviour
{
    // Start is called before the first frame update
    List<Rigidbody> Memory=new List<Rigidbody>() ;
    private void OnTriggerEnter(Collider other){
        print("Collision with : "+other.name);
        if(other.name.Contains("Fish n°")){  //check if it is a fish
            if(other.gameObject.GetComponent<Rigidbody>().useGravity!=true)
            StartCoroutine(EnableGravityFor(3f,other.gameObject));

           
        }
    }
    void removeGravity(){
        foreach (Rigidbody rb in Memory){
            print("reset RB for "+rb.gameObject.name);

            if (rb.useGravity==true)
                rb.useGravity=false;
            rb.ResetCenterOfMass();
            Memory.Remove(rb);
        }
        
    }
    IEnumerator EnableGravityFor(float seconds, GameObject GO){
        print("CoroutineTest : "+GO.name);
        yield return new WaitForSeconds(0.5f);
        Rigidbody rb=GO.GetComponent<Rigidbody>();
        rb.useGravity=true;
        yield return new WaitForSeconds(seconds);
        rb.velocity=Vector3.zero;
        rb.ResetInertiaTensor();
        rb.ResetCenterOfMass();
        rb.useGravity=false;

    }


}
