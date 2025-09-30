using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if UNITY_IOS
using Unity.Notifications.iOS;
#endif

#if UNITY_ANDROID
using Unity.Notifications.Android;
#endif

using System;

public class NotifyMobile : MonoBehaviour
{
    public ConfigInfo myConfigInfo;
    // Start is called before the first frame update
    
    #if UNITY_ANDROID
    
    public AndroidNotificationChannel channel;
    private const int notificationMorning =1001;
    private const int notificationMidday  = 2001;
    private const int notificationEvening  = 3000;

    #endif
    void Start()
    {
        
#if UNITY_ANDROID
        var channel = new AndroidNotificationChannel()
        {
            Id = "UniBernSpeech",
            Name = "SpechhCannel",
            Importance = Importance.Default,
            Description = "Generic notifications",
        };
        
        AndroidNotificationCenter.CancelAllNotifications();
        AndroidNotificationCenter.RegisterNotificationChannel(channel);
        
#endif


        
        // schedule all notifications that are needed
        ScheduleMorningNotification();
        ScheduleMiddayNotification();
        ScheduleEveningNotification();
    }


    public void ScheduleNotificationWithOffset(int hours, int minutes, int daysOffset, int notificationID)  // with days offset we can shedule a notification to be displayed tomorrow for the first time
    {
#if UNITY_ANDROID
        var notification = new AndroidNotification();
        var now = new System.DateTime();
        var ReminderTime = new System.DateTime();

        
        now = System.DateTime.Now;
        ReminderTime = new DateTime(now.Year, now.Month, now.Day + daysOffset, hours,
            minutes, 0);

        Debug.Log("New Notifications are Scheduled starting by (Repeat every day) ************");
        Debug.Log(ReminderTime);
   
        notification.Title = "Speech App - Erinnerung (Day0)";
        notification.Text =  "Bitte Vergessen Sie nicht ihre Sprache Aufzuzeichnen";
        notification.FireTime = ReminderTime;
        notification.RepeatInterval = TimeSpan.FromDays(1);
        AndroidNotificationCenter.SendNotificationWithExplicitID(notification, "UniBernSpeech",notificationID);
#endif
    }
    
    public void ScheduleMorningNotification()
    {
        
#if UNITY_ANDROID
        ScheduleNotificationWithOffset(getHour(myConfigInfo.morning[3]), getMin(myConfigInfo.morning[3]) , 0 ,notificationMorning);
#endif



#if UNITY_IOS
        var calendarTriggerMorning = new iOSNotificationCalendarTrigger()
        {
            Hour = getHour(myConfigInfo.morning[3]),
            Minute = getMin(myConfigInfo.morning[3]),
            Repeats = true
        };

        Debug.Log(getHour(myConfigInfo.morning[3]));
        Debug.Log(getMin(myConfigInfo.morning[3]));


        var notificationCalendarMorning = new iOSNotification()
        {
            // You can specify a custom identifier which can be used to manage the notification later.
            // If you don't provide one, a unique string will be generated automatically.
            Identifier = "_notification_Morning",
            Title = "Speech App - Erinnerung",
            Body = "Scheduled at: " + DateTime.Now.ToShortDateString(),
            Subtitle = "Bitte vergessen sie nicht ihre Sprache Aufzuzeichnen",
            ShowInForeground = true,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = calendarTriggerMorning,
        };
        iOSNotificationCenter.ScheduleNotification(notificationCalendarMorning);
#endif
    }

    public void UnScheduleMorningNotification()
    {
#if UNITY_IOS

        iOSNotificationCenter.RemoveScheduledNotification("_notification_Morning");
#endif
#if UNITY_ANDROID
        AndroidNotificationCenter.CancelNotification(notificationMorning);         // todays notification can be unscheduled
        // reschedule the notification starting tomorrow
        ScheduleNotificationWithOffset(getHour(myConfigInfo.morning[3]), getMin(myConfigInfo.morning[3]) , 1 ,notificationMorning);
#endif
    }

    public void ScheduleMiddayNotification()
    {
#if UNITY_ANDROID
        ScheduleNotificationWithOffset(getHour(myConfigInfo.midday[3]), getMin(myConfigInfo.midday[3]) , 0 ,notificationMidday);
#endif
        
        
        
#if UNITY_IOS

        var calendarTriggerMidday = new iOSNotificationCalendarTrigger()
        {
            Hour = getHour(myConfigInfo.midday[3]),
            Minute = getMin(myConfigInfo.midday[3]),
            Repeats = true
        };

        var notificationCalendarMidday = new iOSNotification()
        {
            // You can specify a custom identifier which can be used to manage the notification later.
            // If you don't provide one, a unique string will be generated automatically.
            Identifier = "_notification_Midday",
            Title = "Speech App - Erinnerung",
            Body = "Scheduled at: " + DateTime.Now.ToShortDateString(),
            Subtitle = "Bitte vergessen sie nicht ihre Sprache Aufzuzeichnen",
            ShowInForeground = true,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = calendarTriggerMidday,
        };
        iOSNotificationCenter.ScheduleNotification(notificationCalendarMidday);
#endif
    }

    public void UnScheduleMiddayNotification()
    {
#if UNITY_IOS
        iOSNotificationCenter.RemoveScheduledNotification("_notification_Midday");
#endif
#if UNITY_ANDROID
        AndroidNotificationCenter.CancelNotification(notificationMidday);         // todays notification can be unscheduled
        // reschedule the notification starting tomorrow
        ScheduleNotificationWithOffset(getHour(myConfigInfo.midday[3]), getMin(myConfigInfo.midday[3]) , 1 ,notificationMidday);
#endif
        
    }


    public void ScheduleEveningNotification()
    {
        
#if UNITY_ANDROID
        ScheduleNotificationWithOffset(getHour(myConfigInfo.evening[3]), getMin(myConfigInfo.evening[3]) , 0 ,notificationEvening);
#endif
        
        
#if UNITY_IOS
        var calendarTriggerEvening = new iOSNotificationCalendarTrigger()
        {
            Hour = getHour(myConfigInfo.evening[3]),
            Minute = getMin(myConfigInfo.evening[3]),
            Repeats = true
        };

        var notificationCalendarEvening = new iOSNotification()
        {
            // You can specify a custom identifier which can be used to manage the notification later.
            // If you don't provide one, a unique string will be generated automatically.
            Identifier = "_notification_Evening",
            Title = "Speech App - Erinnerung",
            Body = "Scheduled at: " + DateTime.Now.ToShortDateString(),
            Subtitle = "Bitte vergessen sie nicht ihre Sprache Aufzuzeichnen",
            ShowInForeground = true,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = calendarTriggerEvening,
        };
        iOSNotificationCenter.ScheduleNotification(notificationCalendarEvening);
#endif
    }


    public void UnScheduleEveningNotification()
    {
#if UNITY_IOS
        iOSNotificationCenter.RemoveScheduledNotification("_notification_Evening");
#endif
#if UNITY_ANDROID
        AndroidNotificationCenter.CancelNotification(notificationEvening);         // todays notification can be unscheduled
        // reschedule the notification starting tomorrow
        ScheduleNotificationWithOffset(getHour(myConfigInfo.evening[3]), getMin(myConfigInfo.evening[3]) , 1 ,notificationEvening);
#endif
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    int getMinSinceMidnight(string s)
    {
        // get the minutes from a string with the format "04:00"
        string[] substrings = s.Split(':');
        int h = int.Parse(substrings[0]);
        int m = int.Parse(substrings[1]);
        return h * 60 + m;
    }

    int getMin(string s)
    {
        // get the minutes from a string with the format "04:00"
        string[] substrings = s.Split(':');
        int h = int.Parse(substrings[0]);
        int m = int.Parse(substrings[1]);
        return m;
    }

    int getHour(string s)
    {
        // get the minutes from a string with the format "04:00"
        string[] substrings = s.Split(':');
        int h = int.Parse(substrings[0]);
        int m = int.Parse(substrings[1]);
        return h;
    }

}



