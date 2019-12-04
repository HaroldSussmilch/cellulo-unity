using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndicatorScript : MonoBehaviour
{
    public GameObject pointAt;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (pointAt!=null){
            transform.rotation.SetLookRotation(pointAt.transform.position, Vector3.up); 
            this.gameObject.GetComponent<Renderer>().material.CopyPropertiesFromMaterial(pointAt.GetComponent<Renderer>().material);
            
        }
    }
}
