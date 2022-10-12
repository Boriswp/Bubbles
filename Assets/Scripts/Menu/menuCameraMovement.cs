
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class menuCameraMovement : MonoBehaviour
{
    private Vector3 hit_position = Vector3.zero;
    private Vector3 current_position = Vector3.zero;
    private Vector3 camera_position = Vector3.zero;
    private readonly float z = 0.0f;
    public GameObject[] segmentsToSpawn;
    private List<GameObject> spawnedSegments = new();
    private int currentObject;
    private int counter;
    private int totalObjects;
    public float stepSize = 20.4f;
    private Camera cameraMain;
    private float previousPos;

    private void Awake()
    {
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
        totalObjects = (DataLoader.lvls.Length - 1) / 13 + 1;
        SpawnObjects();
    }

    private void FixedUpdate(){
        if(Input.GetMouseButtonDown(0)){
            hit_position = Input.mousePosition;
            camera_position = transform.position;
        }

        if (!Input.GetMouseButton(0)) return;
        current_position = Input.mousePosition;
        LeftMouseDrag();
    }

    private void LeftMouseDrag(){
  
        current_position.z = hit_position.z = camera_position.y;
        if (cameraMain == null) return;
        var direction = new Vector3(transform.position.x,(cameraMain.ScreenToWorldPoint(current_position) - cameraMain.ScreenToWorldPoint(hit_position)).y,z);
        
        // Invert direction to that terrain appears to move with the mouse.
        direction *= -1;
        
        var position = camera_position + direction;

        if(position.y<-1) return;
        SpawnObjects();
        transform.position = position;
    }


    private void SpawnObjects()
    {
        var pos = transform.position.y;
        
        if(pos%60 > Mathf.Epsilon+1||previousPos>pos)
        {
            return;
        }
           
        for (var i = 0; i < 3; i++)
        {
            if(totalObjects <= spawnedSegments.Count) return;
            spawnedSegments.Add(Instantiate(segmentsToSpawn[currentObject]));
            currentObject++;
            if (currentObject > 4)
            {
                currentObject = 0;
            }

            var buttons = spawnedSegments[^1].GetComponentsInChildren<menuButtonController>();
            foreach (var button in buttons)
            {
                if(counter > DataLoader.lvls.Length - 1)  button.setUpLvl(-1,0,false,false);;
                button.setUpLvl(counter,DataLoader.GetStarsCount(counter),counter==DataLoader.GetCurrentLvl(), counter<=DataLoader.GetCurrentLvl());
                counter++;
            }
            if(spawnedSegments.Count <= 1) continue;
            spawnedSegments[^1].transform.position =
                spawnedSegments[^2].transform.position + new Vector3(0, stepSize, 0);
        }
        previousPos = pos;
    }
}

