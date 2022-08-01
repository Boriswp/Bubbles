using UnityEngine;
using System.Collections.Generic;
using System.IO;
using UnityEngine.Serialization;
using TMPro;
using System.Collections;

public class GridManager : MonoBehaviour
{
	public GameObject bubble;
	public GameObject initialPos;
	public TextMeshProUGUI textCounter;
	private int counter;
	public int columns;
	public int rows;
	private GameObject[,] grid;
	public float gap;
	public ScreenController screenController;
	public int loseCountRow = 13;
	public static readonly Color[] colorArray = { Color.red, Color.cyan, Color.yellow, Color.green, Color.magenta };
	private readonly int[] deltax = { -1, 0, -1, 0, -1, 1 };
	private readonly int[] deltaxprime = { 1, 0, 1, 0, -1, 1 };
	private readonly int[] deltay = { -1, -1, 1, 1, 0, 0 };
	public bool ready = false;

	const int COL_MAX = 8;
	const int ROW_MAX = 16;


	private void Awake()
	{
		textCounter.text = "0";
		grid = new GameObject[COL_MAX, ROW_MAX];

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
				if (grid[c, r + 1] != null)
				{
					var g = grid[c, r + 1];
					var gm = g.GetComponent<GridMember>();
					if (gm == null) continue;
					gm.column = c;
					gm.row = -(r + 1);
					if (gm.row == -loseCountRow)
					{
						screenController.ShowLoseScreen();
						return;
					}
					var snappedPosition = Snap(new Vector3(c * gap, -(r + 1) * gap, 0f) + initialPos.transform.position);
					grid[c, r + 1].transform.position = snappedPosition;
				}
			}
		}
		for (var c = 0; c < columns; c++)
		{
			Creator(c, 0);
		}
		CheckCeiling(0);
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
			objectSnap.x += gap;
		}
		else
		{
			objectSnap.x -= gap;
		}
		return initialPos.transform.position + objectSnap * gap;
	}

	private void Create(Vector2 position, int kind)
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
				{
					screenController.ShowLoseScreen();
				}

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
			var floatRow = (snappedPosition.y - position1.y) / gap;
			var row = (int)Mathf.Round(floatRow);
			float floatColumn;
			if (row % 2 != 0)
			{
				floatColumn = (snappedPosition.x - position1.x) / gap + gap;
			}
			else
			{
				floatColumn = (snappedPosition.x - position1.x) / gap;
			}
			var column = (int)Mathf.Round(floatColumn);
			
			switch (column)
			{
				case >= COL_MAX:
					position = new Vector2(position.x - gap, position.y);
					continue;
				case < 0:
					position = new Vector2(position.x + gap, position.y);
					continue;
			}

			if (grid[column, -row] != null)
			{
					if (grid[column,-(row-1)]!=null)
					{
						position = grid[column, -row].transform.position.x > position.x ? new Vector2(position.x - gap, position.y) : new Vector2(position.x + gap, position.y);
					}
					else
					{
						position = new Vector2(position.x, position.y - gap);
					}
					continue;
			}
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
				counter += 10;
				gm.enabled = true;
				gm.state = BubbleState.Pop;
			}
			textCounter.text = $"{counter}";
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
				counter += 10;
				gm.enabled = true;
				gm.state = BubbleState.Explode;
			}
		}
		textCounter.text = $"{counter}";
	}
}
