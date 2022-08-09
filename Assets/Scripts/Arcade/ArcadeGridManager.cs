using UnityEngine;
using System.Collections.Generic;
using System.IO;
using UnityEngine.Serialization;
using TMPro;
using System.Collections;

public class ArcadeGridManager : BaseGameGridManager
{
	
	private void Awake()
	{
		ROW_MAX = rows*4;
		grid = new GameObject[columns, ROW_MAX];

		for (var r = 0; r < rows; r++)
		{
			for (var c = 0; c < columns; c++)
			{
				Creator(c, r);
			}
		}
		InvokeRepeating(nameof(SnapRows), 5f, 7f);
	}

	public void SnapRows()
	{
		if (!ready) return;
		for (var r = ROW_MAX-2; r >= 0; r--)
		{
			for (var c = 0; c < columns; c++)
			{
				grid[c, r + 1] = grid[c, r];
				if (grid[c, r + 1] == null) continue;
				if (!grid[c, r + 1].TryGetComponent<GridMember>(out var gm)) continue;
				gm.column = c;
				gm.row = -(r + 1);
				if (gm.row == -loseCountRow)
				{
					onGameOver?.Invoke();
					return;
				}
				var snappedPosition = Snap(new Vector3(c * gap, -(r + 1) * gap, 0f) + initialPos.transform.position);
				StartCoroutine(Helpers.SmoothLerp(0.25F, grid[c, r + 1].transform, snappedPosition));
			}
		}
		for (var c = 0; c < columns; c++)
		{
			Creator(c, 0);
		}
		CheckCeiling(0);
	}

}
