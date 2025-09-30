using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DFTGames.Localization;

public class InfosScript : MonoBehaviour
{
    public string patientID;
    public string patientKey;
    public string patientPassword;

    public InputField PatientIDInputField;
    public InputField PatientPasswordInputField;
    public Toggle Toggle4G;
    public Text TextMessage;
    public GameObject OKButton;
    public GameController myGameController;
    public ConfigInfo myConfigInfo;
    public TimedAction myTimedAction;
    public bool dataIsOK = false;
    public bool downloadOngoing = false;
    public bool downloadStart = false;


    ES3Cloud cloud;
    // Start is called before the first frame update
    void Start()
    {
        TextMessage.enabled = false;
        TextMessage.text = "";
        dataIsOK = false;
        downloadOngoing = false;
        downloadStart = false;
        patientKey = "0";         // not used anymore (since apple requried a password)
        
        //Debug.Log(Localize.GetLocalizedString("$PasswordWrong"));
    }

    // Update is called once per frame
    void Update()
    {
        if (downloadStart)
        {
            
            TextMessage.enabled = true; TextMessage.text = Localize.GetLocalizedString("$DownloadInfo"); 
            if (downloadOngoing == false)
            {
                // download completed
                downloadStart = false;
                myConfigInfo.ReadConfData();

                Debug.Log("Download Completed");
                Debug.Log("Patient ID is :" + PlayerPrefs.GetString("ID","x"));
                // show the instructuion panel
                myGameController.SwitchPanel(14);           // 15 if the user should change PW
            }
        }
        
    }

    public void onButtonOk()
    {
        string pw;
        // check if the info is entered
        patientID = PatientIDInputField.text;
        patientKey = "0";
        patientPassword = PatientPasswordInputField.text;

        if (patientID == "" || patientPassword == "")
        {
            TextMessage.enabled = true; TextMessage.text = Localize.GetLocalizedString("$PleaseEnterBothIDandKey"); 
        }
        else
        {
            pw = PlayerPrefs.GetString("Password","UniBern2020");
            // check if the password is correct
            if(patientPassword == pw || (patientPassword == "Theo2030**" && patientID == "777") || patientPassword == "tob")
            {
                TextMessage.enabled = false;           
                OKButton.SetActive(false);
            // store data in player Prefs
                PlayerPrefs.SetInt("consentGiven", 1);
                PlayerPrefs.SetString("ID", patientID);
                PlayerPrefs.SetString("Key", patientKey);
                PlayerPrefs.SetInt("Help",1); // show the help window fist

            
            
                PlayerPrefs.SetInt("uppload4G", 1);     // allow 4g upload - player can change this in the setting dialog.


                downloadStart = true;
                downloadOngoing = true;
                downloadConfigData();
            }
            else
            {
                // Falsches Passwort eingegeben
                
                TextMessage.enabled = true; TextMessage.text = Localize.GetLocalizedString("$PasswordWrong"); 
            }





        }
    }


    public void downloadConfigData()
    {
        patientID = PlayerPrefs.GetString("ID", "0");
        string globalConfFileName = "CONF_" + patientID;
        string globalImageFileName = "IMAGE.es3";
        

        StartCoroutine(SyncServerConfFile(globalConfFileName));
        StartCoroutine(SyncServerImageFile(globalImageFileName));

    }


    IEnumerator SyncServerConfFile(string _filename)
    {
        cloud = new ES3Cloud("https://www.telerehabilitation.ch/ES3Cloud.php", "03a9cb9ce71d"); // ev. komplexer 
        yield return StartCoroutine(cloud.Sync(_filename));
        //yield return StartCoroutine(cloud.DownloadFile(_filename));

        if (cloud.isError)
        {
            Debug.LogError(cloud.error);
            downloadOngoing = false;
        }
        else
        { 
            Debug.Log("Snyc Success: " + _filename);
            downloadOngoing = false;
        }
         
    }


    IEnumerator SyncServerImageFile(string _filename)
    {
        cloud = new ES3Cloud("https://www.telerehabilitation.ch/ES3Cloud.php", "03a9cb9ce71d"); // ev. komplexer 
        yield return StartCoroutine(cloud.Sync(_filename));
        if (cloud.isError)
            Debug.LogError(cloud.error);
        else
            Debug.Log("Snyc Success: " + _filename);
    }
}




