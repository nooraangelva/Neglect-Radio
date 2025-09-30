using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public enum 
    ItemTypes {Word, Sentence, Image, Question};

public class RecordScript : MonoBehaviour
{

    

    public AudioSource audioSource;
    public string micName;
    public string filename;
    public GameController myGameController;
    public SettingPanelScript mySettingPanelScript;
    public AudioClip myAudioClip;
    public AudioClip shortAudioClip;
    public bool recording = false;
    public bool done = false;
    public bool returnHome = false;
    public float recordStartTime;
    public float recordStopTime;
    public float recordDuration;
    public float recordStartPlay;
    public WavSyncData mySpeakWordSyncData;
    public ItemTypes myItemType;
    public ConfigInfo myConfigInfo;
    public Text myQuestion;
    public RawImage m_Image;

    public Texture m_Texture;
    public TimedAction myTimedAction;
    public int indexWords;
    public int indexSentences;
    public int indexQuestions;
    public int indexFiguresAll;
    public int indexFiguresHappy;
    public int indexFiguresNeutral;
    public int indexFiguresSad;

    public Texture defaultTexture;
    public string identifier;   // this string is added to the filename 
    
    private int nrObjectsTotal; 
    private int nrObject;

    private UnityWebRequest uwr;
    
    // Start is called before the first frame update
    void Start()
    {




        audioSource = GetComponent<AudioSource>();
        string[] name = new string[10];
        int i = 0;
        foreach (var device in Microphone.devices)
        {

            Debug.Log("Name: " + device);
            name[i] = device;
            i++;
        }
        micName = name[0];
        indexWords = 0;
        indexSentences = 0;
        indexQuestions = 0;
        indexFiguresAll = 0;
        indexFiguresHappy = 0;
        indexFiguresNeutral = 0;
        indexFiguresSad = 0;
    }

    // Update is called once per frame

    public string getIdentifierSniped(string s)
    {
        // returns a substring as identifier
        int l;
        l = s.Length;
        if (l > 15)
        {
            // return a substring
            return s.Substring(0, 15);
        }
        else
        {
            // is s is shorter than 15, return s
            return s;
        }
    }
    
    
    void Update()
    {



        if (recording == false)
        {
            if (done == false)
            { 


                // show the right question
                if (myItemType == ItemTypes.Word)
                {
                    
                    // select a random word
                    nrObjectsTotal = myConfigInfo.shuffled_Words.Count;
                    indexWords++;
                    if (indexWords >= nrObjectsTotal)
                        indexWords = 0; 
                    myQuestion.text = myConfigInfo.shuffled_Words[indexWords];
                    identifier = getIdentifierSniped(myQuestion.text);
                }

                if (myItemType == ItemTypes.Sentence)
                {
                    // select a random Sentence
                    nrObjectsTotal = myConfigInfo.shuffled_Sentences.Count;
                    indexSentences++;
                    if (indexSentences >= nrObjectsTotal)
                        indexSentences = 0;
                    myQuestion.text = myConfigInfo.shuffled_Sentences[indexSentences];
                    identifier = getIdentifierSniped(myQuestion.text);
                }

                if (myItemType == ItemTypes.Question)
                {
                    // select a random Question
                    nrObjectsTotal = myConfigInfo.shuffled_Questions.Count;
                    indexQuestions++;
                    if (indexQuestions >= nrObjectsTotal)
                        indexQuestions = 0;
                    myQuestion.text = myConfigInfo.shuffled_Questions[indexQuestions];
                    identifier = getIdentifierSniped(myQuestion.text);
                }

                // show the right figure
                if (myItemType == ItemTypes.Image)
                {
                    // check what figure we should show - all, happy, neutral or sad
                    if (myTimedAction.taskList[myTimedAction.currentTaskNr] == "figure_all")
                    {
                        nrObjectsTotal = myConfigInfo.shuffled_Figures_all.Count;
                        indexFiguresAll++;
                        if (indexFiguresAll >= nrObjectsTotal)
                            indexFiguresAll = 0;
                        if (myConfigInfo.shuffled_Figures_all.Count > 0)
                        {
                            filename = myConfigInfo.shuffled_Figures_all[indexFiguresAll];
                            identifier = Path.GetFileNameWithoutExtension(filename).Substring(7);
                        }
                        else
                        {
                            identifier = "default";
                        }
                        StartCoroutine(SetImage(filename));  
                    }
                    
                    if (myTimedAction.taskList[myTimedAction.currentTaskNr] == "figure_happy")
                    {
                        nrObjectsTotal = myConfigInfo.shuffled_Figures_happy.Count;
                        indexFiguresHappy++;
                        if (indexFiguresHappy >= nrObjectsTotal)
                            indexFiguresHappy = 0;
                        if (myConfigInfo.shuffled_Figures_happy.Count > 0)
                        {
                            filename = myConfigInfo.shuffled_Figures_happy[indexFiguresHappy];
                            identifier = Path.GetFileNameWithoutExtension(filename).Substring(7);
                        }
                        else
                        {
                            identifier = "default";
                        }
                        StartCoroutine(SetImage(filename));
                    }
                    
                    if (myTimedAction.taskList[myTimedAction.currentTaskNr] == "figure_neutral")
                    {
                        nrObjectsTotal = myConfigInfo.shuffled_Figures_neutral.Count;
                        indexFiguresNeutral++;
                        if (indexFiguresNeutral >= nrObjectsTotal)
                            indexFiguresNeutral = 0;
                        if (myConfigInfo.shuffled_Figures_neutral.Count > 0)
                        {
                            filename = myConfigInfo.shuffled_Figures_neutral[indexFiguresNeutral];
                            identifier = Path.GetFileNameWithoutExtension(filename).Substring(7);
                        }
                        else
                        {
                            identifier = "default";
                        }
                        StartCoroutine(SetImage(filename));
                    }
                    
                    if (myTimedAction.taskList[myTimedAction.currentTaskNr] == "figure_sad")
                    {
                        nrObjectsTotal = myConfigInfo.shuffled_Figures_sad.Count;
                        indexFiguresSad++;
                        if (indexFiguresSad >= nrObjectsTotal)
                            indexFiguresSad = 0;
                        if (myConfigInfo.shuffled_Figures_sad.Count > 0)
                        {
                            filename = myConfigInfo.shuffled_Figures_sad[indexFiguresSad];
                            identifier = Path.GetFileNameWithoutExtension(filename).Substring(7);
                        }
                        else
                        {
                            identifier = "default";
                        }
                        StartCoroutine(SetImage(filename));
                    }

                        
                        
                    
                }

                // start recording
                StartRecord();
                Debug.Log("Start Record");
                    
            }

         }
    }



    System.Collections.IEnumerator SetImage(string filename)
    {
        
        string fileNameAndPath = "file://" + Path.Combine(Application.persistentDataPath,filename);
        using (uwr = UnityWebRequestTexture.GetTexture(fileNameAndPath))
        {
            yield return uwr.SendWebRequest();
            if (uwr.isNetworkError || uwr.isHttpError)
            {
                Debug.Log(uwr.error);
                m_Image.texture = defaultTexture;
            }
            else
            {
                //gameObject.GetComponent<RawImage>().texture = DownloadHandlerTexture.GetContent(uwr);
                m_Texture = DownloadHandlerTexture.GetContent(uwr);
                m_Image.texture = m_Texture;
            }
        }
    }
    
    
    public void StartRecord()
    {
        //audioSource.clip = new AudioClip();
        Debug.Log("Start REcording");
        audioSource.clip = Microphone.Start(micName, false, 300 ,44100);    // the recording length is limited to 5 Min.
        recordStartTime = Time.time;
        recording = true;
    }

    public void StopRecord()
    {
        Debug.Log("Stop REcording");
        Microphone.End(micName);
        recording = false;
    }



    public AudioClip MakeSubclip(AudioClip clip, float start, float stop)
    {
        /* Create a new audio clip */
        int frequency = clip.frequency;
        float timeLength = stop - start;
        int samplesLength = (int)(frequency * timeLength);
        AudioClip newClip = AudioClip.Create(clip.name + "-sub", samplesLength, 1, frequency, false);
        /* Create a temporary buffer for the samples */
        float[] data = new float[samplesLength];
        /* Get the data from the original clip */
        clip.GetData(data, (int)(frequency * start));
        /* Transfer the data to the new clip */
        newClip.SetData(data, 0);
        /* Return the sub clip */
        return newClip;
    }


    

    public void OnDone()
    {
        done = true;
        StopRecord();
        recordStopTime = Time.time;
        recordDuration = recordStopTime - recordStartTime;

        myAudioClip = audioSource.clip;
        
        Debug.Log("Record Duration = " + recordDuration);
        Debug.Log(myAudioClip.length);
        Debug.Log("Save Data to file");


        // Kürze das Audio File
        shortAudioClip = MakeSubclip(myAudioClip, 0, recordDuration);
        Debug.Log(shortAudioClip.length);


        string patientID =  PlayerPrefs.GetString("ID","0");        //mySettingPanelScript.patientID;
        string patientKey = PlayerPrefs.GetString("Key","0");   //mySettingPanelScript.patientKey;

        string time = System.DateTime.UtcNow.ToLocalTime().ToString("dd-MM-yyyy HH-mm-ss");
        string fileName = myItemType.ToString() + "_P" + patientID+ "_K" + patientKey +"_" + identifier + "_" + time + ".wav";


        SavWav.Save(fileName, shortAudioClip);              // save the wav file locally
        
        Debug.Log(fileName);
        mySpeakWordSyncData.SyncFile(fileName);             // to do sync all files that are here


        done = false;
     
        myGameController.SwitchPanel(1);

    }

    public void OnSaveAudioFile()
    {
        
    }





    int _sampleWindow = 128;

    //get data from microphone into audioclip
    float LevelMax()
    {
        float levelMax = 0;
        float[] waveData = new float[_sampleWindow];
        int micPosition = Microphone.GetPosition(null) - (_sampleWindow + 1); // null means the first microphone
        if (micPosition < 0) return 0;
        myAudioClip.GetData(waveData, micPosition);
        // Getting a peak on the last 128 samples
        for (int i = 0; i < _sampleWindow; i++)
        {
            float wavePeak = waveData[i] * waveData[i];
            if (levelMax < wavePeak)
            {
                levelMax = wavePeak;
            }
        }
        return levelMax;
    }

    
    
    
}
