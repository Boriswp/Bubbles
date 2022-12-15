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

    private void Start()
    {
        var savedTime = DataLoader.GetTime();

        var timeSpan = (DateTime.UtcNow.Ticks - savedTime)/10000000;

        var lifeCount = (int)(timeSpan / time);

        var totalLifeCount = lifeCount + DataLoader.GetLifeCount();
        if (totalLifeCount > Constants.MAX_LIFES)
        {
            totalLifeCount = Constants.MAX_LIFES;
        }

        DataLoader.setCurrentLifesCount(totalLifeCount);
        _timeLeft = time - timeSpan%time;
        _timerOn = true;
    }

    [ContextMenu("IncreaseHearts")]
    public void IncreaseHearts()
    {
        DataLoader.setCurrentLifesCount(7);
    }

    [ContextMenu("DecreaseHearts")]
    public void DecreaseHearts()
    {
        DataLoader.setCurrentLifesCount(0);
    }

    private void OnDisable()
    {
        DataLoader.SetCurrentTime(DateTime.UtcNow.Ticks);
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
        var lifeCount = DataLoader.GetLifeCount();

        if (lifeCount == Constants.MAX_LIFES)
        {
            _timeLeft = time;
            _timerOn = false;
        }

        if (_timeLeft > 0)
        {
            _timeLeft -= Time.deltaTime;
        }
        else
        {
            DataLoader.setCurrentLifesCount(++lifeCount);
            _timeLeft = time;
        }

        UpdateTimeText(lifeCount);
    }

    private void UpdateTimeText(int lifeCount)
    {
        if (_timeLeft < 0)
            _timeLeft = 0;

        heartsCount.text = lifeCount.ToString();

        float minutes = Mathf.FloorToInt(_timeLeft / 60);
        float seconds = Mathf.FloorToInt(_timeLeft % 60);
        counter.text = !_timerOn ? "ВСЕ" : $"{minutes:00} : {seconds:00}";
    }
}