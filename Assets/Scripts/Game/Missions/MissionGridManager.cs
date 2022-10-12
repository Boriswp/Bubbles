using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionGridManager : BaseGameGridManager
{
    private int _ballcount;

    public delegate void OnUpdateBallCount(int count);
    public static OnUpdateBallCount onUpdateBallCount;

    private void Awake()
    {
        LoadSpriteRes();
        var lvl = JsonUtility.FromJson<SaveData>(DataLoader.lvls[DataLoader.lvlToload].text);
        ROW_MAX = lvl.rowCount * 4;
        grid = new GameObject[Constants.COLUMNS, ROW_MAX];
        foreach (var bubbleSerialized in lvl.bubbles)
        {
            var position = new Vector3(bubbleSerialized.column * Constants.GAP, bubbleSerialized.row * Constants.GAP, 0f) + initialPos.transform.position;
            Create(position,bubbleSerialized.kind,true);
        }
        _ballcount = lvl.playerBallCount;
        _counterBalls = lvl.bubbles.Count;
        onUpdateBallCount.Invoke(_ballcount);
        onUpdateScore.Invoke(0,_counterBalls,0);
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
