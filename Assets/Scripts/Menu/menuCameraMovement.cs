using System.Collections.Generic;
using UnityEngine;

public class menuCameraMovement : MonoBehaviour
{
    private Vector3 hit_position = Vector3.zero;
    private Vector3 current_position = Vector3.zero;
    private Vector3 camera_position = Vector3.zero;
    private float z = 0.0f;
    public GameObject[] segmentsToSpawn;
    private List<GameObject> spawnedSegments;
    private int currentObject;
    public float stepSize = 20.45f;

    private void Update(){
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
        var cameraMain = Camera.main;
        if (cameraMain == null) return;
        var direction = new Vector3(transform.position.x,(cameraMain.ScreenToWorldPoint(current_position) - cameraMain.ScreenToWorldPoint(hit_position)).y,z);
        
      
        // Invert direction to that terrain appears to move with the mouse.
        direction *= -1;

        spawnObjects(direction.y);
        var position = camera_position + direction;

        transform.position = position;
    }


    
    void spawnObjects(float direction)
    {
        if (transform.position.y % 90 == 0&&transform.position.y!=0)
        {
            Destroy(spawnedSegments[0]);
            Destroy(spawnedSegments[1]);
            Destroy(spawnedSegments[2]);
            spawnedSegments.RemoveRange(0,3);
        }

        if (transform.position.y % 40 != 0) return;
        var gameObjectList = new List<GameObject>();
        for (var i = 0; i < 3; i++)
        {
            gameObjectList.Add(Instantiate(segmentsToSpawn[currentObject]));
            gameObjectList[^1].transform.position = gameObjectList[^2].transform.position + new Vector3(0, stepSize , 0);
            currentObject++;
            if (currentObject > 5)
            {
                currentObject = 0;
            }
        }
        spawnedSegments.AddRange(gameObjectList);
    }
}

