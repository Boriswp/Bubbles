using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class menuButtonController : MonoBehaviour
{
    private int lvl = -1;
    public TextMeshProUGUI LvlText;
    public Sprite passedLvl;
    public Sprite currLvl;
    

    public void setUpLvl(int lvlIndexArray,int starsCount,bool isCurrentLvl)
    {   if(lvlIndexArray==-1) gameObject.SetActive(false);
        LvlText.text = (lvlIndexArray+1).ToString();
        if (currLvl)
        {
            GetComponent<SpriteRenderer>().sprite = currLvl;
        }

        if (starsCount > 0)
        {
            GetComponent<SpriteRenderer>().sprite =passedLvl;
        }
        lvl = lvlIndexArray;
    }
    
    void OnMouseDown()
    {
        DataLoader.lvlToload = lvl;
        SceneManager.LoadScene("Levels");
    }
}
