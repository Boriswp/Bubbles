using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;

public class menuCameraMovement : MonoBehaviour
{
    private Vector3 hit_position = Vector3.zero;
    private Vector3 current_position = Vector3.zero;
    private Vector3 camera_position = Vector3.zero;
    private readonly float z = 0.0f;
    public TextMeshProUGUI currentLvlText;
    public GameObject[] segmentsToSpawn;
    private List<GameObject> spawnedSegments = new();
    private int currentObject;
    private int counter;
    private int totalObjects;
    public float stepSize = 20.4f;
    private Camera cameraMain;
    private float previousPos;
    private Vector2 worldStartPoint;

    private void Awake()
    {
        Screen.orientation = ScreenOrientation.Portrait;
        if (DataLoader.isInitialize)
        {
            Initialization();
        }

        DataLoader.onDataInitialize += Initialization;
    }

    private void OnDisable()
    {
        DataLoader.onDataInitialize -= Initialization;
    }

    private void Initialization()
    {
        cameraMain = Camera.main;
        totalObjects = (DataLoader.lvls.Length - 1) / 13 + 2;
        currentLvlText.text = (DataLoader.GetCurrentLvl() + 1).ToString();
        SpawnObjects();
    }

    private void Update()
    {
#if UNITY_EDITOR || UNITY_WEBGL || UNITY_STANDALONE_WIN
        mouseLogic();
#else
        touchLogic();
#endif
    }

    private void mouseLogic()
    {
        if (Input.GetMouseButtonDown(0))
        {
            hit_position = Input.mousePosition;
            camera_position = Camera.main.transform.position;
        }
        else if (Input.GetMouseButton(0))
        {
            current_position = Input.mousePosition;
            if (Helpers.isUI(current_position)) return;
            LeftMouseDrag();
        }
    }

    private void touchLogic()
    {
        if (Input.touchCount > 0)
        {
            Touch currentTouch = Input.touches[0];

            if (currentTouch.phase == TouchPhase.Began)
            {
                hit_position = currentTouch.position;
                camera_position = Camera.main.transform.position;
            }

            if (currentTouch.phase == TouchPhase.Moved)
            {
                current_position = currentTouch.position;
                if (Helpers.isUI(current_position)) return;
                LeftMouseDrag();
            }

        }
    }



    private void LeftMouseDrag()
    {
        current_position.z = hit_position.z = camera_position.y;
        if (cameraMain == null) return;
        var direction = new Vector3(camera_position.x,
            (cameraMain.ScreenToWorldPoint(current_position) - cameraMain.ScreenToWorldPoint(hit_position)).y, z);

        direction *= -1;

        var position = camera_position + direction;
        if (position.y > spawnedSegments[^2].transform.position.y + stepSize / 2 )
        {
            position.y = spawnedSegments[^2].transform.position.y + stepSize / 2;
        }
        if (position.y < 0)
        {
            position.y = 0;
        }
        SpawnObjects();
        Camera.main.transform.position = position;
    }



    // convert screen point to world point
    private Vector2 getWorldPoint(Vector2 screenPoint)
    {
        RaycastHit hit;
        Physics.Raycast(Camera.main.ScreenPointToRay(screenPoint), out hit);
        return hit.point;
    }

    private void SpawnObjects()
    {
        var pos = Camera.main.transform.position.y;

        if (pos % 60 > Mathf.Epsilon + 1 || previousPos > pos)
        {
            return;
        }

        for (var i = 0; i < 3; i++)
        {
            if (totalObjects <= spawnedSegments.Count) return;
            spawnedSegments.Add(Instantiate(segmentsToSpawn[currentObject]));
            currentObject++;
            if (currentObject > 4)
            {
                currentObject = 0;
            }
            if (spawnedSegments.Count > totalObjects) return;
            var buttons = spawnedSegments[^1].GetComponentsInChildren<menuButtonController>();
            foreach (var button in buttons)
            {
                if (counter > DataLoader.lvls.Length - 1) button.setUpLvl(-1, 0, false, false);
                button.setUpLvl(counter, DataLoader.GetStarsCount(counter), counter == DataLoader.GetCurrentLvl(),
                    counter <= DataLoader.GetCurrentLvl());
                counter++;
            }

            if (spawnedSegments.Count <= 1) continue;
            spawnedSegments[^1].transform.position =
                spawnedSegments[^2].transform.position + new Vector3(0, stepSize, 0);
        }

        previousPos = pos;
    }
}