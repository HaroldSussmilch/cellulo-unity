using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SurfaceCopyPositionScript : MonoBehaviour
{
    public GameObject waterSurface;
    private Vector3 pos;
    // Start is called before the first frame update
    void Start()
    {
        waterSurface = GameObject.Find("WaterSurface");
        pos = waterSurface.transform.position;
        transform.position = pos;
    }

    // Update is called once per frame
    void Update()
    {
        pos = waterSurface.transform.position;
        transform.position = pos;
    }
}
