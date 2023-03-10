using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class BaseGameGridManager : BaseGridManager
{
    protected int _counterScore;
    protected int _counterBalls;
    public int rows;
    public int loseCountRow = 13;
    protected int ROW_MAX;
    public bool ready;

    public delegate void OnGameOver();

    public static OnGameOver onGameOver;

    public delegate void OnGameWin();

    public static OnGameWin onGameWin;

    public delegate void OnUpdateTarget(Vector2 target);

    public static OnUpdateTarget onUpdateTarget;

    public delegate void OnUpdateScore(int score, int balls);

    public static OnUpdateScore onUpdateScore;

    public delegate void OnReadyToLoad();

    public static OnReadyToLoad onReadyToLoad;

    protected void Creator(int column, int row)
    {
        var position = new Vector3(column * Constants.GAP, -row * Constants.GAP, 0f) + initialPos.transform.position;
        var newKind = Random.Range(0, 7);

        Create(position, newKind, true);
    }

    public virtual List<int> UpdateLvlInfo(bool specialBall)
    {
        return new List<int>();
    }

    public void Reload()
    {
        onReadyToLoad?.Invoke();
        ready = true;
    }

    public void CreateSimple(GameObject newGameObject, int kind, Vector2 direction)
    {
        ready = false;
        var position = newGameObject.transform.position;

        var snappedPosition = Snap(position);
        var position1 = initialPos.transform.position;
        var floatRow = (snappedPosition.y - position1.y) / Constants.GAP;
        var row = (int)Mathf.Round(floatRow);
        float floatColumn;
        if (row % 2 != 0)
        {
            floatColumn = (snappedPosition.x - position1.x) / Constants.GAP + Constants.GAP;
        }
        else
        {
            floatColumn = (snappedPosition.x - position1.x) / Constants.GAP;
        }

        var column = (int)Mathf.Round(floatColumn);

        newGameObject.transform.position = snappedPosition;


        var gridMember = newGameObject.GetComponent<GridMember>();
        gridMember.enabled = true;

        gridMember.row = row;
        gridMember.column = column;
        if (kind == Constants.RANDOM_KIND)
        {
            gridMember.kind = (int)Random.Range(1f, 7f);
            var spriteRenderer = newGameObject.GetComponent<SpriteRenderer>();
            spriteRenderer.sprite = SpriteArray[gridMember.kind];
        }
        else
        {
            gridMember.kind = kind;
        }

        if (-row >= loseCountRow)
        {
            onGameOver?.Invoke();
        }

        grid[column, -row] = newGameObject;
        _counterBalls++;
        Seek(column, -row, gridMember.kind, direction, snappedPosition);
        Reload();
        return;
    }


    private Queue<GameObject> FireNeighborCounter(Vector2 direction, Vector3 position)
    {
        var circleHits = Physics2D.CircleCastAll(position, 0.235F, direction, 50f);
        var objectQueue = new Queue<GameObject>();
        foreach (var circleHit in circleHits)
        {
            if (circleHit.collider.CompareTag("Bubble"))
            {
                objectQueue.Enqueue(circleHit.collider.gameObject);
            }
        }
        return objectQueue;
    }

    private Queue<GameObject> LightingNeighborCounter(Queue<int[]> queue, bool[,] visited)
    {
        var objectQueue = new Queue<GameObject>();
        var top = queue.Dequeue();
        var gTop = grid[top[0], top[1]];
        if (gTop != null)
        {
            objectQueue.Enqueue(gTop);
        }

        var topIndex = top[1];

        for (var i = top[0] + 1; i < Constants.COLUMNS; i++)
        {
            var g = grid[i, topIndex];
            if (g == null) continue;
            objectQueue.Enqueue(g);
            visited[i, top[1]] = true;
        }

        for (var i = top[0] - 1; i >= 0; i--)
        {
            var g = grid[i, topIndex];
            if (g == null) continue;
            objectQueue.Enqueue(g);
            visited[i, top[1]] = true;
        }

        if (objectQueue.Count != 1) return objectQueue;

        topIndex--;
        for (var i = 0; i < Constants.COLUMNS; i++)
        {
            var g = grid[i, topIndex];
            if (g == null) continue;
            objectQueue.Enqueue(g);
            visited[i, top[1]] = true;
        }

        return objectQueue;
    }

    private Queue<GameObject> BombNeighborCounter(Vector3 position)
    {
        var circleHits = Physics2D.CircleCastAll(position, 1F, Vector2.zero, 0f);
        var objectQueue = new Queue<GameObject>();

        foreach (var circleHit in circleHits)
        {
            if (circleHit.collider.CompareTag("Bubble"))
            {
                objectQueue.Enqueue(circleHit.collider.gameObject);
            }
        }
        return objectQueue;
    }

    private Queue<GameObject> NeighborCounter(Queue<int[]> queue, bool[,] visited, int kind)
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
                if (neighbor[0] >= Constants.COLUMNS || neighbor[1] >= ROW_MAX || neighbor[0] < 0 || neighbor[1] < 0)
                {
                    continue;
                }

                var g = grid[neighbor[0], neighbor[1]];
                if (g == null) continue;
                var gridMember = g.GetComponent<GridMember>();
                if (gridMember.kind != kind && gridMember.kind - Constants.FIRST_LAYER_BALLS != kind && kind != -1) continue;
                if (visited[neighbor[0], neighbor[1]]) continue;
                visited[neighbor[0], neighbor[1]] = true;
                queue.Enqueue(neighbor);
            }
        }

        return objectQueue;
    }

    private void Seek(int column, int row, int kind, Vector2 direction, Vector3 position)
    {
        int[] pair = { column, row };

        var visited = new bool[Constants.COLUMNS, ROW_MAX];
        visited[column, row] = true;
        var queue = new Queue<int[]>();
        queue.Enqueue(pair);
        var objectQueue = kind switch
        {
            Constants.BOMB_KIND => BombNeighborCounter(position),
            Constants.LIGHTNING_KIND => LightingNeighborCounter(queue, visited),
            Constants.FIRE_KIND => FireNeighborCounter(direction, position),
            _ => NeighborCounter(queue, visited, kind)
        };
        if (objectQueue.Count >= 3 || kind is Constants.BOMB_KIND or Constants.LIGHTNING_KIND or Constants.FIRE_KIND)
        {
            while (objectQueue.Count != 0)
            {
                var g = objectQueue.Dequeue();
                if (!g.TryGetComponent<GridMember>(out var gm)) continue;
                if (gm.kind >= Constants.FIRST_LAYER_BALLS)
                {
                    gm.state = BubbleState.BreakFirstLayer;
                }
                else
                {
                    grid[gm.column, -gm.row] = null;
                    _counterBalls--;
                    gm.enabled = true;
                    gm.state = BubbleState.Pop;
                }
                _counterScore += Constants.DESTROY_BALL_SCORE;
            }

            onUpdateScore?.Invoke(_counterScore, _counterBalls);

        }

        CheckCeiling(0);
    }


    protected void CheckCeiling(int ceiling)
    {
        var visited = new bool[Constants.COLUMNS, ROW_MAX];

        var queue = new Queue<int[]>();

        for (var i = 0; i < Constants.COLUMNS; i++)
        {
            var pair = new[] { i, ceiling };
            if (grid[i, ceiling] == null) continue;
            visited[i, ceiling] = true;
            queue.Enqueue(pair);
        }

        var objectQueue = NeighborCounter(queue, visited, -1);

        if (objectQueue.Count == 0)
        {
            onGameWin?.Invoke();
        }

        for (var r = 0; r < ROW_MAX; r++)
        {
            for (var c = 0; c < Constants.COLUMNS; c++)
            {
                if (grid[c, r] == null || visited[c, r]) continue;
                if (!grid[c, r].TryGetComponent<GridMember>(out var gm)) continue;
                grid[gm.column, -gm.row] = null;
                _counterScore += Constants.FALLING_BALL_SCORE;
                _counterBalls--;
                gm.enabled = true;
                gm.state = BubbleState.Explode;
            }
        }

        onUpdateScore?.Invoke(_counterScore, _counterBalls);
    }
}