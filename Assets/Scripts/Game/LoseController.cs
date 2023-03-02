using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class LoseController : MonoBehaviour
{
    public TextMeshProUGUI moneyCount;
    public Button buy;

    // Update is called once per frame
    void OnEnable()
    {
        AdModule.onGetReward += OnGetADReward;
        var money = DataLoader.GetMoney();
        moneyCount.text = money.ToString();
        if (money < 200)
        {
            buy.interactable = false;
        }
    }

    public void BuyNewBalls()
    {
        DataLoader.DecreaseMoney(200);
        MissionGridManager.onSecondChance.Invoke(20);
        gameObject.SetActive(false);
    }

    private void OnGetADReward()
    {
        MissionGridManager.onSecondChance.Invoke(15);
        gameObject.SetActive(false);
    }

    private void OnDisable()
    {
        AdModule.onGetReward -= OnGetADReward;
        gameScreenController.onResumeGame.Invoke();
    }

    public void ShowAd()
    { 
        AdModule.showRewardedAD.Invoke();
    }
}
