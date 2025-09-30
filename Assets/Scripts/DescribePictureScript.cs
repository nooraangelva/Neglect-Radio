using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine;
using System.Collections;
public class DescribePictureScript : MonoBehaviour
{

    public CircularTimer myCircularTimer;
    public ConfigInfo myConfigInfo;

    public GameObject myButton;
    public GameObject myCircularTimerGameObject;
    public GameObject myInstructionTextWithTimer;
    public GameObject myInstructionTextWithoutTimer;
    public bool lastEnabled = false; 
    // Start is called before the first frame update
    void Start()
    {

        
        
        
    }

    public void ResetLastEnabled()
    {
        lastEnabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (this.enabled && lastEnabled == false)
        {
            // we are becomming active
            if (myConfigInfo.duration == 0)
            {
                // no timer is needed
                myCircularTimer.enabled = false;
                myCircularTimerGameObject.SetActive(false);
                myInstructionTextWithTimer.SetActive(false); 
                myInstructionTextWithoutTimer.SetActive(true);
                myButton.SetActive(true);
            
            }
            else
            {
                // timer is needed
                myCircularTimerGameObject.SetActive(true);
                myCircularTimer.CurrentTime = 0;
                myCircularTimer.duration = myConfigInfo.duration;
                myCircularTimer.StartTimer();
                
                myInstructionTextWithTimer.SetActive(true); 
                myInstructionTextWithoutTimer.SetActive(false);
                myButton.SetActive(false);
                Debug.Log("Timer is SET");
            }
        }

        lastEnabled = this.enabled;
    }
}
