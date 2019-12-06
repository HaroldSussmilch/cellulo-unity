using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Runtime.InteropServices;

public class GameScript : MonoBehaviour {
        public Cellulo robot1;
        public Cellulo robot2;
	public GameObject obj1;
	public GameObject obj2;
        private float start_time;
        private float vibrate_start_time;
        private float update_time_s = 1;
        private float vibrate_time_s = 0.5f;
        private float min_dist_mm = 80;
        private bool wasKidnapped = false;
        private bool isRunning = false;
        public Text infoText;

        private void setInfo(string s) {
            infoText.text = "EscapeTheGhost: " + s;
        }

        public void start() {
            Debug.Log("START1");
            Debug.Log("The total number of remaining robots is"+Cellulo.robotsRemaining());
            Debug.Log("The total number of robots is "+Cellulo.totalRobots());
            robot1 = new Cellulo(); // just taking new robot from the pool or failing
            robot2 = new Cellulo(); // just taking new robot from the pool or failing
            
            Debug.Log("The total number of remaining robots is"+Cellulo.robotsRemaining());
            Debug.Log("The total number of robots is "+Cellulo.totalRobots());
	    // //Debug.Log(Marshal.PtrToStringAuto (Cellulo.PrintHello()));
        //     wasKidnapped = false;
        //     onKidnappedChanged();
        //     Debug.Log("START2");
        //     if(robot1 != null) {
        //         robot1.clearTracking();
        //         robot2.clearTracking();
        //         robot2.setHapticBackdriveAssist(0.8f, 0.8f, 0.8f);
        //     }
        //     Debug.Log("START3");
        //     isRunning = true;
        //     setGhostColor(255, 0, 0);
        //     Debug.Log("START4");
        //     setInfo("Game started");
        }
        
        public void stop() {
            Debug.Log("STOP");
            robot1.killRobot();
            robot2.killRobot();
            Debug.Log("The total number of remaining robots is"+Cellulo.robotsRemaining());
            Debug.Log("The total number of robots is "+Cellulo.totalRobots());
            //isRunning = false;
            //initRobots();
        }

        public void solved() {
            // if(!isRunning) return;
            // stop();
            // setInfo("You win!");
            // robot2.setVisualEffect(0, 0, 255, 0, 255);
        }

        void setGhostColor(int r, int g, int b) {
            // https://docs.unity3d.com/ScriptReference/Material.SetColor.html
            //Fetch the Renderer from the GameObject
            Renderer rend = obj1.GetComponent<Renderer>();

            //Set the main Color of the Material to green
            Color color = new Color(r, g, b);
            rend.material.SetColor("_Color", color);
            if(robot1 != null) robot1.setVisualEffect(0, r, g, b, 255);
        }

        void connect() {
            if(robot1 != null) return;
            robot1 = new Cellulo(); // just taking new robot from the pool or failing
            robot2 = new Cellulo();
            robot1.setKidnappedCallback(this.onKidnappedChanged);
            robot2.setKidnappedCallback(this.onKidnappedChanged);
            Debug.Log("Connect"+robot1);
        }

	// Use this for initialization
	void Start () {
            Cellulo.initialize();
            start_time = Time.time;
            vibrate_start_time = 0;
	}

        void initRobots() {
            robot1.setHapticBackdriveAssist(0, 0, 0);
            robot1.setGoalPose(40, -40, 0, 1000, 1000);
            robot2.setHapticBackdriveAssist(0, 0, 0);
            robot2.setGoalPose(40, -180, 0, 1000, 1000);
            robot2.setVisualEffect(0, 0, 0, 255, 255);
            setGhostColor(0, 255, 0);
            wasKidnapped = false;
            onKidnappedChanged();
            setInfo("Robots initialized");
        }
	
	// Update is called once per frame
	void Update () {
         if(robot1 != null && robot2!=null) {
            obj1.transform.position = new Vector3(robot1.getX(), robot1.getY(), 10.0f);
            obj2.transform.position = new Vector3(robot2.getX(), robot2.getY(), 10.0f);
            float now = Time.time;
            //double distance = Math.Pow(Math.Pow(robot1.getX() - robot2.getX(), 2) + Math.Pow(robot1.getY() - robot2.getY(), 2), 0.5);
            //if(!isRunning) return;
            //if(wasKidnapped) {
            //    vibrate();
            //    setInfo("Game over: kidnapped");
            //    wasKidnapped = false;
            //}
            //if(distance < min_dist_mm) {
            //    vibrate();
            //    setInfo("Game over: ghost ate you");
            //}
            //if(now - start_time > update_time_s) {
            //    robot1.setGoalPose(robot2.getX(), robot2.getY(), 0, 1000, 1000);
            //    start_time = now;
            //}
         }
         //else {
         //    if(Cellulo.robotsRemaining() >= 2) connect();
         //}
}

        public void vibrate() {
            float now = Time.time;
            if(now - vibrate_start_time > vibrate_time_s) {
                if(robot2 != null) robot2.simpleVibrate(0, 0, 10, 0, 200);
                vibrate_start_time = now;
            }
            if(isRunning) {
                stop();
                setInfo("Game over: collision with obstacle");
            }
        }

        public void onKidnappedChanged() {
            if(robot1 == null) return;
            if(robot1.getKidnapped() || robot2.getKidnapped()) wasKidnapped = true;
        }
        void OnApplicationQuit()
        {   
            StartCoroutine(ExampleCoroutine());
            Debug.Log("Application ending after " + Time.time + " seconds");
        }
        void OnDestroy(){
            
            Debug.Log("onDestroyFunction");
        }

        IEnumerator ExampleCoroutine()
            {

            
            //Print the time of when the function is first called.
            Debug.Log("Started Coroutine at timestamp : " + Time.time);

            //yield on a new YieldInstruction that waits for 5 seconds.
            yield return new WaitForSeconds(5);

            //After we have waited 5 seconds print the time again.
            Debug.Log("Finished Coroutine at timestamp : " + Time.time);

        }
        void OnDisable(){
            Debug.Log("onDisable");
        }

}
