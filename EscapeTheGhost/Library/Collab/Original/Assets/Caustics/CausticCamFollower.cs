using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CausticCamFollower : MonoBehaviour
{
    Transform transf;
    Transform targetTransform;
    // Start is called before the first frame update
    void Start()
    {
        transf=this.gameObject.transform;
        targetTransform =GameObject.Find("SwarmCenter").transform;
    }

    // Update is called once per frame
    void Update()
    {
        transf.position=transform.position + (targetTransform.position-transf.position)*Time.deltaTime;
    }
}
