using System.Collections;
using TMPro;
using UnityEngine;

using System.Collections.Generic;
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
        DataLoader.setStarsToLVL(starsCount);
        fireButton.SetActive(false);
        WinScreen.SetActive(true);
    }
}
