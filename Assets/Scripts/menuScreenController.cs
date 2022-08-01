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
#if UNITY_WEBGL
     exit.SetActive(false);
     settings.SetActive(false);
#endif
        MobileAds.Initialize(initStatus => { });
    }


    public string Scene = "Level";

    public void LoadScene()
    {
        SceneManager.LoadScene(Scene);
    }

    public void ExitGame()
    {
        Application.Quit();
    }
}
