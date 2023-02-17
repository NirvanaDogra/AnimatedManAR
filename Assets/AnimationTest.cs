using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationTest : MonoBehaviour
{
    public GameObject go;
    public GameObject player;
    private Animator anim;
    void Start()
    {
        anim = player.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
    
    }

    public void PlaceObject() {
        var pos = player.transform.position;
        pos.z += 0.8f;
        Instantiate(go, pos, player.transform.rotation);
        Debug.Log("Clicked");
        setAnimationToSitting();
    }

    void setAnimationToTyping() {
        anim.SetBool("Sitting", false);
        anim.SetBool("Waving", false);
        anim.SetBool("Typing", true);
    }

    void setAnimationToSitting() {
        anim.SetBool("Sitting", true);
        anim.SetBool("Waving", false);
        anim.SetBool("Typing", false);
    }
}