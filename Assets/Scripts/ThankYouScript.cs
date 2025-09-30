using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;





public class ThankYouScript : MonoBehaviour
{
    public Text timeInstructionMorning;
    public Text timeInstructionMidday;
    public Text timeInstructionEvening;
    public Text timeInstructionRemindersMorning;
    public Text timeInstructionRemindersMidday;
    public Text timeInstructionRemindersEvening;
    public ConfigInfo myConfigInfo;
    public PanelScript myPanelScript;
    public GameObject UhrTextMorning;
    public GameObject UhrTextMidday;
    public GameObject UhrTextEvening;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (myPanelScript.newPanelActivation)
        {
            if (myConfigInfo.morningOn)
            {
                timeInstructionMorning.text = myConfigInfo.morning[4]; // the instruction text is at pos. 4
                timeInstructionRemindersMorning.text = myConfigInfo.morning[3];
                UhrTextMorning.SetActive(true);
            }
            else
            {
                timeInstructionMorning.text = ""; // the instruction text is at pos. 4
                timeInstructionRemindersMorning.text = "";
                UhrTextMorning.SetActive(false);
            }

            if (myConfigInfo.middayOn)
            {
                timeInstructionMidday.text = myConfigInfo.midday[4]; // the instruction text is at pos. 4
                timeInstructionRemindersMidday.text = myConfigInfo.midday[3];
                UhrTextMidday.SetActive(true);
            }
            else
            {
                timeInstructionMidday.text = "";
                timeInstructionRemindersMidday.text = "";
                UhrTextMidday.SetActive(false);
            }
            
            if (myConfigInfo.eveningOn)
            {
                timeInstructionEvening.text = myConfigInfo.evening[4]; // the instruction text is at pos. 4
                timeInstructionRemindersEvening.text = myConfigInfo.evening[3];
                UhrTextEvening.SetActive(true);
            }
            else
            {
                timeInstructionEvening.text = "";
                timeInstructionRemindersEvening.text = "";
                UhrTextEvening.SetActive(false);
            }
            
            

            myPanelScript.newPanelActivation = false; // this makes sure that the code runs only once
        }
    
    }
}
