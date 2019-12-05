using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoalCollider : MonoBehaviour
{
    public bool isActive =false;
    private void OnTriggerEnter(Collider other){
        if(!isActive)
            return;
        if(other.name.Contains("Fish")){  //check if it is a fish
            other.gameObject.GetComponentInParent<IndiFlock>().GoalReached=true;
 
        }
    }


}
