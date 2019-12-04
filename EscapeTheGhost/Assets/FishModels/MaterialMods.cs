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
    static string[] names=new string[56];
    List<Texture> backupTextures;
    // Start is called before the first frame update
    void Start()
    {
        GameObject go = this.gameObject;
        Renderer=GetComponent<Renderer>();
        m_Material=GetComponent<Renderer>().material;
        newMat=m_Material;
        mTex = newMat.mainTexture;
        string Bstring =" ";
        string Sstring =" ";
        int k=8;
        int j=7;
        if (firstRun==true){
            firstRun=false;
/*             if (Application.isEditor){
                guids = AssetDatabase.FindAssets("Fish ", new[] {"Assets/Resources/Materials/FishMats/JPGS"}); 
            }
            else{ */
                for (j=0;j<7;j++){
                    Bstring="Fish ";
                    switch (j)
                    {
                        case 0:
                            Bstring+="Citrus-B ";
                            break;                                        
                        case 1:
                            Bstring+="Classic-B ";
                            break;                     
                        case 2:
                            Bstring+="DeepSea-B ";
                            break;
                        case 3:
                            Bstring+="Dusk-B ";
                            break;                                     
                        case 4:
                            Bstring+="Lagoon-B ";
                            break;                                     
                        case 5:
                            Bstring+="Lava-B ";
                            break;                                     
                        case 6:
                            Bstring+="Magenta-B ";
                            break;
                        
                    }
                    for (k=0;k<8;k++){
                        switch (k)
                        {
                            case 0:
                                Sstring="Blue-S";
                                break;                                        
                            case 1:
                                Sstring="BW-S";
                                break;                     
                            case 2:
                                Sstring="DarkBlue-S";
                                break;
                            case 3:
                                Sstring="Green-S";
                                break;                                     
                            case 4:
                                Sstring="LightGreen-S";
                                break;                                     
                            case 5:
                                Sstring="Magenta-S";
                                break;                                     
                            case 6:
                                Sstring="Pink-S";
                                break;
                            case 7:
                                Sstring="Red-S";
                                break;
                                                
                        }
                        string FullString =Bstring+Sstring;
                        names[j*8+k]=FullString;
                        //print(names[j*8+k]);
                    }
                }
            //} 
        }
        i=i%(j*k);
       /* if (Application.isEditor){

            //AssetDatabase.RenameAsset("Assets/FishModels/TestFolder/12265_Fish_v1_L2.obj", "FishTest.obj"); //Works
            string largeString=" ";
            guids=RemoveDuplicates(guids);
            for (int h=0;h<guids.Length;h++)
            {
                largeString+=AssetDatabase.GUIDToAssetPath(guids[h])+"\n ";
            }
            //print ("AAA \n "+largeString);
        }
        */
        if (i==0){
            /*if (Application.isEditor)
                guids=reshuffle(guids);
            else*/
                names=reshuffle(names);
        }
        
        // if (i>=guids.Length){
        //     i=0;
        //     guids=reshuffle(guids);
        // }
/*         if (Application.isEditor){ 
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

            mTex=Resources.Load(test) as Texture;   //editor only
            // print (mTex.name);  //Ref to texture to extract color scheme.
            colourIdentification(mTex.name);    //editor only
        }*/
        //else{
            string load="Materials/FishMats/JPGS/"+names[i];
            mTex=Resources.Load(load) as Texture;
            if (mTex==null){
                print("mTex=null"+"\n "+load);
            }
            colourIdentification(load);
        //}
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