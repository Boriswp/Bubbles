using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scroll : MonoBehaviour
{
    private Vector3 hit_position = Vector3.zero;
    private Vector3 current_position = Vector3.zero;
    private Vector3 object_position = Vector3.zero;
    private readonly float z = 0.0f;
    public bool enableScroll = false;
    private Camera cameraMain;
    // Start is called before the first frame update
    void Start()
    {
        cameraMain = Camera.main;
    }


    public void OnRealScroll()
    {

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(enableScroll)
        mouseLogic();
    }

    private void mouseLogic()
    {
        if (Input.GetMouseButtonDown(0))
        {
            hit_position = Input.mousePosition;
            object_position = transform.position;
        }

        if (!Input.GetMouseButton(0)) return;
        current_position = Input.mousePosition;
        if (current_position.y - hit_position.y < 1f) return;
        LeftMouseDrag();
    }


    private void LeftMouseDrag()
    {
        current_position.z = hit_position.z = object_position.y;
        if (cameraMain == null) return;
        if (transform.childCount == 0) return;
        var direction = new Vector3(transform.position.x,
            (cameraMain.ScreenToWorldPoint(current_position) - cameraMain.ScreenToWorldPoint(hit_position)).y, z);

        // Invert direction to that terrain appears to move with the mouse.
        //direction *= -1;

        var position = object_position + direction;
        transform.position = new Vector3(0,position.y,transform.position.z);
    }
}
