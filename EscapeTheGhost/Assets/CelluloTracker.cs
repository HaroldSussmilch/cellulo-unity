using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CelluloTracker : MonoBehaviour
{
    public class CelluloIndexEntry{
        
        // Auto-implemented properties.
        public long Id { get; set; }
        public Cellulo Robot { get; set; }
        public GameObject AssociatedGO{ get; set; }
        public bool hapticOn =false;

        public CelluloIndexEntry() {
            Robot=new Cellulo();
            Id=Robot.getID();
         }

        /* public CelluloIndexEntry(Cellulo robot)
        {
            Id=Robot.getID();
            Robot=robot;
        } */
    }
    
    public List<CelluloIndexEntry> CelluloInPool;
    // Start is called before the first frame update
    void Start()
    {
        CelluloInPool=new List<CelluloIndexEntry>{};    
    }

    // Update is called once per frame
    void Update()
    {
        while (true){
            if(CelluloInPool.Count==Cellulo.totalRobots()){
                break;
            }
            CelluloIndexEntry newEntry =new CelluloIndexEntry();
            print("Adding new CelluloTrackerEntry : \n robot ID=  "+newEntry.Id);
            CelluloInPool.Add(newEntry);
        }
        foreach(CelluloIndexEntry Entry in CelluloInPool){
            //print("List Entry robot ID :"+ Entry.Id+ "\n has associated GO :"+Entry.AssociatedGO);
        }
        
    }
    public int unAssociatedRobotsCount(){
        int num=0;
        foreach(CelluloIndexEntry Entry in CelluloInPool){
            if(Entry.AssociatedGO==null){
                num++;
            }
        }
        return num;
    }
    public Cellulo getUnassociatedCellulo(){
        foreach(CelluloIndexEntry Entry in CelluloInPool){
            if(Entry.AssociatedGO==null){
                return Entry.Robot;
            }
        }
        print("Warning : No Unassociated Robots to return");
        return null;
    }
    public void AssociateGOToRobot(GameObject GO,Cellulo robot){
        print("Associating GO "+GO.name+" to robot ID"+robot.getID());
        CelluloIndexEntry myEntry = GetEntry(robot);
        myEntry.AssociatedGO=GO;
    }
    public CelluloIndexEntry GetEntry(Cellulo robot){
        CelluloIndexEntry EntryToReturn = CelluloInPool.Find(x => x.Id.Equals(robot.getID()));
        return EntryToReturn;
    }
    public CelluloIndexEntry GetEntry(GameObject GO){
        CelluloIndexEntry EntryToReturn = CelluloInPool.Find(x => x.AssociatedGO.Equals(GO));
        return EntryToReturn;
    }
}
