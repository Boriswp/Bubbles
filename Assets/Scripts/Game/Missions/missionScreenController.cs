using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class missionScreenController : gameScreenController
{
    public TextMeshProUGUI ballCounter;
    public GameObject WinScreen;
    private new void OnEnable()
    {
        BaseGameGridManager.onGameWin += ShowWinScreen;
        MissionGridManager.onUpdateBallCount+=UpdateBallCount;
        base.OnEnable();
    }

    private new void OnDisable()
    {
        BaseGameGridManager.onGameWin -= ShowWinScreen;
        MissionGridManager.onUpdateBallCount -= UpdateBallCount;
        base.OnDisable();
    }

    public void UpdateBallCount(int count)
    {
        ballCounter.text = count.ToString();
    }
    
    
    public void ShowWinScreen()
    {
        fireButton.SetActive(false);
        WinScreen.SetActive(true);
    }
}
