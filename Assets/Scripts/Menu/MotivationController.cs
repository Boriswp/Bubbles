using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MotivationController : MonoBehaviour
{

    public Button buy;
    public Button watchAd;


    public void OnEnable()
    {
        AdModule.onGetReward += GetReward;
        var money = DataLoader.GetMoney();
        if (money < 75)
        {
            buy.interactable = false;
        }
    }

    public void OnDisable()
    {
        AdModule.onGetReward -= GetReward;
    }

    public void BuyHearts()
    {
        DataLoader.DecreaseMoney(75);
        HeartSystem.increaseHearts.Invoke(3);
        gameObject.SetActive(false);
    }

    public void ShowAd()
    {
        AdModule.showRewardedAD.Invoke();
    }

    public void GetReward()
    {
        HeartSystem.increaseHearts.Invoke(2);
        gameObject.SetActive(false);
    }
}
