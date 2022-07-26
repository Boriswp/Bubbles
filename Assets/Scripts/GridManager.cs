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
	public ScreenController screenController;
	public int loseCountRow = 13;
	private Color[] colorArray = { Color.red, Color.cyan, Color.yellow, Color.green, Color.magenta };
	private int[] deltax = { -1, 0, -1, 0, -1, 1 };
	private int[] deltaxprime = { 1, 0, 1, 0, -1, 1 };
	private int[] deltay = { -1, -1, 1, 1, 0, 0 };

	const int COL_MAX = 6;
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
		var newKind = Random.Range(0, 5);

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

	public void Create(Vector2 position, int kind)
	{
		while (true)
		{
			var snappedPosition = Snap(position);
			var position1 = initialPos.transform.position;
			var row = (int)Mathf.Round((snappedPosition.y - position1.y) / gap);
			int column;
			if (row % 2 != 0)
			{
				column = (int)Mathf.Round((snappedPosition.x - position1.x) / gap + gap);
			}
			else
			{
				column = (int)Mathf.Round((snappedPosition.x - position1.x) / gap);
			}

			if (grid[column, -row] != null)
			{
				var pos = new Vector2(position.x, position.y - gap);
				position = pos;
				continue;
			}

			try
			{
				var bubbleClone = Instantiate(bubble, snappedPosition, Quaternion.identity);
				var circleCollider2D = bubbleClone.GetComponent<CircleCollider2D>();
				circleCollider2D.isTrigger = true;

				var gridMember = bubbleClone.GetComponent<GridMember>();
				gridMember.enabled = true;
				gridMember.parent = gameObject;

				gridMember.row = row;
				gridMember.column = column;
				gridMember.kind = kind;

				var spriteRenderer = bubbleClone.GetComponent<SpriteRenderer>();
			
				spriteRenderer.color = colorArray[gridMember.kind];


				if (row == -loseCountRow)
					screenController.ShowLoseScreen();

				grid[column, -row] = bubbleClone;
				return;
			}
			catch (System.IndexOutOfRangeException)
			{
				Debug.Log($"wrong coord {position}");
				return;
			}
	    }
    }

	public GridMember CreateSimple(GameObject gameObject, int kind)
	{
		var position = gameObject.transform.position;
		while (true)
		{
			var snappedPosition = Snap(position);
			var position1 = initialPos.transform.position;
			var row = (int)Mathf.Round((snappedPosition.y - position1.y) / gap);
			int column;
			if (row % 2 != 0)
			{
				column = (int)Mathf.Round((snappedPosition.x - position1.x) / gap + gap);
			}
			else
			{
				column = (int)Mathf.Round((snappedPosition.x - position1.x) / gap);
			}

			if (grid[column, -row] != null)
			{
				var pos = new Vector2(position.x, position.y - gap);
				position = pos;
				continue;
			}

			try
			{
				gameObject.transform.position = snappedPosition;
				var circleCollider2D = gameObject.GetComponent<CircleCollider2D>();
                circleCollider2D.isTrigger = true;

				var rb = gameObject.GetComponent<Rigidbody2D>();
				rb.velocity = Vector2.zero;

				var gridMember = gameObject.GetComponent<GridMember>();
				gridMember.enabled = true;
				gridMember.parent = this.gameObject;

				gridMember.row = row;
				gridMember.column = column;
				gridMember.kind = kind;

				if (row == -loseCountRow)
					screenController.ShowLoseScreen();

				grid[column, -row] = gameObject;
				return gridMember;
			}
			catch (System.IndexOutOfRangeException)
			{
				Debug.Log($"wrong coord {position}");
				return null;
			}
		}
	}

	private Queue<GameObject> NeighborCounter(Queue<int[]> queue,bool[,] visited, int kind)
	{
		var objectQueue = new Queue<GameObject>();
		while (queue.Count != 0)
		{
			var top = queue.Dequeue();
			var gTop = grid[top[0], top[1]];
			if (gTop != null)
			{
				objectQueue.Enqueue(gTop);
			}
			for (var i = 0; i < 6; i++)
			{
				var neighbor = new int[2];
				neighbor[0] = top[1] % 2 != 0 ? top[0] + deltax[i] : top[0] + deltaxprime[i];
				neighbor[1] = top[1] + deltay[i];
				if (neighbor[0] >= COL_MAX || neighbor[1] >= ROW_MAX || neighbor[0] < 0 || neighbor[1] < 0)
				{
					continue;
				}
				var g = grid[neighbor[0], neighbor[1]];
				if (g == null) continue;
				var gridMember = g.GetComponent<GridMember>();
				if (gridMember.kind != kind && kind != -1) continue;
				if (visited[neighbor[0], neighbor[1]]) continue;
				visited[neighbor[0], neighbor[1]] = true;
				queue.Enqueue(neighbor);
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
				Debug.Log($"POP {objectQueue.Count}");
				gm.enabled = true;
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

		var objectQueue = NeighborCounter(queue,visited,-1);

		if (objectQueue.Count == 0)
		{
		   
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
				gm.enabled = true;
				gm.state = BubbleState.Explode;
			}
		}

	}
}
