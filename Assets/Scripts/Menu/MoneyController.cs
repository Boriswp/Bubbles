using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MoneyController : MonoBehaviour
{
    public TextMeshProUGUI moneyCount;
    private void Update()
    {
        moneyCount.text = DataLoader.GetMoney().ToString();
    }
}
