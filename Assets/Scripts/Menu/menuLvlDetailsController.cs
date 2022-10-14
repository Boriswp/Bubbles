using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using TMPro;
using UnityEngine;

public class menuLvlDetailsController : MonoBehaviour
{
    public GameObject StarsZero;
    public GameObject StarsOne;
    public GameObject StarsTwo;
    public GameObject StarsThree;
    public TextMeshProUGUI lvlText;
    public string lvlStr;

    public void SetLvlDetails(int lvl, int starsCount)
    {
        lvlText.text = $"{lvlStr} {lvl+1}";
        switch (starsCount)
        {
            case 0:
                StarsZero.SetActive(true);
                break;
            case 1:
                StarsOne.SetActive(true);
                break;
            case 2:
                StarsTwo.SetActive(true);
                break;
            case 3:
                StarsThree.SetActive(true);
                break;
        }
    }

    public void OnDisable()
    {
        StarsZero.SetActive(false);
        StarsOne.SetActive(false);
        StarsTwo.SetActive(false);
        StarsThree.SetActive(false);
    }
}
