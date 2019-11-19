    using UnityEngine;
    using System.Collections;
    
public class CameraFogScript: MonoBehaviour {
    public float waterHeight;
    
    private bool isUnderwater;
    private Color normalColor;
    private Color underwaterColor;
    private GameObject water;
    private Skybox skybox;

    
    // Use this for initialization
    void Start () {
        normalColor = new Color (0.7688679f, 0.9962111f, 1f, 0.5f);
        underwaterColor = new Color (0.1921569f, 0.3019608f, 0.4745098f, 0.5f);
        water = GameObject.Find("WaterSurface");
        waterHeight = water.transform.position.y;
        //Debug.Log(water.transform.position.y);
        skybox=GetComponent<Skybox>();


    }
 
 // Update is called once per frame
    void Update () {
        if ((transform.position.y < waterHeight) != isUnderwater) {
            isUnderwater = transform.position.y < waterHeight;
            if (isUnderwater) SetUnderwater ();
            if (!isUnderwater) SetNormal ();
        }
    }
 
    void SetNormal () {
        RenderSettings.fogColor = normalColor;
        RenderSettings.fogDensity = 0.005f;
        //Debug.Log("Normal Settings");
        skybox.enabled=true;

    }
    
    void SetUnderwater () {
        RenderSettings.fogColor = underwaterColor;
        RenderSettings.fogDensity = 0.05f;
        //Debug.Log("Underwater Settings");
        skybox.enabled=false;

    }
 }