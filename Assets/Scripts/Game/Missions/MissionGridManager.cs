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
        LoadRes();
        ROW_MAX = rows * 4;
        grid = new GameObject[columns, ROW_MAX];

        for (var r = 0; r < rows; r++)
        {
            for (var c = 0; c < columns; c++)
            {
                Creator(c, r);
            }
        }
        _ballcount = 345;
        _counterBalls = rows * columns;
        onUpdateBallCount.Invoke(_ballcount);
        onUpdateScore.Invoke(0,_counterBalls);
        onUpdateTarget.Invoke(new Vector2(0, -(rows - 1) * gap));
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
        var tuple = Helpers.GetLastRowAndColors(grid, ROW_MAX, columns);
        onUpdateTarget?.Invoke(new Vector2(0, -tuple.Item1 * gap));
        return tuple.Item2;
    }
}
