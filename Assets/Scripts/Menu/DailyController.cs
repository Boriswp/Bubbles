using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI.ProceduralImage;

public class DailyController : MonoBehaviour
{
    private int availableReward = 0;
    public GameObject[] Masks;
    public ProceduralImage[] images;
    private Color Active = new Color(1f, 207f / 255f, 85f / 255f);
    private Color Claimed = new Color(148f / 255f, 58f / 255f, 218f / 255f);
    private Color Future = new Color(105f / 255f, 161f / 255f, 244f / 255f);

    void Awake()
    {
        CheckRewards();
    }

    public void CheckRewards()
    {
        Tuple<long, int> lastClaimedTimeAndDay = DataLoader.GetTimeAndDay();

        if (lastClaimedTimeAndDay.Item1 == 0)
        {

            var diff = (DateTime.UtcNow.Ticks - lastClaimedTimeAndDay.Item1) / 10000000;
            Debug.Log(" Last claim was " + diff + " hours ago.");

            int days = (int)(Math.Abs(diff / 3600) / 24);
            if (days == 0)
            {
                SetRewards(true);
                availableReward = 0;
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
              
                return;
            }

            if (days >= 2)
            {
                availableReward = 1;
                Debug.Log(" Prize reset ");
            }
        }
        else
        {
            availableReward = 1; 
        }

        SetRewards(false);
    }

    private void SetRewards(bool excludeActive)
    {
        for (int i = availableReward; availableReward < 7; i++)
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
                DataLoader.SetMoneyBonus(25);
                DataLoader.SetBonusBalls(25);
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
