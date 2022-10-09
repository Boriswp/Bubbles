using System.Collections.Generic;
using System.IO;
using SimpleFileBrowser;
using UnityEngine;
using TMPro;

public class ConstructorGridManager : BaseGridManager
{
    const int COL_MAX = 8;
    const int ROW_MAX = 20;

    public TMP_InputField ballCountText;
    public TMP_InputField oneStarScore;
    public TMP_InputField twoStarScore;
    public TMP_InputField threeStarScore;


    private void Awake()
    {
        grid = new GameObject[COL_MAX, ROW_MAX];
        LoadRes();
    }

    public void DeleteThis(Vector2 position)
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
            if (grid[column, -row] == null) return;
            Destroy(grid[column, -row]);
            grid[column, -row] = null;
        }
        catch (System.IndexOutOfRangeException)
        {
            Debug.Log($"wrong coord {position}");
        }
    }

    public void ClearAll()
    {
        for (var r = 0; r < ROW_MAX; r++)
        {
            for (var c = 0; c < COL_MAX; c++)
            {
                if (grid[c, r] == null) continue;
                Destroy(grid[c, r]);
                grid[c, r] = null;
            }
        }
    }

    public void Generate(List<int> kinds, int rowFrom, int rowTo, int columnFrom, int columnTo)
    {
        for (var r = rowFrom; r < rowTo; r++)
        {
            for (var c = columnFrom; c < columnTo; c++)
            {
                Creator(c, r, kinds);
            }
        }
    }

    public void Creator(int column, int row, List<int> kinds)
    {
        var position = new Vector3(column * gap, -row * gap, 0f) + initialPos.transform.position;
        var index = Random.Range(0, kinds.Count);
        var newKind = kinds[index];

        Create(position, newKind, false);
    }

    public void Creator(int column, int row, int kind)
    {
        var position = new Vector3(column * gap, row * gap, 0f) + initialPos.transform.position;
        Create(position, kind, false);
    }

    public void LoadFromJson()
    {
        FileBrowser.ShowLoadDialog((path) =>
        {
            var fileContents = File.ReadAllText(path[0]);
            var gameData = JsonUtility.FromJson<SaveData>(fileContents);
            ballCountText.text = gameData.playerBallCount.ToString();
            oneStarScore.text = gameData.oneStarScore.ToString();
            twoStarScore.text = gameData.twoStarScore.ToString();
            threeStarScore.text = gameData.threeStarScore.ToString();
            foreach (var data in gameData.bubbles)
            {
                Creator(data.column, data.row, data.kind);
            }
        }, null, FileBrowser.PickMode.Files
        );
    }

    public void SaveToJson()
    {
        var bubbles = new List<BubbleSerialized>();
        for (var r = 0; r < ROW_MAX; r++)
        {
            for (var c = 0; c < COL_MAX; c++)
            {
                if (grid[c, r] == null) continue;
                var gridMember = grid[c, r].GetComponent<GridMember>();
                var bubbleToSave = new BubbleSerialized()
                {
                    column = gridMember.column,
                    row = gridMember.row,
                    kind = gridMember.kind
                };
                bubbles.Add(bubbleToSave);
            }
        }
        int.TryParse(ballCountText.text, out var ballCount);
        int.TryParse(oneStarScore.text, out var oneScore);
        int.TryParse(twoStarScore.text, out var twoScore);
        int.TryParse(threeStarScore.text, out var threeScore);
        var saveData = new SaveData
        {
            playerBallCount = ballCount,
            oneStarScore = oneScore,
            twoStarScore = twoScore,
            threeStarScore = threeScore,
            columnCount = COL_MAX,
            rowCount = ROW_MAX,
            bubbles = bubbles
        };

        var jsonString = JsonUtility.ToJson(saveData);
        FileBrowser.ShowSaveDialog((path) =>
        {
            if (path.Length != 0)
            {
                File.WriteAllText(path[0], jsonString);
            };
        }, null, FileBrowser.PickMode.Files, initialFilename: "level.json");
    }

}
