using System.Collections;
using System.Collections.Generic;
using GoogleMobileAds.Api;
using UnityEngine.SceneManagement;
using UnityEngine;

public class menuScreenController : AdModule
{
    public GameObject exit;
    public GameObject settings;

    private void Awake()
    {
        Application.targetFrameRate = 60;
        MobileAds.Initialize(initStatus => { });
        var profileData = Helpers.ReadProfileDataFromJson();
    }


    public string ArcadeScene = "Level";
    public string MissionsScene = "Levels";

    public void LoadArcadeScene()
    {
        SceneManager.LoadScene(ArcadeScene);
    }

    public void LoadMissionsScene()
    {
        SceneManager.LoadScene(MissionsScene);
    }
    
}
