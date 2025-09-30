using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DFTGames.Localization;

public class ChangePWScript : MonoBehaviour
{
    
    
    public string password1;
    public string password2;

    public InputField Password1InputField;
    public InputField Password2InputField;
   
  
    public Text TextMessage;


    public GameObject OKButton;
    public GameController myGameController;
    public ConfigInfo myConfigInfo;
    public TimedAction myTimedAction;

    
    // Start is called before the first frame update
    void Start()
    {
        //ErrorTextField.SetActive(false);

        TextMessage.enabled = false; //TextMessage.text = Localize.GetLocalizedString("$DownloadInfo"); 
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnButtonOk()
    {
        bool passwordIsOK = true;
        // check if passwords are identical
        // check if the info is entered
        password1 = Password1InputField.text;
        password2 = Password2InputField.text;


        if (!string.Equals(password1, password2))
        {
            passwordIsOK = false;
        }

        if (password1.Length < 6)
        {
            passwordIsOK = false;
        }

        bool hasUpper = false;
        bool hasLower = false;
        bool hasDigit = false;
        bool hasNum = false;
        foreach (char c in password1)
        {
            if (char.IsDigit(c))
            {
                hasNum = true;
            }

            if (char.IsLower(c))
            {
                hasLower = true;
            }

            if (char.IsUpper(c))
            {
                hasUpper = true;
            }
        }

        if (!(hasNum && hasLower && hasUpper))
        {
            passwordIsOK = false;
        }

        if (passwordIsOK)
        {

            TextMessage.enabled = false;
            PlayerPrefs.SetString("Password",password1);
            myGameController.SwitchPanel(14);
        }
        else
        {
            TextMessage.enabled = true; TextMessage.text = Localize.GetLocalizedString("$PWnotIdentical"); 
           
        }
    }







}
