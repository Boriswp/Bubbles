using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.EventSystems;

public static class Helpers
{
    public static bool isMoving;
    public static IEnumerator SmoothLerp(float time, Transform objectToTransform, Vector3 finalPos)
    {
        var startingPos = objectToTransform.position;
        float elapsedTime = 0;
        isMoving = true;
        while (elapsedTime < time)
        {
            objectToTransform.position = Vector3.Lerp(startingPos, finalPos, (elapsedTime / time));
            elapsedTime += Time.deltaTime;
            yield return null;
            objectToTransform.position = finalPos;
            isMoving = false;
        }
    }

    public static bool isUI(Vector2 position)
    {
        PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
        pointerEventData.position = position;
        List<RaycastResult> raycastResultsList = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerEventData, raycastResultsList);
        var mouseOverUI = false;
        for (int i = 0; i < raycastResultsList.Count; i++)
        {
            if (raycastResultsList[i].gameObject.GetType() == typeof(GameObject))
            {
                mouseOverUI = true;
                break;
            }
        }
        return mouseOverUI;
    }

    public static void WriteProfileDataToJson(ProfileData profileData)
    {
        var jsonFilePath = DataPath();
        if (!File.Exists(jsonFilePath))
        {
            File.Create(jsonFilePath).Close();
        }
        var dataString = JsonUtility.ToJson(profileData);
        File.WriteAllText(jsonFilePath, dataString);
    }

    public static ProfileData ReadProfileDataFromJson()
    {

        var jsonFilePath = DataPath();
        if (!File.Exists(jsonFilePath))
        {
            File.Create(jsonFilePath).Close();
            var newDataString = JsonUtility.ToJson(new ProfileData());
            File.WriteAllText(jsonFilePath, newDataString);
        }
        var dataString = File.ReadAllText(jsonFilePath);
        var loadedData = JsonUtility.FromJson<ProfileData>(dataString);
        return loadedData;
    }

    public static int CalculateStars(int score, int scoreOne, int scoreTwo, int scoreThree)
    {
        if (score >= scoreOne && score < scoreTwo)
        {
            return 1;
        }

        if (score >= scoreTwo && score < scoreThree)
        {
            return 2;
        }

        return score >= scoreThree ? 3 : 0;
    }

    private static string DataPath()
    {
        return Path.Combine(Directory.Exists(Application.persistentDataPath) ? Application.persistentDataPath : Application.streamingAssetsPath, Constants.JSON_FILE_NAME);
    }

    public static Tuple<int, List<int>> GetLastRowAndColors(GameObject[,] objects, int rows, int columns)
    {
        var lastRow = 0;
        var listColors = new List<int>();
        for (var r = 0; r < rows; r++)
        {
            for (var c = 0; c < columns; c++)
            {
                if (objects[c, r] == null)
                {
                    continue;
                }
                var newKind = objects[c, r].GetComponent<GridMember>().kind;
                if (!listColors.Contains(newKind))
                {
                    listColors.Add(newKind);
                }
                lastRow = r;
            }
        }
        return Tuple.Create(lastRow, listColors);
    }

    public static Vector2 GetAccuratePos(Vector2 position)
    {
        if (position.x > 0)
        {
            position.x += 0.35f;
        }
        else
        {
            position.x -= 0.35f;
        }
        return position;
    }
}
