using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

public class ConstructorGridManager : BaseGridManager
{
    const int COL_MAX = 8;
    const int ROW_MAX = 20;

    private void Awake()
    {
        grid = new GameObject[COL_MAX, ROW_MAX];
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
                if(grid[c,r] ==null) continue;
                Destroy(grid[c,r]);
                grid[c, r] = null;
            }
        }
    }

    public void Generate()
    {
        
    }

    public void SaveToJson()
    {
        var bubbles = new List<BubbleSerialized>();
        for (var r = 0; r < ROW_MAX; r++)
        {
            for (var c = 0; c < COL_MAX; c++)
            {
                if(grid[c,r]==null) continue;
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
       
        var saveData = new SaveData
        {
            columnCount = COL_MAX,
            rowCount = ROW_MAX,
            bubbles = bubbles
        };
        
        var jsonString = JsonUtility.ToJson(saveData);
        var path = EditorUtility.SaveFilePanel( "Save Json", Application.persistentDataPath, "level" + ".json", "json" );
        if (path.Length != 0)
        {
            File.WriteAllText(path, jsonString);
        }
    }
    
}
