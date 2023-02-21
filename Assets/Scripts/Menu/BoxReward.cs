using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BoxReward : MonoBehaviour
{
    public Sprite[] bonuses;
    public Image image;
    public Button grabButton;
    public readonly int[] v = { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3 };
    private int index = 0;
    void Awake()
    {
        grabButton.interactable = false;
        index = Random.Range(0, v.Length);
        image.sprite = bonuses[v[index]];
        image.transform.DOScale(new Vector3(20, 20, 0), 2).OnComplete(() =>
        {
            grabButton.interactable = true;
        });
    }

    public void grabIt()
    {
        grabButton.interactable = false;
        switch (v[index])
        {
            case 0:
                DataLoader.IncreaseBombsCount();
                break;
            case 1:
                DataLoader.IncreaseRainbowCount();
                break;
            case 2:
                DataLoader.IncreaseLightsCount();
                break;
            case 3:
                DataLoader.IncreaseFireBallCount();
                break;
        }
        DataLoader.DecreaseStarsBonus();
        gameObject.SetActive(false);
    }
}
