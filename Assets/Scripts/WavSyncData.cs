using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class WavSyncData : MonoBehaviour
{
    ES3Cloud cloud;
    // Start is called before the first frame update
    void Start()
    {
        int a = 0;

        // chekck if there are files to upload (from last time)
        //Debug.Log(System.IO.Directory.GetFiles(Application.persistentDataPath));

        if (GetFilesToUpload() > 0)
        {

            if (CheckIfAllowedToUpload())
            {
                
                if (Application.internetReachability == NetworkReachability.NotReachable)
                {
                    Debug.Log("Network not reachable - NO UPLOAD");
                }
                else
                {
                    foreach (string file in System.IO.Directory.GetFiles(Application.persistentDataPath))
                    {
                        if (Path.GetExtension(file) == ".wav")
                        {
                            a++;
                            Debug.Log("Upload File Nr." + a);
                            StartCoroutine(UploadServer(file));
                            Debug.Log("Done Uploading File Nr." + a);
                        }
                    }
                }
            }
            

        }


        


        
        

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public bool CheckIfAllowedToUpload()
    {

        // if the user does not allow 4G upload -> check if wifi or 4G
        if (PlayerPrefs.GetInt("uppload4G",1) == 0)
        {
            // player does not allow
            // check if we are on wifi

            if (Application.internetReachability == NetworkReachability.ReachableViaLocalAreaNetwork)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            // player allows 4G uppload
            return true;
        }


    }


    public int GetFilesToUpload()
    {
        int a = 0;
        foreach (string file in System.IO.Directory.GetFiles(Application.persistentDataPath))
        {
            if (Path.GetExtension(file) == ".wav")
            {
                a++;
            }
        }
        return a;
    }


    IEnumerator SyncServer(string _filename)
    {
        Debug.Log("Sinc Wave has been started");
        cloud = new ES3Cloud("https://www.telerehabilitation.ch/ES3Cloud.php", "03a9cb9ce71d");
        yield return StartCoroutine(cloud.Sync(_filename));
        if (cloud.isError)
            Debug.Log(cloud.error);
        Debug.Log("Sinc Wave file done");
    }


    IEnumerator UploadServer(string _filename)
    {
        Debug.Log("Upload Wave has been started");
        cloud = new ES3Cloud("https://www.telerehabilitation.ch/ES3Cloud.php", "03a9cb9ce71d");
        yield return StartCoroutine(cloud.Sync(_filename));
        if (cloud.isError)
        {
            Debug.Log(cloud.error);
        }
        else
        {
            Debug.Log("Sinc Wave file done - delete File");
            // delete local File
            ES3.DeleteFile(_filename);
        }
            
    }


    public void SyncFile(string _file)
    {
        if (CheckIfAllowedToUpload())
        {
            Debug.Log("SyncFiles");
            //StartCoroutine(SyncServer(_file));
            StartCoroutine(UploadServer(_file));
        }

    }
}
