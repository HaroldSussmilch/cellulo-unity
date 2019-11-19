using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.Linq;

public class MaterialMods : MonoBehaviour
{

    public Material m_Material; 
    public Material newMat; 

    public Renderer Renderer;
    public Texture mTex;
    Texture prevTex;
    static int i=0;
    static bool firstRun=true;
    public Texture texture;
    static string[] guids={};
    // Start is called before the first frame update
    void Start()
    {
        GameObject go = this.gameObject;
        Renderer=GetComponent<Renderer>();
        m_Material=GetComponent<Renderer>().material;
        newMat=m_Material;
        mTex = newMat.mainTexture;
        
        if (firstRun==true){
            guids = AssetDatabase.FindAssets("Fish ", new[] {"Assets/Resources/Materials/FishMats/JPGS"}); 
            firstRun=false;
        }
        //AssetDatabase.RenameAsset("Assets/FishModels/TestFolder/12265_Fish_v1_L2.obj", "FishTest.obj"); //Works
        string largeString=" ";
        guids=RemoveDuplicates(guids);
        for (int h=0;h<guids.Length;h++)
        {
            largeString+=AssetDatabase.GUIDToAssetPath(guids[h])+"\n ";
        }
        //print ("AAA \n "+largeString);
        if (i==0)
            guids=reshuffle(guids);
        
        // if (i>=guids.Length){
        //     i=0;
        //     guids=reshuffle(guids);
        // }

        foreach (string guid in guids)
        {
            //Debug.Log("All Assets Fish Found : " + AssetDatabase.GUIDToAssetPath(guid)+" \n"+this.gameObject); //https://docs.unity3d.com/ScriptReference/AssetDatabase.FindAssets.html
        }
        string test =AssetDatabase.GUIDToAssetPath(guids[i]);
        // print("Ttest "+test);
        

        string stringToRemove ="Assets/Resources/";
        // Note: Extensions must be omitted ; Resources.Load searches in Resources folder directly
        test = System.IO.Path.ChangeExtension(test, null); //gets path with folders and .jpg ext
        //test = System.IO.Path.GetFileNameWithoutExtension(test);    //path without folders and .jpg ext : add string pathToAdd "Materials/FishMats/JPGS/" and test =pathToAdd+test
        test=test.Substring(stringToRemove.Length); //remove Assets/Resources from path name

        mTex=Resources.Load(test) as Texture;
        // print (mTex.name);  //Ref to texture to extract color scheme.
        colourIdentification(mTex.name);
        i++;
    }

    // Update is called once per frame
    void Update()
    {
        if (mTex!=prevTex)
        {
            this.Renderer.material.mainTexture=mTex;
        }    
        prevTex=mTex;
    }


    string[] reshuffle(string[] texts)
    {
        // Knuth shuffle algorithm :: courtesy of Wikipedia :)
        for (int t = 0; t < texts.Length; t++ )
        {
            string tmp = texts[t];
            int r = Random.Range(t, texts.Length);
            texts[t] = texts[r];
            texts[r] = tmp;
        }
        return texts;
    }


    public string[] colourIdentification(string textName){
        //Gets texture.name as input "Fish XXX-B XXX-S
        string toFind1 = "-B";
        string toFind2 = "-S";
        string toFind3 = "Fish ";

        int start1 = textName.IndexOf(toFind3) + toFind3.Length;
        int end1 = textName.IndexOf(toFind1,start1);
        string bodyColor = textName.Substring(start1, end1-start1);
        //print ("BCOLOR is :"+bodyColor);

        int start2 = textName.IndexOf(toFind1) + toFind1.Length +1; //+1 for the space after -B
        int end2 = textName.IndexOf(toFind2,start1);
        string stripeColor = textName.Substring(start2, end2-start2);
        //int end = textName.IndexOf(toFind2, start2);
        //print ("SCOLOR is :"+stripeColor);
        string[] ret= {bodyColor,stripeColor};
        return ret;

    }
    public static string[] RemoveDuplicates(string[] s)
    {
        HashSet<string> set = new HashSet<string>(s);
        string[] result = new string[set.Count];
        set.CopyTo(result);
        return result;
    }
}