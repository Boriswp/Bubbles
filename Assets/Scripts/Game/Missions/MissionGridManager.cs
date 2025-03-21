using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionGridManager : BaseGameGridManager
{
    private int _ballcount;
    private int lvl;

    public delegate void OnUpdateBallCount(int count);
    public static OnUpdateBallCount onUpdateBallCount;

    public delegate void OnSecondChance(int count);
    public static OnSecondChance onSecondChance;

    public delegate void OnSetupScore(int oneStarScore, int twoStarScore, int threeStarScore);
    public static OnSetupScore onSetupScore;

    private void Awake()
    {
        LoadSpriteRes();
        var lvl = JsonUtility.FromJson<SaveData>(DataLoader.getLvl());
        AppMetrica.Instance.ReportEvent("Start Lvl", Helpers.getStringForAppMetrica(DataLoader.lvlToload.ToString()));
        ROW_MAX = lvl.rowCount + 26;
        loseCountRow = lvl.rowCount + 13;
        grid = new GameObject[Constants.COLUMNS, ROW_MAX];
        foreach (var bubbleSerialized in lvl.bubbles)
        {
            var position = new Vector3(bubbleSerialized.column * Constants.GAP, bubbleSerialized.row * Constants.GAP, 0f) + initialPos.transform.position;
            Create(position, bubbleSerialized.kind, true);
        }
        onSecondChance += onNewBallsAppear;
        _ballcount = lvl.playerBallCount + DataLoader.GetLVLBonusBalls();
        _counterBalls = lvl.bubbles.Count;
        onUpdateBallCount.Invoke(_ballcount);
        onSetupScore.Invoke(lvl.oneStarScore, lvl.twoStarScore, lvl.threeStarScore);
        onUpdateScore.Invoke(0, _counterBalls);
        onReadyToLoad?.Invoke();
    }

    private void OnDisable()
    {
        onSecondChance -= onNewBallsAppear;
    }

    public void onNewBallsAppear(int count)
    {
        _ballcount += count;
        onReadyToLoad?.Invoke();
    }

    public override List<int> UpdateLvlInfo(bool specialBall)
    {
        if (!specialBall)
        {
            _ballcount--;
        }

        onUpdateBallCount?.Invoke(_ballcount);
        if (_ballcount == 0)
        {
            onGameOver.Invoke();
        }
        var tuple = Helpers.GetLastRowAndColors(grid, ROW_MAX, Constants.COLUMNS);
        onUpdateTarget?.Invoke(new Vector2(0, -tuple.Item1 * Constants.GAP));
        Debug.Log(tuple.Item2.Count);
        return tuple.Item2;
    }
}
