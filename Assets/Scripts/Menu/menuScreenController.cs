using GoogleMobileAds.Api;
using UnityEngine.SceneManagement;
using UnityEngine;
using System;

public class menuScreenController : MonoBehaviour
{
    public GameObject LvlDetails;
    public GameObject Motivation;
    public GameObject DailyReward;
    public delegate void OnOpenLvlScreen(int Lvl);
    public static OnOpenLvlScreen onOpenLvlScreen;

    private void Awake()
    {

        onOpenLvlScreen += ShowLevelDetails;

        if ((DateTime.UtcNow.Ticks - DataLoader.GetTimeAndDayForDaily().Item1) / 10000000 / 3600 / 24 > 0)
        {
            DailyReward.SetActive(true);
        }

    }

    private void OnDisable()
    {
        onOpenLvlScreen -= ShowLevelDetails;
    }


    public string ArcadeScene = "Level";
    public string MissionsScene = "Levels";

    public void LoadArcadeScene()
    {
        SceneManager.LoadScene(ArcadeScene);
    }

    public void ShowLevelDetails(int lvl)
    {
        var currLvl = lvl == -1 ? DataLoader.GetCurrentLvl() : lvl;
        LvlDetails.SetActive(true);
        LvlDetails.GetComponent<menuLvlDetailsController>().SetLvlDetails(currLvl, DataLoader.GetStarsCount(currLvl), DataLoader.GetBonusBallsCount());
        DataLoader.lvlToload = currLvl;
    }


    public void LoadMissionsScene()
    {
        if (DataLoader.GetInvulnerableTime() > 0)
        {
            SceneManager.LoadScene(MissionsScene);
            return;
        }
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

    public void playButtonSound()
    {
        SoundController.soundEvent.Invoke(SoundEvent.BUTTONSOUND);
    }
}