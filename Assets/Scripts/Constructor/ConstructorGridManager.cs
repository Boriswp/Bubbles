using System.Collections.Generic;
using System.IO;
using SimpleFileBrowser;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class ConstructorGridManager : BaseGridManager
{
    const int ROW_MAX = 500;

    public TMP_InputField ballCountText;
    public TMP_InputField oneStarScore;
    public TMP_InputField twoStarScore;
    public TMP_InputField threeStarScore;
    public GameObject root;
    private string tempLvlPath = string.Empty;


    private void Awake()
    {
        tempLvlPath = $"{Application.persistentDataPath}/lvl.json";
        grid = new GameObject[Constants.COLUMNS, ROW_MAX];
        LoadSpriteRes();
        LoadSaveData(tempLvlPath);
    }

    public void DeleteThis(Vector2 position)
    {
        var snappedPosition = Snap(position);
        var position1 = initialPos.transform.position;
        var row = (int)Mathf.Round((snappedPosition.y - position1.y) / Constants.GAP);
        int column;
        if (row % 2 != 0)
        {
            column = (int)Mathf.Round((snappedPosition.x - position1.x) / Constants.GAP + Constants.GAP);
        }
        else
        {
            column = (int)Mathf.Round((snappedPosition.x - position1.x) / Constants.GAP);
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

    public void CreateChain(Vector2 position, Transform parent = null)
    {
        var snappedPosition = Snap(position);
        var position1 = initialPos.transform.position;
        var row = (int)Mathf.Round((snappedPosition.y - position1.y) / Constants.GAP);
        int column;
        if (row % 2 != 0)
        {
            column = (int)Mathf.Round((snappedPosition.x - position1.x) / Constants.GAP + Constants.GAP);
        }
        else
        {
            column = (int)Mathf.Round((snappedPosition.x - position1.x) / Constants.GAP);
        }
        try
        {
            if (grid[column, -row] == null) return;
            var gridMember = grid[column, -row].GetComponent<GridMember>();
            if (gridMember.kind >= Constants.FIRST_LAYER_BALLS) return;
            gridMember.kind += Constants.FIRST_LAYER_BALLS;
            gridMember.EnableChain();
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
            for (var c = 0; c < Constants.COLUMNS; c++)
            {
                if (grid[c, r] == null) continue;
                Destroy(grid[c, r]);
                grid[c, r] = null;
                root.transform.position = new Vector3(root.transform.position.x, 0, root.transform.position.z);
            }
        }
    }

    public void Generate(List<int> kinds, int rowFrom, int rowTo, int columnFrom, int columnTo, int hole, int chain)
    {

        for (var r = rowFrom; r < rowTo; r++)
        {
            for (var c = columnFrom; c < columnTo; c++)
            {
                if (Random.Range(1f, 100f) <= hole)
                {
                    continue;
                }
                else
                {
                    Creator(c, r, kinds, chain);
                }
            }
        }
    }

    public void Creator(int column, int row, List<int> kinds, int chain)
    {
        var position = new Vector3(column * Constants.GAP, -row * Constants.GAP, 0f) + initialPos.transform.position;
        var index = Random.Range(0, kinds.Count);
        var newKind = kinds[index];
        if (Random.Range(1f, 100f) <= chain)
        {
            newKind += Constants.FIRST_LAYER_BALLS;
        }
        Create(position, newKind, false, root.transform);
    }

    public void Creator(int column, int row, int kind)
    {
        var position = new Vector3(column * Constants.GAP, row * Constants.GAP, 0f) + initialPos.transform.position;
        Create(position, kind, false, root.transform);
    }

    void OnApplicationQuit()
    {
        CreateTempFile();
    }

    public void CreateTempFileAndLoadData()
    {
        CreateTempFile();
        DataLoader.testMode = true;
        SceneManager.LoadScene("Levels");
    }

    private void CreateTempFile()
    {
        var jsonString = JsonUtility.ToJson(prepareSaveData());
        File.WriteAllText(tempLvlPath, jsonString);
    }

    public void LoadFromJson()
    {
        FileBrowser.ShowLoadDialog((path) =>
        {
            LoadSaveData(path[0]);
        }, null, FileBrowser.PickMode.Files
        );
    }

    public void SaveToJson()
    {
        var jsonString = JsonUtility.ToJson(prepareSaveData());
        FileBrowser.ShowSaveDialog((path) =>
        {
            if (path.Length != 0)
            {
                File.WriteAllText(path[0], jsonString);
            };
        }, null, FileBrowser.PickMode.Files, initialFilename: "level.json");
    }

    private void LoadSaveData(string path)
    {
        try
        {
            var fileContents = File.ReadAllText(path);
            var gameData = JsonUtility.FromJson<SaveData>(fileContents);
            ballCountText.text = gameData.playerBallCount.ToString();
            oneStarScore.text = gameData.oneStarScore.ToString();
            twoStarScore.text = gameData.twoStarScore.ToString();
            threeStarScore.text = gameData.threeStarScore.ToString();
            foreach (var data in gameData.bubbles)
            {
                Creator(data.column, data.row, data.kind);
            }
            root.transform.position = new Vector3(root.transform.position.x, 0, root.transform.position.z);
        }
        catch (FileNotFoundException)
        {

        }
    }

    private SaveData prepareSaveData()
    {
        var bubbles = new List<BubbleSerialized>();
        for (var r = 0; r < ROW_MAX; r++)
        {
            for (var c = 0; c < Constants.COLUMNS; c++)
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
            columnCount = Constants.COLUMNS,
            rowCount = ROW_MAX,
            bubbles = bubbles
        };
        return saveData;
    }

}
