using System.Collections;
using System.Collections.Generic;
using Crosstales.Radio;
using UnityEngine;
using UnityEngine.UI;
using DFTGames.Localization;
using TMPro;
using System;


public class ListenRadio : MonoBehaviour
{
    public RadioPlayer myRadioPlayer;
    public Transform myRadioPlayerTransform;
    public GameController myGameController;
    public GameObject instructions;
    public GameObject CircularTimerObject;
    public GameObject TimerTextGameObject;
    public GameObject BackButtonGameObject;
    //public GameObject ExitButton;
    public CircularTimer myCircularTimer;
    public ConfigInfo myConfigInfo;
    public AudioSource myAudioSource;
    public bool isPlaying = false;
    public float degreesPerSecond = 15.0f;
    public float degreesPerSecondReverse = 280.0f;
    public float positionDegrees = +90.0f;
    public float stereoPan = 1.0f;
    public float direction = -1.0f;
    public Text ErrorText;
    public Text StatusText;
    public Text AlternativeText;
    public Text TimerText;
    public TMP_Text HelpText;

    public bool soundOK = false;
    public bool playBackError = false;
    public float maxPosX = 10;
    public float minPosX = -10;
    public float posX = 0;
    public float posY = 0;
    public float posZ = -9.0f;

    public bool shouldPlay = false;
    public float lastRestartTime = 0;
    
    ES3Cloud cloud;
    // Start is called before the first frame update
    void Start()
    {
        shouldPlay = false;
        HelpText.text = Localize.GetLocalizedString("$Help_ListenRadio2");
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        isPlaying = false;
        CircularTimerObject.SetActive(false);
        TimerTextGameObject.SetActive(false);
        BackButtonGameObject.SetActive(false);
        //ExitButton.SetActive(false);
        ErrorText.enabled = false;

        posZ = -9.0f;
        posY = 0;
        playBackError = false;
        StatusText.text = "";
    }


    void ReStart()
    {
        instructions.SetActive(true);
        ErrorText.enabled = false;
        HelpText.text = Localize.GetLocalizedString("$Help_ListenRadio2");
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        isPlaying = false;
        CircularTimerObject.SetActive(false);
        TimerTextGameObject.SetActive(false);
        StatusText.text = "";
        BackButtonGameObject.SetActive(false);

    }

    // Update is called once per frame
    void Update()
    {
        if (isPlaying)
        {
            if (myConfigInfo.radio_swipe_mode == "2D")
            {
                // we are in 2D mode
                myAudioSource.spatialBlend = 0; // we are in 2D mode
                if (direction < 0)
                {
                    // we are moving to the left
                    positionDegrees += direction * degreesPerSecond * Time.deltaTime;
                }
                else
                {
                    // we are moving to the right (extremely fast)
                    positionDegrees += direction * degreesPerSecondReverse * Time.deltaTime;
                }


                if (positionDegrees < -120)
                {
                    positionDegrees = -120f;
                    direction = 1.0f; // moving to the right
                }

                if (positionDegrees > 120)
                {
                    positionDegrees = 120f;
                    direction = -1.0f;
                }

                // set Stereo Pan
                stereoPan = positionDegrees / 90.0f;
                if (stereoPan > 1)
                {
                    stereoPan = 1.0f;
                }

                if (stereoPan < -1.0)
                {
                    stereoPan = -1.0f;
                }

                if (degreesPerSecond == 0) // no movement is needed
                {
                    stereoPan = 0;
                }

                myAudioSource.panStereo = stereoPan;
            }
            else
            {
                // we are in 3D mode
                myAudioSource.spatialBlend = 1; // we are in 2D mode
                myAudioSource.panStereo = 0;    // we are in 3D mode
                posX = posX - myConfigInfo.radio_swipe_horizontal_speed_3D * Time.deltaTime;
                if (posX < minPosX)
                {
                    posX = maxPosX;
                }
                Vector3 pos = new Vector3(posX, posY, posZ);
                myRadioPlayerTransform.transform.position = pos;
            }


            // to do: if isPlaying and soundOK == false for more than 5 seconds - restart
            if ((myCircularTimer.CurrentTime > 5 && soundOK == false) || playBackError == true)
            {
                AlternativeText.text = "Alternative Needed"; 
                if (myCircularTimer.CurrentTime - lastRestartTime > 5)
                {
                    myRadioPlayer.Stop();
                    myRadioPlayer.Play();
                    lastRestartTime = myCircularTimer.CurrentTime;
                }
                                // Try to Restart

                
            }  
            
        }
        else
        {
            positionDegrees = 90.0f; // initial position when in 2d mode
            direction = -1.0f;
            
            posX = 0;      // initial position when in 3D mode

        }

        if (myAudioSource.isPlaying == true)
        {
            soundOK = true;
            StatusText.text = ""; 
            playBackError = false;

            //TimerText = "1 min";
            float secAll  = Mathf.Floor((float)(myCircularTimer.CurrentTime));
            float min     = Mathf.Floor((float)(secAll/60.0));
            float sec     = (float)secAll - (float)(min*60.0);


            TimerText.text =  min.ToString() + "min " + sec.ToString() + "s von 15 min";

            TimerTextGameObject.SetActive(true);

        }
        else
        {
            soundOK = false;
            if (shouldPlay)
            {
                StatusText.text ="Wait for Connection";
                StatusText.text = Localize.GetLocalizedString("$WaitForConnection"); 

                
                

            }
            else
            {
                StatusText.text = ""; 
            }
            
            
            TimerTextGameObject.SetActive(false);


        }
    }

    

    public void onButtonSwissClassic()
    {
        Debug.Log("Swiss Classic");
        myRadioPlayer.Stop();
        myRadioPlayer.Station.Bitrate = 2;
        myRadioPlayer.Station.Name = "Radio Swiss Classic";
        myRadioPlayer.Station.Url = "http://stream.srg-ssr.ch/m/rsc_de/mp3_128";
        myRadioPlayer.Station.Bitrate = 128;
        myRadioPlayer.Station.ChunkSize = 32;
        myRadioPlayer.Station.BufferSize = 48;
        myRadioPlayer.Play();
        StartCountdown();


    }
    public void onButtonSwissPop()
    {
       Debug.Log("Swiss Pop");
        myRadioPlayer.Stop();
        myRadioPlayer.Station.Bitrate = 2;
        myRadioPlayer.Station.Name = "Radio Swiss Pop";
        myRadioPlayer.Station.Url = "http://stream.srg-ssr.ch/m/rsp/mp3_128";
        myRadioPlayer.Station.Bitrate = 128;
        myRadioPlayer.Station.ChunkSize = 32;
        myRadioPlayer.Station.BufferSize = 48;
        myRadioPlayer.Play();
        StartCountdown();
    }


    public void onButtonSwissJazz()
    {
       Debug.Log("Swiss Jazz");
        myRadioPlayer.Stop();
        myRadioPlayer.Station.Bitrate = 2;
        myRadioPlayer.Station.Name = "Swiss Jazz";
        myRadioPlayer.Station.Url = "http://stream.srg-ssr.ch/m/rsj/mp3_128";
        myRadioPlayer.Station.Bitrate = 128;
        myRadioPlayer.Station.ChunkSize = 32;
        myRadioPlayer.Station.BufferSize = 48;
        myRadioPlayer.Play();
        StartCountdown();
    }

    public void onButtonMusikwelle()
    {
       Debug.Log("Musikwelle");
        myRadioPlayer.Stop();
        myRadioPlayer.Station.Bitrate = 2;
        myRadioPlayer.Station.Name = "Musikwelle";
        myRadioPlayer.Station.Url = "http://stream.srg-ssr.ch/m/drsmw/mp3_128";
        
        myRadioPlayer.Station.Bitrate = 128;
        myRadioPlayer.Station.ChunkSize = 32;
        myRadioPlayer.Station.BufferSize = 48;
        myRadioPlayer.Play();
        StartCountdown();
    }

    public void onButtonSRF1()
    {
       Debug.Log("SRF 1");
        myRadioPlayer.Stop();
        myRadioPlayer.Station.Bitrate = 2;
        myRadioPlayer.Station.Name = "SRF 1";
        myRadioPlayer.Station.Url = "http://stream.srg-ssr.ch/m/regi_zh_sh/mp3_128";
        myRadioPlayer.Station.Bitrate = 128;
        myRadioPlayer.Station.ChunkSize = 32;
        myRadioPlayer.Station.BufferSize = 48;
        myRadioPlayer.Play();
        StartCountdown();
    }

    public void onButtonSRF2()
    {
       Debug.Log("SRF 2");
        myRadioPlayer.Stop();
        myRadioPlayer.Station.Bitrate = 2;
        myRadioPlayer.Station.Name = "SRF 2";
        myRadioPlayer.Station.Url = "http://stream.srg-ssr.ch/m/drs2/mp3_128";
        myRadioPlayer.Station.Bitrate = 128;
        myRadioPlayer.Station.ChunkSize = 32;
        myRadioPlayer.Station.BufferSize = 48;
        myRadioPlayer.Play();
        StartCountdown();
    }
    
    public void onButtonSRF3()
    {
       Debug.Log("SRF 3");
        myRadioPlayer.Stop();
        myRadioPlayer.Station.Bitrate = 2;
        myRadioPlayer.Station.Name = "SRF 3";
        myRadioPlayer.Station.Url = "http://stream.srg-ssr.ch/m/drs3/mp3_128";
        myRadioPlayer.Station.Bitrate = 128;
        myRadioPlayer.Station.ChunkSize = 32;
        myRadioPlayer.Station.BufferSize = 48;
        myRadioPlayer.Play();
        StartCountdown();
    }



    public void onButtonSchlagerparadies()
    {
       Debug.Log("Schlagerparadies");
        myRadioPlayer.Stop();
        myRadioPlayer.Station.Bitrate = 2;
        myRadioPlayer.Station.Name = "Schlagerparadies";
        myRadioPlayer.Station.Url = "http://musik.schlagerparadies.de:30842";
        myRadioPlayer.Station.Bitrate = 128;
        myRadioPlayer.Station.ChunkSize = 32;
        myRadioPlayer.Station.BufferSize = 48;
        myRadioPlayer.Play();
        StartCountdown();
    }




    public void onBackButton()
    {
        myRadioPlayer.Stop();
        shouldPlay = false;
        ReStart();
        //SaveUseDataToFile();

        //myGameController.SwitchPanel(1);    // move back to the starting pannel
    }


    public void StartCountdown()
    {
        HelpText.text = Localize.GetLocalizedString("$Help_ListenRadio");
        BackButtonGameObject.SetActive(true);
        
        CircularTimerObject.SetActive(true);
        instructions.SetActive(false);
        degreesPerSecond = myConfigInfo.radio_swipe_speed_deg_per_second;
        isPlaying = true;
    
        
        myCircularTimer.duration = myConfigInfo.radio_duration_sec;
        myCircularTimer.enabled = true;
        
        myCircularTimer.StartTimer();
        shouldPlay = true;
        
    }

    public void onCounterRunout()
    {
        //onExitButton();
        isPlaying = false;
        
    }


    public void onPlaybackHasStarted()
    {
        //TextMessage.enabled = true; TextMessage.text = Localize.GetLocalizedString("$PasswordWrong"); 
        ErrorText.enabled = true; 
        ErrorText.text = "Playback has started";
        
    }

    public void onPlaybackHasEnded()
    {
        ErrorText.enabled = true; 
        ErrorText.text = "Playback has ended";


    }
    public void onError()
    {
        playBackError = true;
        Debug.Log("PLAY BACK ERROR TRUE");
        ErrorText.enabled = true; 
        ErrorText.text = "Error has happened";
        
    }
    

    public void onExitButtonPressed()
    {
        myGameController.OnButtonExitApp();
        //myGameController.SwitchPanel(8); // switch back to menu panel
    }












 
    public void SaveUseDataToFile()
    {


        string patientID =  PlayerPrefs.GetString("ID","0");        //mySettingPanelScript.patientID;
        string patientKey = PlayerPrefs.GetString("Key","0");   //mySettingPanelScript.patientKey;


        string fileName = "Radio_P" + patientID + "_K" + patientKey;
        var es3File = new ES3File(fileName);
        string tag;
        string time = System.DateTime.UtcNow.ToLocalTime().ToString("dd-MM-yyyy HH:mm:ss");
        tag = time;
        // write Values to the file
        es3File.Save<string>(tag + "_Station", myRadioPlayer.Station.Name);
        es3File.Save<int>(tag + "Speed deg per sec", myConfigInfo.radio_swipe_speed_deg_per_second );
        es3File.Save<float>(tag + "Duration in sec", myCircularTimer.CurrentTime);
        // Sync the file with corresponding file in storage
        es3File.Sync();
        //StartCoroutine(mySyncFileWithServerScript.SyncServer(fileName));       // sync the local file with the SSL file on telerehabilitation.ch
        
        //StartCoroutine(myConfigInfo.)

        myConfigInfo.OnSyncFileWServer(fileName);

        //mySlider.value = 0.5f;
        //myGameController.OnButtonSwitchToPanel1();
    }










}
