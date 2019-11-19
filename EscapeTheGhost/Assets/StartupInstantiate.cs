using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartupInstantiate : MonoBehaviour
{
    public int swarmSize;
    private GameObject SimInfo;
    // Start is called before the first frame update
    void Start()
    {
        SimInfo = GameObject.Find("SimMasterInfo");
        SimInfo.GetComponent<SwarmInfo>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
