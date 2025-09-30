using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VASPanelScript : MonoBehaviour
{
    public Slider mySlider;
    public string filename;
    public SettingPanelScript mySettingPanelScript;
    public GameController myGameController;
    ES3Cloud cloud;
    

    // Start is called before the first frame update
    void Start()
    {
        //filename = Application.streamingAssetsPath + "/VAS_Data.txt";
        

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    IEnumerator SyncServer(string _filename)
    {
        cloud = new ES3Cloud("https://www.telerehabilitation.ch/ES3Cloud.php", "03a9cb9ce71d");
        yield return StartCoroutine(cloud.Sync(_filename));
        if (cloud.isError)
            Debug.LogError(cloud.error);
    }


 
    public void OnOKButtonPressed()
    {


        string patientID =  PlayerPrefs.GetString("ID","0");        //mySettingPanelScript.patientID;
        string patientKey = PlayerPrefs.GetString("Key","0");   //mySettingPanelScript.patientKey;


        string fileName = "VAS_P" + patientID + "_K" + patientKey;
        var es3File = new ES3File(fileName);
        string tag;
        string time = System.DateTime.UtcNow.ToLocalTime().ToString("dd-MM-yyyy HH:mm:ss");
        tag = time;
        // write Values to the file
        es3File.Save<float>(tag, mySlider.value);
        // Sync the file with corresponding file in storage
        es3File.Sync();
        StartCoroutine(SyncServer(fileName));       // sync the local file with the SSL file on telerehabilitation.ch
        mySlider.value = 0.5f;
        myGameController.OnButtonSwitchToPanel1();
    }
}
