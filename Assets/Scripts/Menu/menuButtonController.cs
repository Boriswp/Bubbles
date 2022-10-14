using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class menuButtonController : MonoBehaviour
{
    private int lvl = -1;
    private bool isActive = true;
    public TextMeshProUGUI LvlText;
    public Sprite passedLvl;
    public Sprite currLvl;
    public GameObject ballCurrLvl;
    public GameObject[] stars;
    public delegate void OnOpenLvlScreen(int Lvl);
    public static OnOpenLvlScreen onOpenLvlScreen;
    
    

    public void setUpLvl(int lvlIndexArray,int starsCount,bool isCurrentLvl, bool playable)
    {
        isActive = playable;
        if (lvlIndexArray == -1)
        {
            gameObject.SetActive(false);
            return;
        }
        LvlText.text = (lvlIndexArray+1).ToString();
        lvl = lvlIndexArray;
        if (isCurrentLvl)
        {
            GetComponent<SpriteRenderer>().sprite = currLvl;
            ballCurrLvl.SetActive(true);
            ballCurrLvl.transform.DOMove(ballCurrLvl.transform.position - new Vector3(0,-0.25f,0), 1).SetLoops(-1, LoopType.Yoyo);
            LvlText.color = Color.green;
            return;
        }

        if (starsCount > 0)
        {
            GetComponent<SpriteRenderer>().sprite = passedLvl;
            LvlText.color = Color.red;
        }
        stars[starsCount].gameObject.SetActive(isActive);
    }
    
    void OnMouseDown()
    {
        if(!isActive) return;
        onOpenLvlScreen.Invoke(lvl);
    }
}
