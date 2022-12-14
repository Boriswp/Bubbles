using System.Collections;
using TMPro;
using UnityEngine;

using System.Collections.Generic;
using UnityEngine.UI.ProceduralImage;

public class missionScreenController : gameScreenController
{
    public TextMeshProUGUI ballCounter;
    protected int scoreOne;
    protected int scoreTwo;
    protected int scoreThree;
    public GameObject WinScreen;
    public GameObject[] Stars;
    public GameObject[] StarsDisable;
    public ProceduralImage StatusBar;
    private new void OnEnable()
    {
        BaseGameGridManager.onGameWin += ShowWinScreen;
        MissionGridManager.onUpdateBallCount+=UpdateBallCount;
        BaseGameGridManager.onUpdateScore += UpdateScore;
        MissionGridManager.onSetupScore += OnSetupScore;
        base.OnEnable();
    }

    private new void OnDisable()
    {
        BaseGameGridManager.onGameWin -= ShowWinScreen;
        MissionGridManager.onUpdateBallCount -= UpdateBallCount;
        BaseGameGridManager.onUpdateScore -= UpdateScore;
        MissionGridManager.onSetupScore -= OnSetupScore;
        base.OnDisable();
    }

    private void OnSetupScore(int one, int two, int three)
    {
        scoreOne = one;
        scoreTwo = two;
        scoreThree = three;
        StarsDisable[0].GetComponent<RectTransform>().anchoredPosition += new Vector2(256.32f / three * one, 0);
        StarsDisable[1].GetComponent<RectTransform>().anchoredPosition += new Vector2(256.32f / three * two, 0);
        Stars[0].GetComponent<RectTransform>().anchoredPosition += new Vector2(256.32f / three * one, 0);
        Stars[1].GetComponent<RectTransform>().anchoredPosition += new Vector2(256.32f / three * two, 0);
    }

    public void UpdateBallCount(int count)
    {
        ballCounter.text = count.ToString();
    }
    
    public void UpdateScore(int score,int balls)
    {
        textCounterScore.text = score.ToString();
        starsCount = Helpers.CalculateStars(score,scoreOne,scoreTwo,scoreThree);
        textCounterBalls.text = balls.ToString();
        StatusBar.fillAmount = (float)score/scoreThree;
        if (starsCount <= 0) return;
        for (var i = 0; i < starsCount; i++)
        {
            Stars[i].SetActive(true);
        }
    }
    
    
    public void ShowWinScreen()
    {
        SoundController.soundEvent.Invoke(SoundEvent.WINSOUND);
        DataLoader.setStarsToLVL(starsCount);
        fireButton.SetActive(false);
        WinScreen.SetActive(true);
    }
}
