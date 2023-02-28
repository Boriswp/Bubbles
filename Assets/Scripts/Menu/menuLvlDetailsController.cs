using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class menuLvlDetailsController : MonoBehaviour
{
    public GameObject[] Stars;
    public TextMeshProUGUI lvlText;
    public Toggle toggle;
    public Toggle toggleSecond;
    public Toggle toggleThird;
    private Color active = new Color(0.1548759f, 0.9528302f, 0.04943931f);
    private Color notActive = new Color(0.9960784f, 0.007843138f, 0.9294118f);
    private ColorBlock activeCB;
    private ColorBlock notActiveCB;
    public string lvlStr;


    private void Start()
    {
        notActiveCB = toggle.colors;
        activeCB = notActiveCB;
        activeCB.normalColor = active;
        activeCB.highlightedColor = notActive;
        activeCB.selectedColor = active;
        activeCB.disabledColor = notActive;
        notActiveCB.selectedColor = notActive;
        notActiveCB.highlightedColor = notActive;
    }

    public void SetLvlDetails(int lvl, int starsCount, int ballsCount)
    {
        lvlText.text = $"{lvlStr} {lvl + 1}";
        Stars[starsCount].SetActive(true);
        if (ballsCount < 5)
        {
            toggle.interactable = false;
            toggleSecond.interactable = false;
            toggleThird.interactable = false;
        }
        else if (ballsCount < 10)
        {
            toggle.interactable = true;
            toggleSecond.interactable = false;
            toggleThird.interactable = false;
        }
        else if (ballsCount < 15)
        {
            toggle.interactable = true;
            toggleSecond.interactable = true;
            toggleThird.interactable = false;
        }
        else
        {
            toggle.interactable = true;
            toggleSecond.interactable = true;
            toggleThird.interactable = true;
        }
    }

    public void IsSetFirstBonus(bool isSet)
    {

        if (isSet)
        {
            toggle.colors = activeCB;
            DataLoader.SetOnLvlBonus(5);
        }
        else
        {
            toggle.colors = notActiveCB;
            DataLoader.UnsetLvlBonus(5);
        }

    }

    public void IsSetSecondBonus(bool isSet)
    {
        if (isSet)
        {
            toggleSecond.colors = activeCB;
            DataLoader.SetOnLvlBonus(10);
        }
        else
        {
            toggleSecond.colors = notActiveCB;
            DataLoader.UnsetLvlBonus(10);
        }
    }

    public void IsSetThirdBonus(bool isSet)
    {
        if (isSet)
        {
            toggleThird.colors = activeCB;
            DataLoader.SetOnLvlBonus(15);
        }
        else
        {
            toggleThird.colors = notActiveCB;
            DataLoader.UnsetLvlBonus(15);
        }
    }

    public void unsetBonuses()
    {
        if (toggle.isOn)
        {
            DataLoader.UnsetLvlBonus(5);
        }
        else if (toggleSecond.isOn)
        {
            DataLoader.UnsetLvlBonus(10);
        }
        else if (toggleThird.isOn)
        {
            DataLoader.UnsetLvlBonus(15);
        }
    }

    public void OnDisable()
    {
        foreach (var star in Stars)
        {
            star.SetActive(false);
        }
        toggle.colors = notActiveCB;
        toggleSecond.colors = notActiveCB;
        toggleThird.colors = notActiveCB;
        DataLoader.SaveProfileData();
    }
}
