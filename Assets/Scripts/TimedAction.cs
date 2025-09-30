using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimedAction : MonoBehaviour
{
	public Text m_InfoText;
    public ConfigInfo myConfigInfo;
    public GameController myGameController;
    public NotifyMobile myNotifyMobile; 
    public Text m_NrVAS;
    public Text m_NrWord;
    public Text m_NrImage;
    public Text m_NrQuestions;
    public Text m_NrSentence;
    public Text m_NrRadio;
    public List<string> taskList       = new List<string>();
    public GameObject m_VAS;
    public GameObject m_Word;
    public GameObject m_Sentence;
    public GameObject m_Image;
    public GameObject m_Question;
    public GameObject m_Radio;
    

    public string infoString;
    public bool actionOngoing = false; 
    public bool lastActionOngoing = false;
    public int currentTaskNr = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // Hierhin muss eine Task machine kommen. 
        if (actionOngoing)
        {
            if (lastActionOngoing == false)
            {
                // we are new here
                myConfigInfo.Shuffle(); // shuffle the order of the stimulation material (random)
            }





            if (myGameController.currentPannelNr == 1)
            {

                // this means that the task has been completed and we can start a new one
                currentTaskNr++;
                if (currentTaskNr < taskList.Count)
                {
                    // start Task
                    startNewPanel();
                }
                else
                {
                    // task list completed
                    // move to the thank you panel
                    myGameController.SwitchPanel(9);
                    actionOngoing = false;
                }
            }
        
        }
        lastActionOngoing = actionOngoing;
    }

    public void StartTimedAction()
    {
        // inform the pateint about what he has to do and create the task list;
        //CreateTaskList();




        myGameController.SwitchPanel(8);
        int nrObjectsTotal;

        int nrVAS = 0;
        int nrWord = 0;
        int nrSentence = 0;
        int nrImage = 0;
        int nrQuestion = 0;
        int nrRadio = 0;
        
        taskList.Clear();

        Debug.Log("Hello from create task lisk");

       
        m_InfoText.text = "Morning Program";
        // create task list
        nrObjectsTotal = 1;

        nrRadio++; 
        taskList.Add("radio");
    }

    public void OnStartButton()
    {
        StartTimedAction();
        actionOngoing = true;
        currentTaskNr = 0;
        startNewPanel();



    }

    void startNewPanel()
    {
        switch (taskList[currentTaskNr])
        {
                case "VAS":
                    myGameController.SwitchPanel(2);
                    break;
                case "word":
                    myGameController.SwitchPanel(3);
                    break;
                case "sentence":
                    myGameController.SwitchPanel(5);
                    break;
                case "figure_all":
                case "figure_sad":
                case "figure_happy":
                case "figure_neutral":
                    myGameController.SwitchPanel(6);
                    break;
                case "question":
                    myGameController.SwitchPanel(7);
                    break;
                case "radio":
                    myGameController.SwitchPanel(18);
                    break;

        }
    }

    public void CreateTaskList()
    {


        myGameController.SwitchPanel(8);
        int nrObjectsTotal;

        int nrVAS = 0;
        int nrWord = 0;
        int nrSentence = 0;
        int nrImage = 0;
        int nrQuestion = 0;
        int nrRadio = 0;
        
        taskList.Clear();

        Debug.Log("Hello from create task lisk");

        if (myConfigInfo.morningOn && isMorning())
        {
            m_InfoText.text = "Morning Program";
            // create task list
            nrObjectsTotal = myConfigInfo.morning.Count;
            
            for (int i = 0; i < nrObjectsTotal; i++)
            {
                switch (myConfigInfo.morning[i])
                {
                    case "VAS":
                        nrVAS++; 
                        taskList.Add("VAS");
                        break;
                    case "word":
                        nrWord++; 
                        taskList.Add("word");
                        break;
                    case "sentence":
                        nrSentence++; 
                        taskList.Add("sentence");
                        break;
                    case "figure_all":
                        nrImage++; 
                        taskList.Add("figure_all");
                        break;
                    case "figure_sad":
                        nrImage++; 
                        taskList.Add("figure_sad");
                        break;
                    case "figure_neutral":
                        nrImage++; 
                        taskList.Add("figure_neutral");
                        break;
                    case "figure_happy":
                        nrImage++; 
                        taskList.Add("figure_happy");
                        break;
                    case "question":
                        nrQuestion++; 
                        taskList.Add("question");
                        break;
                    case "radio":
                        nrRadio++; 
                        taskList.Add("radio");
                        break;

                }
            }
        }
        else if(myConfigInfo.middayOn && isMidday() )
        {
            m_InfoText.text = "Midday Program";
            // create task list
            nrObjectsTotal = myConfigInfo.midday.Count;
            for (int i = 0; i < nrObjectsTotal; i++)
            {
                switch (myConfigInfo.midday[i])
                {
                    case "VAS":
                        nrVAS++; 
                        taskList.Add("VAS");
                        break;
                    case "word":
                        nrWord++; 
                        taskList.Add("word");
                        break;
                    case "sentence":
                        nrSentence++; 
                        taskList.Add("sentence");
                        break;
                    case "figure_all":
                        nrImage++; 
                        taskList.Add("figure_all");
                        break;
                    case "figure_sad":
                        nrImage++; 
                        taskList.Add("figure_sad");
                        break;
                    case "figure_neutral":
                        nrImage++; 
                        taskList.Add("figure_neutral");
                        break;
                    case "figure_happy":
                        nrImage++; 
                        taskList.Add("figure_happy");
                        break;
                    case "question":
                        nrQuestion++; 
                        taskList.Add("question");
                        break;
                    case "radio":
                        nrRadio++; 
                        taskList.Add("radio");
                        break;
                }
            }

        }
        else if(myConfigInfo.eveningOn && isEvening() )
        {
            m_InfoText.text = "Evening Program";
            // create task list
            nrObjectsTotal = myConfigInfo.evening.Count;
            for (int i = 0; i < nrObjectsTotal; i++)
            {
                switch (myConfigInfo.evening[i])
                {
                    case "VAS":
                        //nrVAS++; 
                        //taskList.Add("VAS");

                        nrRadio++; 
                        taskList.Add("radio");

                        break;
                    case "word":
                        nrWord++; 
                        taskList.Add("word");
                        break;
                    case "sentence":
                        nrSentence++; 
                        taskList.Add("sentence");
                        break;
                    case "figure_all":
                        nrImage++; 
                        taskList.Add("figure_all");
                        break;
                    case "figure_sad":
                        nrImage++; 
                        taskList.Add("figure_sad");
                        break;
                    case "figure_neutral":
                        nrImage++; 
                        taskList.Add("figure_neutral");
                        break;
                    case "figure_happy":
                        nrImage++; 
                        taskList.Add("figure_happy");
                        break;
                    case "question":
                        nrQuestion++; 
                        taskList.Add("question");
                        break;
                    case "radio":
                        nrRadio++; 
                        taskList.Add("radio");
                        break;
                }
            }

        }
        else
        {
            m_InfoText.text = "Default Pogram";
            Debug.Log("Default Program");
            // create task list
            nrObjectsTotal = myConfigInfo.defaultProgram.Count;
            for (int i = 0; i < nrObjectsTotal; i++)
            {
                switch (myConfigInfo.defaultProgram[i])
                {
                    case "VAS":
                        nrVAS++; 
                        taskList.Add("VAS");
                        break;
                    case "word":
                        nrWord++; 
                        taskList.Add("word");
                        break;
                    case "sentence":
                        nrSentence++; 
                        taskList.Add("sentence");
                        break;
                    case "figure_all":
                        nrImage++; 
                        taskList.Add("figure_all");
                        break;
                    case "figure_sad":
                        nrImage++; 
                        taskList.Add("figure_sad");
                        break;
                    case "figure_neutral":
                        nrImage++; 
                        taskList.Add("figure_neutral");
                        break;
                    case "figure_happy":
                        nrImage++; 
                        taskList.Add("figure_happy");
                        break;
                    case "question":
                        nrQuestion++; 
                        taskList.Add("question");
                        break;
                    case "radio":
                        nrRadio++; 
                        taskList.Add("radio");
                        break;
                }
            }
  
        }


        m_NrVAS.text        = nrVAS.ToString() + "x";
        m_NrWord.text       = nrWord.ToString()+ "x";
        m_NrImage.text      = nrImage.ToString()+ "x";
        m_NrQuestions.text  = nrQuestion.ToString()+ "x";
        m_NrSentence.text   = nrSentence.ToString()+ "x";
        m_NrRadio.text = nrRadio.ToString() + "x";

        m_VAS.SetActive(nrVAS != 0);
        m_Image.SetActive(nrImage != 0); // disable the line if the nr. of images is equal to zero
        m_Word.SetActive(nrWord != 0);
        m_Sentence.SetActive(nrSentence != 0);
        m_Image.SetActive(nrImage != 0);
        m_Question.SetActive(nrQuestion != 0);
        m_Radio.SetActive(nrRadio != 0);

    }

    public void OnDone()
    {
        myGameController.SwitchPanel(1);
    }


    bool isMorning()
    {
        int hour = System.DateTime.Now.Hour;
        int min  = System.DateTime.Now.Minute;

        string startString = myConfigInfo.morning[1];
        string stopString  = myConfigInfo.morning[2];

        int currentTimeInMin    = hour*60 + min;
        int startTimeInMin      = getMin(startString);
        int stopTimeInMin       = getMin(stopString);

        infoString = currentTimeInMin.ToString() + " start: " + startTimeInMin.ToString() + " stop: " + stopTimeInMin.ToString();
        if (currentTimeInMin > startTimeInMin && currentTimeInMin <= stopTimeInMin)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    bool isMidday()
    {
        int hour = System.DateTime.Now.Hour;
        int min  = System.DateTime.Now.Minute;

        string startString = myConfigInfo.midday[1];
        string stopString  = myConfigInfo.midday[2];

        int currentTimeInMin    = hour*60 + min;
        int startTimeInMin      = getMin(startString);
        int stopTimeInMin       = getMin(stopString);

        infoString = currentTimeInMin.ToString() + " start: " + startTimeInMin.ToString() + " stop: " + stopTimeInMin.ToString();
        if (currentTimeInMin > startTimeInMin && currentTimeInMin <= stopTimeInMin)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEvening()
    {
        int hour = System.DateTime.Now.Hour;
        int min  = System.DateTime.Now.Minute;

        string startString = myConfigInfo.evening[1];
        string stopString  = myConfigInfo.evening[2];

        int currentTimeInMin    = hour*60 + min;
        int startTimeInMin      = getMin(startString);
        int stopTimeInMin       = getMin(stopString);

        infoString = currentTimeInMin.ToString() + " start: " + startTimeInMin.ToString() + " stop: " + stopTimeInMin.ToString();
        if (currentTimeInMin > startTimeInMin && currentTimeInMin <= stopTimeInMin)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    int getMin(string s)
    {
        // get the minutes from a string with the format "04:00"
        Debug.Log(s);
        string[] substrings = s.Split(':'); 
        int h = int.Parse(substrings[0]);
        int m = int.Parse(substrings[1]);
        return h*60 + m;
    }






}
