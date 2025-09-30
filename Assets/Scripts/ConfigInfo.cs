using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.AI;


public class ConfigInfo : MonoBehaviour
{
    public string globalConfFileName;
    public string localConfFileName;
    public bool globalConfFileDoesExist = false;
    public bool localConfFileDoesExist = false;
    public SettingPanelScript mySettingPanelScript;
    public GameController myGameController;
    ES3Cloud cloud;
    public List<string> words       = new List<string>();
    public List<string> sentences   = new List<string>();
    public List<string> questions   = new List<string>();
    public List<string> figures_happy    = new List<string>();
    public List<string> figures_neutral  = new List<string>();
    public List<string> figures_sad = new List<string>();
    public List<string> figures_all = new List<string>();
    public List<string> figuresOnServer = new List<string>();
    public List<string> shuffled_Words       = new List<string>();
    public List<string> shuffled_Sentences   = new List<string>();
    public List<string> shuffled_Questions   = new List<string>();
    public List<string> shuffled_Figures_happy    = new List<string>();
    public List<string> shuffled_Figures_neutral= new List<string>();
    public List<string> shuffled_Figures_sad    = new List<string>();
    public List<string> shuffled_Figures_all    = new List<string>();
    public List<string> morning             = new List<string>();
    public List<string> midday              = new List<string>();
    public List<string> evening             = new List<string>();
    public List<string> defaultProgram       = new List<string>();       // default program (means if not morning, not midday, not evening)

    public bool morningOn = false;
    public bool middayOn = false;
    public bool eveningOn = false;
    public bool MonringMiddayEvningNotificationsOn = true;  // notifications are only enabled if there is a morning, evening and midday on.
    //public bool DefaultNotificationsOn = true;            Not implemented yet.

    public int duration;        // this is the duration of the countdown timer for the recording. Set to zero if no timer is desired.

    public string radio_swipe_mode; // 2 modes: 2D is a simple stereo balance swipe ; 3D is a real 3D sound with a linear movement in front of the head
    public int radio_swipe_speed_deg_per_second; //  (only used in 2D mode) 2d movement from 90deg to -90deg - a speed seeting of 20deg/s will result in a movement duation of 180deg/20 = 9sec
    public float radio_swipe_horizontal_speed_3D; // (only used in 3D mode) 3d movement from 10 to -10 - a speed value of 1.5 will result in a duration of 20/1.5=13.3 sec
    public int radio_duration_sec;
    

    //public bool FigureDownloadCompleted = false; 
    string patientID = "0";

    // Start is called before the first frame update
    void Start()
    {

        radio_swipe_speed_deg_per_second = 12;
        radio_duration_sec = 900;
        radio_swipe_mode = "3D";
        radio_swipe_horizontal_speed_3D = 1.0f;



        cloud = new ES3Cloud("https://www.telerehabilitation.ch/ES3Cloud.php", "03a9cb9ce71d"); // ev. komplexer 
        
        
        //ReadConfData();
        
        // sync the files if needed.            note - it could be that the first run happens with the old data system...
        //StartCoroutine(SyncServer(globalConfFileName));
        // sync the image files with the server
        //StartCoroutine(SyncServer(globalImageFileName));
        //StartCoroutine(DownloadImageFilesFromServer());
    }


   IEnumerator DownloadImageFilesFromServer()
   {
       yield return StartCoroutine(cloud.DownloadFile("FIG_VERSION"));
        if (cloud.isError)
        {
            Debug.Log(cloud.error);
        }
        else
        {
            Debug.Log("Fig Version download sucess");
        }
        
        // read the figure version from file
        var es3File = new ES3File("FIG_VERSION");
        int serverFigureVersion = es3File.Load<int>("version", 1);
        int localFigureVersion = PlayerPrefs.GetInt("LocalVersion", 0);
        Debug.Log("Server Version: " + serverFigureVersion.ToString() + " Local Version: " + localFigureVersion.ToString());
        DirectoryInfo DirInfo = new DirectoryInfo(Application.persistentDataPath);
        // Download all Files
        if (serverFigureVersion > localFigureVersion)
        {
            
            Debug.Log("Delete all Figure Files");
            foreach (var fi in DirInfo.GetFiles("*.jpg"))
            {       
                File.Delete(fi.FullName );
            }

            Debug.Log(" ****** Download Figures  *****");
            figuresOnServer.Clear();
            yield return StartCoroutine(cloud.DownloadFilenames());
            if (cloud.isError)
            {
                Debug.Log(cloud.error);
            }
            else
            {
                foreach (var filename in cloud.filenames)
                {
                    if (filename.IndexOf("Figure_") > -1)
                    {
                        figuresOnServer.Add(filename);
                        // download the figure files
                        yield return StartCoroutine(cloud.DownloadFile(filename));
                    
                    }
                }
                Debug.Log("Figure sync completed");
                // Save the sync info in the the playerSettings
                PlayerPrefs.SetInt("LocalVersion",serverFigureVersion);
            
            }
        }

       // update local file info list
       figures_all.Clear();
       figures_happy.Clear();
       figures_sad.Clear();
       figures_neutral.Clear();

       string Directory = Application.persistentDataPath;
       

       foreach (var fi in DirInfo.GetFiles("Figure_*.jpg"))
       {
           figures_all.Add(fi.Name);
           if (fi.Name.Contains("Figure_Happy"))
                figures_happy.Add(fi.Name);
           if (fi.Name.Contains("Figure_Sad"))
               figures_sad.Add(fi.Name);
           if (fi.Name.Contains("Figure_Neutral"))
               figures_neutral.Add(fi.Name);
       }
        // shuffle the figures
        
        ShuffleListOfStrings(figures_happy, shuffled_Figures_happy);
        ShuffleListOfStrings(figures_neutral, shuffled_Figures_neutral);
        ShuffleListOfStrings(figures_sad, shuffled_Figures_sad);
        ShuffleListOfStrings(figures_all, shuffled_Figures_all);

    }
   
    

    public void Shuffle()
    {
        ShuffleListOfStrings(words,      shuffled_Words);
        ShuffleListOfStrings(sentences,  shuffled_Sentences);
        ShuffleListOfStrings(questions,  shuffled_Questions);
        //ShuffleListOfSprites(figures,   shuffled_Figures);
        ShuffleListOfStrings(figures_happy, shuffled_Figures_happy);
        ShuffleListOfStrings(figures_neutral, shuffled_Figures_neutral);
        ShuffleListOfStrings(figures_sad, shuffled_Figures_sad);
        ShuffleListOfStrings(figures_all, shuffled_Figures_all);
        
    }
    
    public void ShuffleListOfStrings(List<string> _toShuffle, List<string> _shuffled)
    {
        int N;
        int n;
        _shuffled.Clear();
        
        List<string> copyList = new List<string>();
        // make a local copy of the list
        copyList.Clear();
        foreach (var s in _toShuffle)
        {
            copyList.Add(s);
        }

        N = copyList.Count;
        while ( N > 0)
        {
            n = Random.Range(0,N);
            _shuffled.Add(copyList[n] );
            copyList.RemoveAt(n);
            N = copyList.Count;
        }
    }

    void CheckIfFilesExist()
    {
        patientID = PlayerPrefs.GetString("ID", "0");
        globalConfFileName = "CONF_" + patientID;
        localConfFileName = "CONF_Local";



        // check if the CONF_ File exists
        globalConfFileDoesExist = false;
        localConfFileDoesExist = false;



        foreach (string file in System.IO.Directory.GetFiles(Application.persistentDataPath))
        {
            if (Path.GetFileName(file) == globalConfFileName)
            {
                globalConfFileDoesExist = true;
            }

            if (Path.GetFileName(file) == localConfFileName)
            {
                localConfFileDoesExist = true;
            }

        }

    }
    

    public void DeleteLocalConfigFiles()
    {
        CheckIfFilesExist();
        if (globalConfFileDoesExist)
        {
            ES3.DeleteFile(globalConfFileName);
        }
        
        if (localConfFileDoesExist)
        {
            ES3.DeleteFile(localConfFileName);
        }
        
        CheckIfFilesExist();
    }

    public void ReadConfData()
    {
        

        CheckIfFilesExist();
       
        if (globalConfFileDoesExist == false)
        {
            // read the local file
            if (localConfFileDoesExist == false)
            {
                CreateNewLocalConfFile();
            }
            ReadLocalConfFile();

        }
        else
        {
            // Read the data
            ReadGlobalConfFile();
        }

        



        // shuffle the words and sentences (randomized order)
        Shuffle();
    }

    // Update is called once per frame
    void Update()
    {
    }






    void ReadGlobalConfFile()
    {
        var es3File = new ES3File(globalConfFileName);
        
            words = es3File.Load<List<string>>("words");
        sentences = es3File.Load<List<string>>("sentences");

        questions = es3File.Load<List<string>>("questions");


        morning = es3File.Load<List<string>>("morning");
        midday = es3File.Load<List<string>>("midday");
        evening = es3File.Load<List<string>>("evening");
        defaultProgram = es3File.Load<List<string>>("default");

        // check if the requests of morning, midday and evening are enabled.
        morningOn = true;
        middayOn = true;
        eveningOn = true;
        if(morning.Contains("off") || morning.Contains("OFF") || morning.Contains("Off"))
        {
            morningOn = false;
        }
        if(midday.Contains("off") || midday.Contains("OFF") || midday.Contains("Off"))
        {
            middayOn = false;
        }
        if(evening.Contains("off") || evening.Contains("OFF") || evening.Contains("Off"))
        {
            eveningOn = false;
        }

        if (morningOn && middayOn && eveningOn)
        {
            MonringMiddayEvningNotificationsOn = true;
        }
        else
        {
            MonringMiddayEvningNotificationsOn = false;
        }
        
        duration = es3File.Load<int>("duration",15);

        radio_swipe_speed_deg_per_second = es3File.Load<int>("radio_swipe_speed_deg_per_second",20);
        radio_duration_sec = es3File.Load<int>("radio_duration_sec",360);
        radio_swipe_mode = es3File.Load<string>("radio_swipe_mode", "3D");
        radio_swipe_horizontal_speed_3D = es3File.Load<float>("radio_swipe_horizontal_speed_3D", 1.5f);
    }



    void ReadLocalConfFile()
    {
        var es3File = new ES3File(localConfFileName);

        words = es3File.Load<List<string>>("words");
        sentences = es3File.Load<List<string>>("sentences");

        questions = es3File.Load<List<string>>("questions");


        morning = es3File.Load<List<string>>("morning");
        midday = es3File.Load<List<string>>("midday");
        evening = es3File.Load<List<string>>("evening");
        defaultProgram = es3File.Load<List<string>>("default");

        // check if the requests of morning, midday and evening are enabled.
        morningOn = true;
        middayOn = true;
        eveningOn = true;
        if(morning.Contains("off") || morning.Contains("OFF") || morning.Contains("Off"))
        {
            morningOn = false;
        }
        if(midday.Contains("off") || midday.Contains("OFF") || midday.Contains("Off"))
        {
            middayOn = false;
        }
        if(evening.Contains("off") || evening.Contains("OFF") || evening.Contains("Off"))
        {
            eveningOn = false;
        }

        if (morningOn && middayOn && eveningOn)
        {
            MonringMiddayEvningNotificationsOn = true;
        }
        else
        {
            MonringMiddayEvningNotificationsOn = false;
        }
        
        duration = es3File.Load<int>("duration",15);

        radio_swipe_speed_deg_per_second = es3File.Load<int>("radio_swipe_speed_deg_per_second",20);
        radio_duration_sec = es3File.Load<int>("radio_duration_sec",360);
        radio_swipe_mode = es3File.Load<string>("radio_swipe_mode", "3D");
        radio_swipe_horizontal_speed_3D = es3File.Load<float>("radio_swipe_horizontal_speed_3D", 1.5f);
    }

    void CreateNewLocalConfFile()
    {
        // delete all values before adding new values
        words.Clear();
        sentences.Clear();
        questions.Clear();
        morning.Clear();
        midday.Clear();
        evening.Clear();
        defaultProgram.Clear();
        
        // to do - add F, I version....

        if (PlayerPrefs.GetString("Language", "D") == "D")
        {
            words.Add("Segelschiff");
            words.Add("Haus");
            words.Add("Auto");

            sentences.Add("Der Lappen liegt auf dem Eisschrank.");
            sentences.Add("Das will sie am Mittwoch abgeben.");
            sentences.Add("Heute Abend könnte ich es ihm sagen.");
            sentences.Add("Das schwarze Stück Papier befindet sich da oben neben dem Holzstück.");

            sentences.Add("In sieben Stunden wird es soweit sein.");
            sentences.Add("Was sind denn das für Tüten, die da unter dem Tisch stehen?");
            sentences.Add("Sie haben es gerade hochgetragen und jetzt gehen sie wieder runter.");

            sentences.Add("An den Wochenenden bin ich jetzt immer nach Hause gefahren und habe Agnes besucht.");
            sentences.Add("Ich will das eben wegbringen und dann mit Karl was trinken gehen.");
            sentences.Add("Die wird auf dem Platz sein, wo wir sie immer hinlegen.");


            questions.Add("Was haben sie heute gemacht?");
            questions.Add("Wie geht es Ihnen heute?");

        }

        if (PlayerPrefs.GetString("Language", "D") == "E")
        {
            words.Add("Sailboat");
            words.Add("House");
            words.Add("Car");

            sentences.Add("The cloth is lying on the fridge.");
            sentences.Add("She will hand it in on Wednesday.");
            sentences.Add("Tonight I could tell him.");
            sentences.Add("The black sheet of paper is up there beside the piece of timber.");

            sentences.Add("In seven hours the time will have come.");
            sentences.Add("What are the bags standing there under the table?");
            sentences.Add("They have just carried it upstairs and now they are going down again.");
            
            sentences.Add("At the weekends I have always gone home now and seen Agnes.");
            sentences.Add("I just want to take this away and then go for a drink with Karl.");
            sentences.Add("It will be in the place where we always put it.");



            questions.Add("What did you do today?");
            questions.Add("How are you today?");
        }

        if (PlayerPrefs.GetString("Language", "D") == "F")
        {
            words.Add("Voilier");
            words.Add("Maison");
            words.Add("Voiture");

            sentences.Add("Le chiffon est posé sur le réfrigérateur.");
            sentences.Add("Elle le rendra mercredi.");
            sentences.Add("Ce soir, je pourrais lui dire.");
            sentences.Add("La feuille de papier noire est là-haut, à côté du morceau de bois.");

            sentences.Add("Dans sept heures, le moment sera venu.");
            sentences.Add("Que sont les sacs qui se trouvent là sous la table ?");
            sentences.Add("Ils viennent de le porter en haut et maintenant ils redescendent.");
            
            sentences.Add("Le week-end, je suis toujours rentré à la maison et j'ai vu Agnès.");
            sentences.Add("Je veux juste emporter ça et ensuite aller boire un verre avec Karl.");
            sentences.Add("Il sera à l'endroit où nous l'avons toujours mis.");



            questions.Add("Qu'as-tu fait aujourd'hui ?");
            questions.Add("Comment vas-tu aujourd'hui ?");
        }

        morning.Add("on");
        morning.Add("04:00");       // morning periode begin
        morning.Add("10:00");       // morning periode end
        morning.Add("09:15");       // reminder
        morning.Add("06:00-09:00");  // instruction
        morning.Add("VAS");
        //morning.Add("word");
        //morning.Add("sentence");
        morning.Add("sentence");
        morning.Add("sentence");
        //morning.Add("question");
        morning.Add("figure_all");

        midday.Add("on");
        midday.Add("10:00");
        midday.Add("16:00");
        midday.Add("15:15");
        midday.Add("11:00-15:00");
        midday.Add("VAS");
        //midday.Add("word");
        midday.Add("sentence");
        midday.Add("sentence");
        //midday.Add("question");
        midday.Add("figure_all");

        evening.Add("on");
        evening.Add("15:00");
        evening.Add("20:00");
        evening.Add("19:15");
        evening.Add("17.00-19.00");
        evening.Add("VAS");
        //evening.Add("word");
        evening.Add("sentence");
        evening.Add("sentence");
        //evening.Add("sentence");
        //evening.Add("question");
        evening.Add("figure_all");

        defaultProgram.Add("VAS");
        defaultProgram.Add("figure_all");


        var es3File = new ES3File(localConfFileName);

        es3File.Save<List<string>>("words", words);
        es3File.Save<List<string>>("sentences", sentences);
        es3File.Save<List<string>>("questions", questions);

        es3File.Save<List<string>>("morning", morning);
        es3File.Save<List<string>>("midday", midday);
        es3File.Save<List<string>>("evening", evening);
        es3File.Save<List<string>>("default", defaultProgram);


        
        // 

        es3File.Save<int>("duration", 20);                                  // this is the duration of the countdown for the picture description
                                                                            // set to 0 if no countdown timer is required. 
        es3File.Save<int>("radio_swipe_speed_deg_per_second",15); 
        es3File.Save<int>("radio_duration_sec",180);
        es3File.Save<string>("radio_swipe_mode", "3D");
        es3File.Save<float>("radio_swipe_horizontal_speed_3D", 1.5f);
        // Sync the file with corresponding file in storage
        es3File.Sync();
   

    }

    /*
    public void createLocalFigureVersionFile()
    {
        var es3File = new ES3File("FIG_VERSION");
        es3File.Save<int>("version", 0);
        es3File.Sync();
    }

    public void readLocalFigureVersionFile()
    {
        // Sync the local File with the global File
        
    }*/

    public void OnSyncFileWServer(string _f)
    {
        StartCoroutine(SyncServer(_f));
    }
    

    IEnumerator SyncServer(string _filename)
    {
        
        yield return StartCoroutine(cloud.Sync(_filename));
        if (cloud.isError)
            Debug.Log(cloud.error);
        else
            Debug.Log("Snyc Success: " + _filename);
    }

}
