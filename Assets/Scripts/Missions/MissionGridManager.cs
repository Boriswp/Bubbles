using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissionGridManager : BaseGameGridManager
{
	private int ballcount = 0;

	private void Awake()
	{
		ROW_MAX = rows * 4;
		grid = new GameObject[columns, ROW_MAX];

		for (var r = 0; r < rows; r++)
		{
			for (var c = 0; c < columns; c++)
			{
				Creator(c, r);
			}
		}
		ballcount = 30;
		onUpdateTarget.Invoke(new Vector2(0, -(rows-1) * gap));
	}
}
