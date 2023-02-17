using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;
using UnityEngine.XR.ARSubsystems;
using System;
using UnityEngine.EventSystems;

public class ARTapAndPlace : MonoBehaviour
{
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    public GameObject go;

    private ARRaycastManager arOrigin;
    private Pose placementPose;
    private bool placementPoseIsValid = false;
    private GameObject player = null;
    private GameObject chair = null;
    private Animator anim;

    void Start()
    {
        arOrigin = FindObjectOfType<ARRaycastManager>();
    }

    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();

        if (placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began && !EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
        {
            PlaceObject();
        }
    }

    private void PlaceObject()
    {
        var rotation = placementPose.rotation;
        rotation.y +=180;
        if(player!=null) {
            player.transform.position = placementPose.position;
            chair.transform.position = placementPose.position;
        } else {
            player = Instantiate(objectToPlace, placementPose.position, rotation);
            anim = player.GetComponent<Animator>();
            var pos = placementPose.position;
            pos.z+=0.2f;
            pos.y+=0.1f;
            if(anim!=null) {
                chair = Instantiate(go, pos, rotation);
            }
            // var pos = placementPose.position;
            // pos.z -= 0.8f;
            // chair = Instantiate(go, pos, rotation);
            // chair.SetActive(false);
        }
    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }

    private void UpdatePlacementPose()
    {
        var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        arOrigin.Raycast(screenCenter, hits, TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;
        if (placementPoseIsValid)
        {
            placementPose = hits[0].pose;

            var cameraForward = Camera.current.transform.forward;
            var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
            placementPose.rotation = Quaternion.LookRotation(cameraBearing);
        }
    }

    public void OnClickPlaceObject() {
        // chair.SetActive(true);
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

    void setAnimationToWaving() {
        anim.SetBool("Sitting", false);
        anim.SetBool("Waving", true);
        anim.SetBool("Typing", false);
    }
}
