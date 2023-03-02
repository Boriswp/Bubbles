using System;
using TMPro;
using UnityEngine;

public class HeartSystem : MonoBehaviour
{
    public TextMeshProUGUI heartsCount;
    public TextMeshProUGUI counter;

    [SerializeField] private int time;

    private float _timeLeft;
    private bool _timerOn;
    private bool _involve = false;
    public delegate void CheckHealthStatus(bool isStart);
    public static CheckHealthStatus checkHealthStatus;
    public delegate void IncreaseHearts(int count);
    public static IncreaseHearts increaseHearts;

    private void Awake()
    {
        checkHealthStatus += GetHealthStatus;
        increaseHearts += IncreaseHeartsByCount;
    }

    private void Start()
    {
        GetHealthStatus(true);
    }

    private void GetHealthStatus(bool isStart)
    {
        var invulnerableTime = DataLoader.GetInvulnerableTime();

        var savedTime = DataLoader.GetTime();

        var timeSpan = isStart ? (DateTime.UtcNow.Ticks - savedTime) / 10000000 : 0;
        invulnerableTime -= timeSpan;
        _involve = invulnerableTime > 0;
        if (!_involve)
        {
            DataLoader.SetInvulnerable(0);
            var lifeCount = (int)(timeSpan / time);

            var totalLifeCount = lifeCount + DataLoader.GetLifeCount();
            if (totalLifeCount > Constants.MAX_LIFES)
            {
                totalLifeCount = Constants.MAX_LIFES;
            }

            DataLoader.setCurrentLifesCount(totalLifeCount);
            _timeLeft = time - timeSpan % time;
        }
        else
        {
            _timeLeft = invulnerableTime;
        }
        _timerOn = true;
    }

    private void IncreaseHeartsByCount(int count)
    {
        DataLoader.setCurrentLifesCount(count);
    }

    [ContextMenu("DecreaseHearts")]
    public void DecreaseHearts()
    {
        DataLoader.setCurrentLifesCount(0);
    }

    private void OnDisable()
    {
        DataLoader.SetCurrentTime(DateTime.UtcNow.Ticks);
        checkHealthStatus -= GetHealthStatus;
        increaseHearts -= IncreaseHeartsByCount;
    }

    private void OnApplicationPause(bool pauseStatus)
    {
        if (pauseStatus)
        {

            DataLoader.SetCurrentTime(DateTime.UtcNow.Ticks);
        }
    }

    private void Update()
    {
        if (!_timerOn) return;
        var lifeCount = 0;
        if (!_involve)
        {
            lifeCount = DataLoader.GetLifeCount();

            if (lifeCount == Constants.MAX_LIFES)
            {
                _timeLeft = time;
                _timerOn = false;
            }

        }
        if (_timeLeft > 0)
        {
            _timeLeft -= Time.deltaTime;
        }
        else
        {
            if (_involve)
            {
                _involve = false;
                DataLoader.SetInvulnerable(0);
            }
            else
            {
                DataLoader.setCurrentLifesCount(++lifeCount);
                _timeLeft = time;
            }
        }

        UpdateTimeText(lifeCount);
    }

    private void UpdateTimeText(int lifeCount)
    {
        if (_timeLeft < 0)
            _timeLeft = 0;
        if (_involve)
        {
            heartsCount.text = "\u221E";
        }
        else
        {
            heartsCount.text = lifeCount.ToString();
        }
        float minutes = Mathf.FloorToInt(_timeLeft / 60);
        float seconds = Mathf.FloorToInt(_timeLeft % 60);
        counter.text = !_timerOn ? "ВСЕ" : $"{minutes:00} : {seconds:00}";
    }
}