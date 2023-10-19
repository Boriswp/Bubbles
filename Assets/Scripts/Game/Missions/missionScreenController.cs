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
    public GameObject[] winScreenStars;
    public GameObject[] Stars;
    public GameObject[] StarsDisable;
    public GameObject StatusBarObject;
    private ProceduralImage StatusBar;
    private int savedScore = 0;
    private int savedBalls = 0;
    public delegate void OnResumeGame();
    public static OnResumeGame onResumeGame;

    private void Awake()
    {
        StatusBar = StatusBarObject.GetComponent<ProceduralImage>();
    }

    private new void OnEnable()
    {
        BaseGameGridManager.onGameWin += ShowWinScreen;
        MissionGridManager.onUpdateBallCount += UpdateBallCount;
        BaseGameGridManager.onUpdateScore += UpdateScore;
        MissionGridManager.onSetupScore += OnSetupScore;
        onResumeGame += ReturnToGame;
        base.OnEnable();
    }

    private new void OnDisable()
    {
        BaseGameGridManager.onGameWin -= ShowWinScreen;
        MissionGridManager.onUpdateBallCount -= UpdateBallCount;
        BaseGameGridManager.onUpdateScore -= UpdateScore;
        MissionGridManager.onSetupScore -= OnSetupScore;
        onResumeGame -= ReturnToGame;
        base.OnDisable();
    }

    private void OnSetupScore(int one, int two, int three)
    {
        scoreOne = one;
        scoreTwo = two;
        scoreThree = three;
        var parentSize = StatusBar.rectTransform.rect.width;
        var posFirstStar = (parentSize * one / three);
        var posSecondStar = (parentSize * two / three);
        StarsDisable[0].GetComponent<RectTransform>().anchoredPosition = new Vector2(posFirstStar, 0);
        StarsDisable[1].GetComponent<RectTransform>().anchoredPosition = new Vector2(posSecondStar, 0);
        Stars[0].GetComponent<RectTransform>().anchoredPosition = new Vector2(posFirstStar, 0);
        Stars[1].GetComponent<RectTransform>().anchoredPosition = new Vector2(posSecondStar, 0);
    }

    public void UpdateBallCount(int count)
    {
        savedBalls = count;
        ballCounter.text = count.ToString();
    }

    public void UpdateScore(int score, int balls)
    {
        savedScore = score;
        textCounterScore.text = score.ToString();
        starsCount = Helpers.CalculateStars(score, scoreOne, scoreTwo, scoreThree);
        textCounterBalls.text = balls.ToString();
        StatusBar.fillAmount = (float)score / scoreThree;
        if (starsCount <= 0) return;
        for (var i = 0; i < starsCount; i++)
        {
            Stars[i].SetActive(true);
        }
    }


    public void ShowWinScreen()
    {
        starsCount = Helpers.CalculateStars(savedScore + savedBalls * Constants.SAVED_BALL_SCORE, scoreOne, scoreTwo, scoreThree);
        SoundController.soundEvent?.Invoke(SoundEvent.WINSOUND);
        DataLoader.setStarsToLVL(starsCount);
        fireButton.SetActive(false);
        WinScreen.SetActive(true);
        winScreenStars[starsCount].SetActive(true);
        AppMetrica.Instance.ReportEvent("Lvl Cleared", Helpers.getStringForAppMetrica(DataLoader.lvlToload.ToString()));
    }
}
