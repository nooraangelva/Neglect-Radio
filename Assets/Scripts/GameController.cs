



using System.Collections;
using System.Collections.Generic;
using UnityEngine;






public class GameController : MonoBehaviour
{

    //Panels
    const int MainPanelNr = 1;
    const int VASPanelNr = 2; 



    const int maxNrOfPanels = 20;
    public GameObject[] panels = new GameObject[maxNrOfPanels];             // this is an array with all the panels of the scene in it
    public int currentPannelNr = MainPanelNr;                                       // index of the current panel (note - element 0 is the ref. Panel)
    public string currentPanelName = "MainPanel";
    public MenuManager myMenuManager;
    public TimedAction myTimedAction;
    bool startUp = true;
    // Start is called before the first frame update
    void Start()
    {
        //ActivatePanel(1);
        //myMenuManager.SetGerman();      // set the language - at start all panels are active - so it will work (no need to activate all panels)

        
        
        switch (PlayerPrefs.GetString("Language", "D"))
        {
            case "D":
                myMenuManager.SetGerman(); break;
            case "F":
                myMenuManager.SetFrench(); break;
            case "E":
                myMenuManager.SetEnglish(); break;
            case "I":
                myMenuManager.SetItalian(); break;
        }
        startUp = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (startUp)
        {
            startUp = false;

            // if we are here for the first time - some info is needed
            if (PlayerPrefs.GetInt("consentGiven", 0) == 0)
            {
                SwitchPanel(10);    // consent panel
                PlayerPrefs.SetInt("consentGiven", 1);
            }
            else
            {
                myTimedAction.StartTimedAction();   // start the questions according to the time...
            }



            
        }
        
    }

    public void OnButtonExitApp()
    {
        Application.Quit();
        //UnityEditor.EditorApplication.isPlaying = false;
    }

    public void OnButtonVASButton()
    {
        SwitchPanel(VASPanelNr);
    }

    public void OnButtonSwitchToPanel1()
    {
        SwitchPanel(1);
    }


    public void SwitchPanel(int _newPanelNr)            // switch to a new panel
    {
        DeActivatePanel(currentPannelNr);
        ActivatePanel(_newPanelNr);
        
    }


  


    public void SetGerman()
    {
        ActivateAllPanels();                // During runtime - all screens need to be active when changing the language       
        myMenuManager.SetGerman();          
        DeActivateAllPanels();              // de-activate all pannels
        SwitchPanel(currentPannelNr);       // activate current panel
        PlayerPrefs.SetString("Language", "D");
    }

    public void SetEnglish()
    {
        ActivateAllPanels();                // During runtime - all screens need to be active when changing the language
        myMenuManager.SetEnglish();         // change language
        DeActivateAllPanels();              // de-activate all panels
        SwitchPanel(currentPannelNr);       // activate current panel
        PlayerPrefs.SetString("Language", "E");
    }

    public void SetItalian()
    {
        ActivateAllPanels();                // During runtime - all screens need to be active when changing the language
        myMenuManager.SetItalian();         // change language
        DeActivateAllPanels();              // de-activate all panels
        SwitchPanel(currentPannelNr);       // activate current panel
        PlayerPrefs.SetString("Language", "I");
    }

    public void SetFrench()
    {
        ActivateAllPanels();                // During runtime - all screens need to be active when changing the language
        myMenuManager.SetFrench();         // change language
        DeActivateAllPanels();              // de-activate all panels
        SwitchPanel(currentPannelNr);       // activate current panel
        PlayerPrefs.SetString("Language", "F");
    }




    private void ActivatePanel(int _panelNr)
    {
        if (panels[_panelNr] == null)
        { Debug.LogError("ERROR 2 (GameController): Panel not found. Panel Nr:  " + currentPannelNr + " " + currentPanelName); }
        PanelScript panelNew = panels[_panelNr].GetComponent(typeof(PanelScript)) as PanelScript;
        panelNew.StartPanel();                          // turn on the new panel

        currentPannelNr = _panelNr;                  // update the current Panel Nr
        currentPanelName = panelNew.name;
    }

    private void DeActivatePanel(int _panelNr)
    {
        if (panels[_panelNr] == null)
        { Debug.LogError("ERROR 2 (GameController): Panel not found. Panel Nr:  " + currentPannelNr + " " + currentPanelName); }
        PanelScript panelOld = panels[_panelNr].GetComponent(typeof(PanelScript)) as PanelScript;
        panelOld.EndPanel();
        currentPannelNr = 0;
        currentPanelName = "default";

    }


    private void ActivateAllPanels()        // activate all panels - needed for changing the language
    {
        for (int i = 1; i < maxNrOfPanels; i++)
        {
            if (panels[i] != null)
            {
                PanelScript currPanel = panels[i].GetComponent(typeof(PanelScript)) as PanelScript;
                if (currPanel != null)
                { 
                    currPanel.ActivatePanel();
                }
            }
        }

    }

    private void DeActivateAllPanels()      // de-activate all panels - needed for changing the language
    {
        for (int i = 1; i < maxNrOfPanels; i++)
        {
            if (panels[i] != null)
            {
                PanelScript currPanel = panels[i].GetComponent(typeof(PanelScript)) as PanelScript;
                if (currPanel != null)
                {
                    currPanel.DeActivatePanel();
                }
            }
        }

    }

}
