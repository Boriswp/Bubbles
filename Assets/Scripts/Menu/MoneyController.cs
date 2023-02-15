using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MoneyController : MonoBehaviour
{
    public TextMeshProUGUI moneyCount;
    public TextMeshProUGUI ballsCount;

    private void Update()
    {
        moneyCount.text = DataLoader.GetMoney().ToString();
        ballsCount.text = DataLoader.GetBonusBallsCount().ToString();
    }
}
