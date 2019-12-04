using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CausticCamFollower : MonoBehaviour
{
    Transform transform;
    Transform targetTransform;
    // Start is called before the first frame update
    void Start()
    {
        transform=this.gameObject.transform;
        targetTransform =GameObject.Find("SwarmCenter").transform;
    }

    // Update is called once per frame
    void Update()
    {

        transform.position=transform.position + (targetTransform.position-transform.position)*Time.deltaTime;
    }
}
