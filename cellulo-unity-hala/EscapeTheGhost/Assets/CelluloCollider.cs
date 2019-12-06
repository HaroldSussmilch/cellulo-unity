using UnityEngine;
using System.Collections;

public class CelluloCollider : MonoBehaviour
{
    public GameScript controller;

    void Start()
    {
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.name == "Capsule") {
            //controller.solved();
        }
        else {
            //controller.vibrate();
        }
    }
}
