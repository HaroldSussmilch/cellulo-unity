using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodCollider : MonoBehaviour
{
    private void OnTriggerEnter(Collider other){
        if(other.name.Contains("Fish")){  //check if it is a fish
            print ("COLLIDER ENTER");
            other.gameObject.GetComponentInParent<IndiFlock>().foodGotten=true;
        }
    }


}
