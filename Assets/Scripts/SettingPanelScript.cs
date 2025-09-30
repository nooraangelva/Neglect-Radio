using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class SettingPanelScript : MonoBehaviour
{
    public GameController myGameController;
    public ConfigInfo myConfigInfo; 
    public bool startup = false;


    public string patientID = "";
    public string name = "";
    public string vorname = "";




    private string patientKey = "0";
    private string patientLanguage = "D";
    private int consentGiven= 0;
    private int uppload4G = 1;


    public InputField PatientIDInputField;
    public InputField PatientKeyInputField;
    public Text CarrierInfo;
    public Text FilesToUploadInfo;
    public Text LanguageInfo;
    public Toggle Toggle4G;
    public WavSyncData mySpeakWordSyncData;

    // Start is called before the first frame update
    void Start()
    {





        
        



        //patientID = ES3.Load("PatientID", 0);
        //PatientIDInputField.text = patientID.ToString();


        //patientID = PlayerPrefs.GetString("ID", "Musterman");
        patientKey = PlayerPrefs.GetString("Key", "Max");
        patientLanguage = PlayerPrefs.GetString("Language", "D");    // D,F,I,E
        consentGiven = PlayerPrefs.GetInt("consentGiven", 0);        // first Time Here 
        uppload4G = PlayerPrefs.GetInt("uppload4G", 1);         // enable 4G upload vs wifi only.
        PatientIDInputField.text = patientID;
        PatientKeyInputField.text = patientKey;
        Toggle4G.isOn = (uppload4G == 1);
        

        //startup = true;
    }



    void OnDisable()
    {
        Debug.Log("PrintOnDisable: script was disabled");
    }

    void OnEnable()
    {
        Debug.Log("PrintOnEnable: script was enabled");
        // read and update the values 
        Start();
    }

    // Update is called once per frame
    void Update()
    {
        // check internet connection

        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            //Change the Text
            CarrierInfo.text = "Not Reachable.";
        }
        //Check if the device can reach the internet via a carrier data network
        else if (Application.internetReachability == NetworkReachability.ReachableViaCarrierDataNetwork)
        {
            CarrierInfo.text = "Reachable via carrier data network.";
        }
        //Check if the device can reach the internet via a LAN
        else if (Application.internetReachability == NetworkReachability.ReachableViaLocalAreaNetwork)
        {
            CarrierInfo.text = "Reachable via Local Area Network.";
        }

        int nrFiles = mySpeakWordSyncData.GetFilesToUpload();
        if (nrFiles == 0)
        {
            FilesToUploadInfo.text = "All Files uploaded";
        }
        else
        {
            FilesToUploadInfo.text = nrFiles.ToString() + " Files to upload";
        }

        switch (patientLanguage)
        {
            case "D":
                LanguageInfo.text = "Sprache ist Deutsch."; break;
            case "F":
                LanguageInfo.text = "La langue est le français."; break;
            case "E":
                LanguageInfo.text = "Language is Enlish."; break;
            case "I":
                LanguageInfo.text = "La lingua è italiana."; break;
        }




    }

    public void setEnglish()
    {
        patientLanguage = "E";
        myGameController.SetEnglish();

    }

    public void setGerman()
    {
        patientLanguage = "D";
        myGameController.SetGerman();

    }

    public void setItalian()
    {
        patientLanguage = "I";
        myGameController.SetItalian();
    }

    public void setFrench()
    {
        patientLanguage = "F";
        myGameController.SetFrench();
    }
    


public void OnButtonSaveAndExit()
    {
        patientID =     PatientIDInputField.text;
        patientKey =    PatientKeyInputField.text;
        if (Toggle4G.isOn)
            uppload4G = 1;
        else
            uppload4G = 0;





        PlayerPrefs.SetString("ID",patientID);
        PlayerPrefs.SetString("Key",patientKey);
        PlayerPrefs.SetString("Language",patientLanguage);
        //PlayerPrefs.SetInt("FirstTime",firstTime);
        PlayerPrefs.SetInt("uppload4G", uppload4G);
        //myGameController.OnButtonExitApp();
        myGameController.SwitchPanel(8); // switch back to menu panel
    }


    public void OnButtonDeleteAccount()
    {
        /*PlayerPrefs.SetString("ID", "0");
        PlayerPrefs.SetString("Key", "0");
        PlayerPrefs.SetString("Language", "D");
        PlayerPrefs.SetInt("consentGiven", 0);
        PlayerPrefs.SetInt("uppload4G", 1);*/

        myConfigInfo.DeleteLocalConfigFiles();


        PlayerPrefs.DeleteAll();
        myGameController.SwitchPanel(10);

    }


}
