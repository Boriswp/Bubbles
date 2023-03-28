using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.ProceduralImage;

public class DailyController : MonoBehaviour
{
    private int availableReward = 0;
    public GameObject[] Masks;
    public ProceduralImage[] images;
    public Button collectButton;
    private Color Active = new Color(1f, 207f / 255f, 85f / 255f);
    private Color Claimed = new Color(148f / 255f, 58f / 255f, 218f / 255f);
    private Color Future = new Color(105f / 255f, 161f / 255f, 244f / 255f);

    void OnEnable()
    {
        CheckRewards();
    }

    public void CheckRewards()
    {
        Tuple<long, int> lastClaimedTimeAndDay = DataLoader.GetTimeAndDayForDaily();

        var diff = (DateTime.UtcNow.Ticks - lastClaimedTimeAndDay.Item1) / 10000000;

        int days = (int)Math.Abs(diff / 3600 / 24);
        Debug.Log(" Last claim was " + days + " days ago.");
        if (days == 0)
        {
            availableReward = lastClaimedTimeAndDay.Item2;
            SetRewards(true);
            collectButton.interactable = false;
            return;
        }

        if (days >= 1 && days < 2)
        {
            if (lastClaimedTimeAndDay.Item2 == 7)
            {
                availableReward = 1;
            }
            else
            {
                availableReward = lastClaimedTimeAndDay.Item2 + 1;
            }

            Debug.Log(" Player can claim prize " + availableReward);
            SetRewards(false);
            return;
        }

        if (days >= 2)
        {
            availableReward = 1;
            Debug.Log(" Prize reset ");
        }

        SetRewards(false);
        collectButton.interactable = true;
    }

    private void SetRewards(bool excludeActive)
    {

        for (int i = availableReward; i < 7; i++)
        {
            Masks[i].SetActive(false);
            images[i].color = Future;
        }

        for (int i = 0; i < availableReward; i++)
        {
            Masks[i].SetActive(true);
            images[i].color = Claimed;
        }

        if (excludeActive) return;
        Masks[availableReward - 1].SetActive(false);
        images[availableReward - 1].color = Active;
    }



    public void GetReward()
    {
        switch (availableReward)
        {
            case 1:
                DataLoader.SetMoneyBonus(25);
                DataLoader.SetBonusBalls(25);
                break;
            case 2:
                DataLoader.IncreaseBombsCount(7);
                break;
            case 3:
                DataLoader.SetMoneyBonus(50);
                DataLoader.SetBonusBalls(50);
                break;
            case 4:
                DataLoader.IncreaseLightsCount(5);
                break;
            case 5:
                DataLoader.SetMoneyBonus(100);
                break;
            case 6:
                DataLoader.IncreaseFireBallCount(3);
                break;
            case 7:
                DataLoader.SetInvulnerable(3600);
                break;
        }
        DataLoader.SaveTimeAndDay(DateTime.UtcNow.Ticks, availableReward);
        gameObject.SetActive(false);
    }
}
