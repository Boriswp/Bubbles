using UnityEngine;
using System.Collections.Generic;
using System.IO;
using UnityEngine.Serialization;


public class GridManager : MonoBehaviour
{
	public GameObject bubble;
	public GameObject initialPos;
	public int columns;
	public int rows;
	private GameObject[,] grid;
	public float gap;
	public GameObject youWin;
	public GameObject youLose; 
	public int loseCountRow = 13;

	const int COL_MAX = 11;
	const int ROW_MAX = 14;

	private static string LoadLevel()
	{
		using var r = new StreamReader("Assets/Data/level1.data");
		var json = r.ReadToEnd();
		return json;
	}

	private void Awake()
	{
		grid = new GameObject[COL_MAX, ROW_MAX];

		var level = LoadLevel();
		var levelpos = 0;

		for (var r = 0; r < rows; r++)
		{
			if (r % 2 != 0) columns -= 1;
			for (var c = 0; c < columns; c++)
			{
				var position = new Vector3(c * gap, -r * gap, 0f) + initialPos.transform.position;
				if (r % 2 != 0)
					position.x += 0.5f * gap;

				var newKind = 0;

				if (level.Length <= levelpos)
				{
					continue;
				}
				while (level[levelpos] == '\r' || level[levelpos] == '\n')
				{
					levelpos++;
				}

				if (level[levelpos] == '0')
				{
					levelpos++;
					continue;
				}
				if (level[levelpos] == '1')
				{
					newKind = 1;
				}
				if (level[levelpos] == '2')
				{
					newKind = 2;
				}
				if (level[levelpos] == '3')
				{
					newKind = 3;
				}
				if (level[levelpos] == '4')
				{
					newKind = 4;
				}
				if (level[levelpos] == '5')
				{
					newKind = 5;
				}

				Create(position, newKind);
				levelpos++;
			}
			if (r % 2 != 0) columns += 1;
		}
	}

	private Vector3 Snap(Vector3 position)
	{
		var objectOffset = position - initialPos.transform.position;
		var objectSnap = new Vector3(
			Mathf.Round(objectOffset.x / gap),
			Mathf.Round(objectOffset.y / gap),
			0f
		);

		if ((int)objectSnap.y % 2 == 0) return initialPos.transform.position + objectSnap * gap;
		if (objectOffset.x > objectSnap.x * gap)
		{
			objectSnap.x += 0.5f;
		}
		else
		{
			objectSnap.x -= 0.5f;
		}
		return initialPos.transform.position + objectSnap * gap;
	}

	public GameObject Create(Vector2 position, int kind)
	{
		Debug.Log(position);
		var snappedPosition = Snap(position);
		var row = (int)Mathf.Round((snappedPosition.y - initialPos.transform.position.y) / gap);
		int column;
		if (row % 2 != 0)
		{
			column = (int)Mathf.Round((snappedPosition.x - initialPos.transform.position.x) / gap - 0.5f);
		}
		else
		{
			column = (int)Mathf.Round((snappedPosition.x - initialPos.transform.position.x) / gap);
		}
		
		var bubbleClone = Instantiate(bubble, snappedPosition, Quaternion.identity);
		try
		{
			grid[column, -row] = bubbleClone;
		}
		catch (System.IndexOutOfRangeException)
		{
			Destroy(bubbleClone);
			return null;
		}

		var circleCollider2D = bubbleClone.GetComponent<CircleCollider2D>();
		if (circleCollider2D != null)
		{
			circleCollider2D.isTrigger = true;
		}

		var gridMember = bubbleClone.GetComponent<GridMember>();
		if (gridMember != null)
		{

			gridMember.parent = gameObject;
			gridMember.row = row;
			gridMember.column = column;
			if (kind == 6)
			{
				gridMember.kind = (int)Random.Range(1f, 6f);
			}
			else
			{
				gridMember.kind = kind;
			}

			var spriteRenderer = bubbleClone.GetComponent<SpriteRenderer>();
			if (spriteRenderer != null)
			{
				Color[] colorArray = { Color.red, Color.cyan, Color.yellow, Color.green, Color.magenta };
				spriteRenderer.color = colorArray[gridMember.kind - 1];
			}
		}
		bubbleClone.SetActive(true);

		if (row == -loseCountRow && youLose != null)
			youLose.SetActive(true);

		try
		{
			grid[column, -row] = bubbleClone;
		}
		catch (System.IndexOutOfRangeException)
		{
		}

		return bubbleClone;
	}


	public void Seek(int column, int row, int kind)
	{
		int[] pair = { column, row };

		var visited = new bool[COL_MAX, ROW_MAX];

		visited[column, row] = true;

		int[] deltax = { -1, 0, -1, 0, -1, 1 };
		int[] deltaxprime = { 1, 0, 1, 0, -1, 1 };
		int[] deltay = { -1, -1, 1, 1, 0, 0 };


		var queue = new Queue<int[]>();
		var objectQueue = new Queue<GameObject>();

		queue.Enqueue(pair);

		var count = 0;
		while (queue.Count != 0)
		{
			var top = queue.Dequeue();
			var gtop = grid[top[0], top[1]];
			if (gtop != null)
			{
				objectQueue.Enqueue(gtop);
			}
			count += 1;
			for (var i = 0; i < 6; i++)
			{
				var neighbor = new int[2];
				neighbor[0] = top[1] % 2 == 0 ? top[0] + deltax[i] : top[0] + deltaxprime[i];
				neighbor[1] = top[1] + deltay[i];
				try
				{
					var g = grid[neighbor[0], neighbor[1]];
					if (g != null)
					{
						var gridMember = g.GetComponent<GridMember>();
						if (gridMember != null && gridMember.kind == kind)
						{
							if (!visited[neighbor[0], neighbor[1]])
							{
								visited[neighbor[0], neighbor[1]] = true;
								queue.Enqueue(neighbor);
							}
						}
					}
				}
				catch (System.IndexOutOfRangeException)
				{
				}
			}
		}
		if (count >= 3)
		{
			while (objectQueue.Count != 0)
			{
				var g = objectQueue.Dequeue();

				var gm = g.GetComponent<GridMember>();
				if (gm == null) continue;
				grid[gm.column, -gm.row] = null;
				gm.state = BubbleState.Pop;
			}

			var audioSource = GetComponent<AudioSource>();
			if (audioSource != null)
				audioSource.Play();
		}
		CheckCeiling(0);
	}


	private void CheckCeiling(int ceiling)
	{

		var visited = new bool[COL_MAX, ROW_MAX];

		var queue = new Queue<int[]>();

		int[] deltax = { -1, 0, -1, 0, -1, 1 };
		int[] deltaxprime = { 1, 0, 1, 0, -1, 1 };
		int[] deltay = { -1, -1, 1, 1, 0, 0 };

		for (var i = 0; i < COL_MAX; i++)
		{
			var pair = new[] { i, ceiling };
			if (grid[i, ceiling] == null) continue;
			visited[i, ceiling] = true;
			queue.Enqueue(pair);
		}

		var count = 0;
		while (queue.Count != 0)
		{
			var top = queue.Dequeue();
			count += 1;
			for (var i = 0; i < 6; i++)
			{
				var neighbor = new int[2];
				if (top[1] % 2 == 0)
				{
					neighbor[0] = top[0] + deltax[i];
				}
				else
				{
					neighbor[0] = top[0] + deltaxprime[i];
				}
				neighbor[1] = top[1] + deltay[i];
				try
				{
					var g = grid[neighbor[0], neighbor[1]];
					if (g != null)
					{
						if (!visited[neighbor[0], neighbor[1]])
						{
							visited[neighbor[0], neighbor[1]] = true;
							queue.Enqueue(neighbor);
						}
					}
				}
				catch (System.IndexOutOfRangeException)
				{
				}
			}
		}

		if (count == 0)
		{
			if (youWin != null)
				youWin.SetActive(true);
		}

		for (var r = 0; r < ROW_MAX; r++)
		{
			for (var c = 0; c < COL_MAX; c++)
			{
				if (grid[c, r] == null || visited[c, r]) continue;
				var g = grid[c, r];
				var gm = g.GetComponent<GridMember>();
				if (gm == null) continue;
				grid[gm.column, -gm.row] = null;
				gm.state = BubbleState.Explode;
			}
		}

	}
}
