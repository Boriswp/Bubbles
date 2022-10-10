using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionGridManager : BaseGameGridManager
{
    private int _ballcount = 0;

    public delegate void OnUpdateBallCount(int count);
    public static OnUpdateBallCount onUpdateBallCount;

    private void Awake()
    {
        LoadSpriteRes();
        var Lvl = JsonUtility.FromJson<SaveData>(DataLoader.lvls[DataLoader.currentLvl].text);
        ROW_MAX = Lvl.rowCount * 4;
        grid = new GameObject[Lvl.columnCount, ROW_MAX];
        foreach (var bubbleSerialized in Lvl.bubbles)
        {
            var position = new Vector3(bubbleSerialized.column * Constants.GAP, -bubbleSerialized.row * Constants.GAP, 0f) + initialPos.transform.position;
            Create(position,bubbleSerialized.kind,true);
        }
        _ballcount = Lvl.playerBallCount;
        _counterBalls = Lvl.bubbles.Count;
        onUpdateBallCount.Invoke(_ballcount);
        onUpdateScore.Invoke(0,_counterBalls);
        var tuple = Helpers.GetLastRowAndColors(grid, ROW_MAX, Constants.COLUMNS);
        onUpdateTarget?.Invoke(new Vector2(0, -tuple.Item1 * Constants.GAP));
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
        return tuple.Item2;
    }
}
