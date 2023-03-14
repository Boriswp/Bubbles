using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;

public class DayController : MonoBehaviour
{
    private int availableReward = 0;
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
