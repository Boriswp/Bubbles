using UnityEngine;

public class menuCameraMovement : MonoBehaviour
{
    private Vector3 hit_position = Vector3.zero;
    private Vector3 current_position = Vector3.zero;
    private Vector3 camera_position = Vector3.zero;
    private float z = 0.0f;

    private void Start () {

    }

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

        var direction = Camera.main.ScreenToWorldPoint(current_position) - Camera.main.ScreenToWorldPoint(hit_position);

        // Invert direction to that terrain appears to move with the mouse.
        direction *= -1;

        var position = camera_position + direction;

        transform.position = position;
    }
}
