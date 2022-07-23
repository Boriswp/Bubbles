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

	const int COL_MAX = 9;
	const int ROW_MAX = 14;


	private void Awake()
	{
		grid = new GameObject[COL_MAX, ROW_MAX];

		for (var r = 0; r < rows; r++)
		{
			for (var c = 0; c < columns; c++)
			{
				Creator(c, r);
			}
		}
	}
    

	private void SnapRows()
    {

    }

	private void Creator(int column, int row)
    {
		var position = new Vector3(column * gap, -row * gap, 0f) + initialPos.transform.position;
		var newKind = Random.Range(1, 6);

		Create(position, newKind);
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
		int column = (int)Mathf.Round((snappedPosition.x - initialPos.transform.position.x) / gap);
		try {
				var bubbleClone = Instantiate(bubble, snappedPosition, Quaternion.identity);

				var circleCollider2D = bubbleClone.GetComponent<CircleCollider2D>();
				circleCollider2D.isTrigger = true;

				var gridMember = bubbleClone.GetComponent<GridMember>();
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
				Color[] colorArray = { Color.red, Color.cyan, Color.yellow, Color.green, Color.magenta };
				spriteRenderer.color = colorArray[gridMember.kind - 1];
				
				bubbleClone.SetActive(true);

				if (row == -loseCountRow && youLose != null)
					youLose.SetActive(true);

				grid[column, -row] = bubbleClone;
				return bubbleClone;
		}
		catch (System.IndexOutOfRangeException)
		{
			Debug.Log($"wrong coord {position}");
			return null;
		}
	}


	private Queue<GameObject> NeighborCounter(Queue<int[]> queue,bool[,] visited, int kind)
	{
		int[] deltax = {  0, 0,-1, 1 };
		int[] deltay = {  1,-1, 0, 0 };
		var objectQueue = new Queue<GameObject>();
		while (queue.Count != 0)
		{
			var top = queue.Dequeue();
			var gtop = grid[top[0], top[1]];
			if (gtop != null)
			{
				objectQueue.Enqueue(gtop);
			}
			for (var i = 0; i < 4; i++)
			{
				var neighbor = new int[2];
				neighbor[0] = top[0] + deltax[i];
				neighbor[1] = top[1] + deltay[i];
				if (neighbor[0] >= ROW_MAX || neighbor[1] >= COL_MAX|| neighbor[0]<0||neighbor[1]<0)
				{
					continue;
				}
				Debug.Log($"neighbor: {neighbor[0]} - {neighbor[1]}");
				var g = grid[neighbor[0], neighbor[1]];
				if (g != null)
				{ 
					var gridMember = g.GetComponent<GridMember>();
					if (gridMember.kind == kind||kind==0)
					{
						if (!visited[neighbor[0], neighbor[1]])
						{
							visited[neighbor[0], neighbor[1]] = true;
							queue.Enqueue(neighbor);
						}
					}
				}
			}
		}
		return objectQueue;
	}

	public void Seek(int column, int row, int kind)
	{
		int[] pair = { column, row };

		var visited = new bool[COL_MAX, ROW_MAX];

		visited[column, row] = true;

		var queue = new Queue<int[]>();
		queue.Enqueue(pair);
		var objectQueue = NeighborCounter(queue, visited,kind);
		if (objectQueue.Count >= 3)
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
			audioSource.Play();
		}
		CheckCeiling(0);
	}


	private void CheckCeiling(int ceiling)
	{
		var visited = new bool[COL_MAX, ROW_MAX];

		var queue = new Queue<int[]>();

		for (var i = 0; i < COL_MAX; i++)
		{
			var pair = new[] { i, ceiling };
			if (grid[i, ceiling] == null) continue;
			visited[i, ceiling] = true;
			queue.Enqueue(pair);
		}

		var objectQueue = NeighborCounter(queue,visited,0);

		if (objectQueue.Count== 0)
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
