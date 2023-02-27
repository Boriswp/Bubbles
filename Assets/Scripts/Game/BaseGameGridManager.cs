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

    public void CreateSimple(GameObject newGameObject, int kind)
    {
        ready = false;
        var position = newGameObject.transform.position;
        while (true)
        {
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

            if (grid[column, -row] != null)
            {
                if (grid[column, -(row - 1)] != null)
                {
                    position = grid[column, -row].transform.position.x > position.x
                        ? new Vector2(position.x - Constants.GAP / 2, position.y)
                        : new Vector2(position.x + Constants.GAP / 2, position.y);
                }
                else
                {
                    position = new Vector2(position.x, position.y - Constants.GAP);
                }

                continue;
            }

            newGameObject.transform.position = snappedPosition;
            var circleCollider2D = newGameObject.GetComponent<CircleCollider2D>();
            circleCollider2D.isTrigger = true;

            var rb = newGameObject.GetComponent<Rigidbody2D>();
            rb.velocity = Vector2.zero;

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

            if (row == -loseCountRow)
                onGameOver?.Invoke();

            grid[column, -row] = newGameObject;
            _counterBalls++;
            Seek(column, -row, gridMember.kind);
            onReadyToLoad?.Invoke();
            ready = true;
            return;
        }
    }


    private Queue<GameObject> FireNeighborCounter(Queue<int[]> queue, bool[,] visited)
    {
        var objectQueue = new Queue<GameObject>();
        var top = queue.Dequeue();
        var gTop = grid[top[0], top[1]];
        if (gTop != null)
        {
            objectQueue.Enqueue(gTop);
        }

        var j = top[0];
        for (var i = top[1]; i >= 0; i--)
        {
            var jNext = i % 2 == 0 && j > 0 ? j - 1 : j + 1;

            if (j is < 0 or >= Constants.COLUMNS)
            {
                break;
            }

            var g = grid[j, i];
            if (g != null)
            {
                objectQueue.Enqueue(g);
                visited[j, i] = true;
            }

            if (jNext is < 0 or >= Constants.COLUMNS)
            {
                break;
            }

            var gnext = grid[jNext, i];
            if (gnext == null) continue;
            objectQueue.Enqueue(gnext);
            visited[jNext, i] = true;
            switch (top[0])
            {
                case < 5:
                    j--;
                    break;
                case > 5:
                    j++;
                    break;
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

    private Queue<GameObject> BombNeighborCounter(Queue<int[]> queue, bool[,] visited)
    {
        var objectQueue = new Queue<GameObject>();

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
            if (visited[neighbor[0], neighbor[1]]) continue;
            visited[neighbor[0], neighbor[1]] = true;
            objectQueue.Enqueue(g);
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
                if (gridMember.kind != kind && kind != -1) continue;
                if (visited[neighbor[0], neighbor[1]]) continue;
                visited[neighbor[0], neighbor[1]] = true;
                queue.Enqueue(neighbor);
            }
        }

        return objectQueue;
    }

    private void Seek(int column, int row, int kind)
    {
        int[] pair = { column, row };

        var visited = new bool[Constants.COLUMNS, ROW_MAX];
        visited[column, row] = true;
        var queue = new Queue<int[]>();
        queue.Enqueue(pair);
        var objectQueue = kind switch
        {
            Constants.BOMB_KIND => BombNeighborCounter(queue, visited),
            Constants.LIGHTNING_KIND => LightingNeighborCounter(queue, visited),
            Constants.FIRE_KIND => FireNeighborCounter(queue, visited),
            _ => NeighborCounter(queue, visited, kind)
        };
        Debug.Log($"{objectQueue.Count}");
        if (objectQueue.Count >= 3 || kind is Constants.BOMB_KIND or Constants.LIGHTNING_KIND or Constants.FIRE_KIND)
        {
            while (objectQueue.Count != 0)
            {
                var g = objectQueue.Dequeue();

                if (!g.TryGetComponent<GridMember>(out var gm)) continue;
                grid[gm.column, -gm.row] = null;
                _counterScore += Constants.DESTROY_BALL_SCORE;
                _counterBalls--;
                gm.enabled = true;
                gm.state = BubbleState.Pop;
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