using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionGridManager : BaseGameGridManager
{
    private int ballcount = 0;

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
        ballcount = 345;
        onUpdateBallCount.Invoke(ballcount);
        onUpdateTarget.Invoke(new Vector2(0, -(rows - 1) * gap));
    }

    public override List<int> UpdateLvlInfo()
    {
        ballcount--;
        onUpdateBallCount?.Invoke(ballcount);
        if (ballcount == 0)
        {
            onGameOver.Invoke();
        }
        var tuple = Helpers.GetLastRowAndColors(grid, ROW_MAX, columns);
        onUpdateTarget?.Invoke(new Vector2(0, -tuple.Item1 * gap));
        return tuple.Item2;
    }
}
