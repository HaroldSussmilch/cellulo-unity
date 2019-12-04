using UnityEngine;
using System.Collections;
using System;
using System.Runtime.InteropServices;

public class Cellulo {
    // id inside the library
    private long id;
    
    // constructor: connect to robot
    public Cellulo()
    {
        id = newRobot();
        Debug.Log("New Cellulo Object Created");
        if(id == 0) {
            Debug.Log("WARNING: using zero pointer as a Cellulo object. It means that Cellulo object creation failed.");
            return;
        }
    }

    // disconnect from robot on exit
    ~Cellulo() {
        Debug.Log("Cellulo Destructor Called1");
        destroyRobot(id);
        Debug.Log("Cellulo Destructor Called2"+"\n Sleeping 5s");
        System.Threading.Thread.Sleep(5000);
        Debug.Log("Finished sleeping");

    }
    // INIT Library, must call a bit before connecting
    [DllImport ("Plugin")]
    public static extern IntPtr PrintHello();

    // INIT Library, must call a bit before connecting
    [DllImport ("cellulo-unity")]
    public static extern void initialize();
    
    // number of robots in the pool
    [DllImport ("cellulo-unity")]
    public static extern long totalRobots();

    // number of robots available (not used in Unity yet)
    [DllImport ("cellulo-unity")]
    public static extern long robotsRemaining();

    // Cellulo methods export below...
    [DllImport ("cellulo-unity")]
    private static extern long newRobot();
    [DllImport ("cellulo-unity")]
    private static extern void destroyRobot(long id);
    [DllImport ("cellulo-unity")]
    private static extern void setGoalVelocity(long robot, float vx, float vy, float w);
    public void setGoalVelocity(float vx, float vy, float w) {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        setGoalVelocity(id, vx, -vy, w);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern void setGoalPose(long robot, float x, float y, float theta, float v, float w);
    public void setGoalPose(float x, float y, float theta, float v, float w) {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        setGoalPose(id, x, -y, theta, v, w);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern void setGoalPosition(long robot, float x, float y, float v);
    public void setGoalPosition(float x, float y, float v) {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        setGoalPosition(id, x, -y, v);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern void clearTracking(long robot);
    public void clearTracking() {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        clearTracking(id);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern void clearHapticFeedback(long robot);
    public void clearHapticFeedback() {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        clearHapticFeedback(id);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern void setVisualEffect(long robot, long effect, long r, long g, long b, long value);
    public void setVisualEffect(long effect, long r, long g, long b, long value) {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        setVisualEffect(id, effect, r, g, b, value);
    }
    
    
    [DllImport ("cellulo-unity")]
    private static extern void setCasualBackdriveAssistEnabled(long robot, long enabled);
    public void setCasualBackdriveAssistEnabled(long enabled) {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        setCasualBackdriveAssistEnabled(id, enabled);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern void setHapticBackdriveAssist(long robot, float xAssist, float yAssist, float thetaAssist);
    public void setHapticBackdriveAssist(float xAssist, float yAssist, float thetaAssist) {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        setHapticBackdriveAssist(id, xAssist, yAssist, thetaAssist);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern void reset(long robot);
    public void reset() {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        reset(id);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern void simpleVibrate(long robot, float iX, float iY, float iTheta, long period, long duration);
    public void simpleVibrate(float iX, float iY, float iTheta, long period, long duration) {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        simpleVibrate(id, iX, iY, iTheta, period, duration);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern float getX(long robot);
    public float getX() {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return(0.0f);
        }
        return getX(id);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern float getY(long robot);
    public float getY() {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return(0.0f);
        }
        // Unity's y is up
        return -getY(id);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern float getTheta(long robot);
    public float getTheta() {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return(0.0f);
        }
        return getTheta(id);
    }
    
    [DllImport ("cellulo-unity")]
    private static extern long getKidnapped(long robot);
    public bool getKidnapped() {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return(false);
        }
        return getKidnapped(id) > 0;
    }

    // defining the type
    public delegate void kidnappedCallbackType();
    
    // our variable (need to remember the value, otherwise it gets garbage collected)
    // See https://forum.unity.com/threads/native-plugin-c-interop-crash-in-callback.337178/
    private kidnappedCallbackType kidnappedCallback;

    // function from C to set the callback
    [DllImport ("cellulo-unity")]
    private static extern void setKidnappedCallback(long robot, kidnappedCallbackType callback);

    // public function in C# to set the callback
    public void setKidnappedCallback(kidnappedCallbackType callback) {
        if(id == 0) {
            Debug.Log("Robot is broken (connection to pool failed). Cannot do API call");
            return;
        }
        kidnappedCallback = callback;
        setKidnappedCallback(id, kidnappedCallback);
    }
    public long getID(){
        return id;
    }

}
