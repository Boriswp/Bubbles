using System;
using System.Collections;
using System.Collections.Generic;
using GoogleMobileAds.Api;
using UnityEngine.SceneManagement;
using UnityEngine;

public class menuScreenController : AdModule
{
    public GameObject LvlDetails;
    public GameObject Motivation;
    private void Awake()
    {
        Application.targetFrameRate = 60;
        menuButtonController.onOpenLvlScreen += ShowLevelDetails;

#if UNITY_ANDROID || UNITY_IOS
        MobileAds.Initialize(initStatus => { });
#endif

    }

    private void OnDisable()
    {
        menuButtonController.onOpenLvlScreen -= ShowLevelDetails;
    }


    public string ArcadeScene = "Level";
    public string MissionsScene = "Levels";

    public void LoadArcadeScene()
    {
        SceneManager.LoadScene(ArcadeScene);
    }

    public void ShowLevelDetails(int lvl)
    {
        var currLvl  = lvl == -1 ? DataLoader.GetCurrentLvl() : lvl;
        LvlDetails.SetActive(true);
        LvlDetails.GetComponent<menuLvlDetailsController>().SetLvlDetails(currLvl,DataLoader.GetStarsCount(currLvl));
        DataLoader.lvlToload = currLvl;
    }

    
    public void LoadMissionsScene()
    {
        
        var currLife = DataLoader.GetLifeCount();
        if (currLife > 0)
        { 
            DataLoader.setCurrentLifesCount(--currLife);
            SceneManager.LoadScene(MissionsScene); 
        }
        else
        {
            Motivation.SetActive(true);
            LvlDetails.SetActive(false);
        }
    }
}