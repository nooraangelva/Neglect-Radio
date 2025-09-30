using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class PanelScript : MonoBehaviour
{
    public GameObject thisPanel;                    // reference to the panel itself MIKE
    public GameObject referencePanel;               // refernce to the reference panel (that is the position that apears in the camera
    public bool active;                             
    public bool visible;
    public string panelName = "";                   // string of the panel Name (taken from the unity editor
     
    public bool newPanelActivation = false;
    private RectTransform thisRectTransform;           // position of the panel itself 
    private RectTransform referenceRectTransform;      // position of the referecne panel
    private Vector3 initialPosition;                    // saves the inital position of the Panel in the scence


    // Start is called before the first frame update
    void Start()
    {
        thisRectTransform = GetComponent<RectTransform>();
        referenceRectTransform = referencePanel.GetComponent<RectTransform>();
        if (referenceRectTransform == null || thisRectTransform == null)
        {
            Debug.LogError("ERROR 1: Error when looking for the Rect Tranform in Script Panel Script: " + thisPanel.name);
        }

        panelName = thisPanel.name;
        initialPosition = thisRectTransform.position;

        if (active && visible)
        {
            StartPanel();
        }
        else if (active && !visible)
        {
            ActivatePanel();
        } 
        else
        {
            EndPanel();
        }

    }



    

    // Update is called once per frame
    void Update()
    {
        
    }


    public void StartPanel()            // activate the panel and moves it to the reference position
    {
        ActivatePanel();
        Debug.Log("Panel Name" + panelName);
        Debug.Log(panelName);
        Debug.Log(thisPanel);
        initialPosition = thisRectTransform.position;
        thisRectTransform.position = referenceRectTransform.position;
        newPanelActivation = true;
    }

    public void EndPanel()              // de-activate panel and move it back to the original position
    {
        DeActivatePanel();
        thisRectTransform.position = initialPosition;
        newPanelActivation = false;
    }

    public void ActivatePanel()          // activate the panel and moves it to the reference position
    {
        thisPanel.SetActive(true);
    }

    public void DeActivatePanel()          // activate the panel and moves it to the reference position
    {
        thisPanel.SetActive(false);
    }

}
