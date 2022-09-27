using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{

    private void OnEnable()
    {
        BaseGameGridManager.onUpdateTarget += MoveObjects;
    }

    private void OnDisable()
    {
        BaseGameGridManager.onUpdateTarget -= MoveObjects;
    }

    private void MoveObjects(Vector2 target)
    {
        var newTarget = new Vector2(target.x, target.y - Camera.main.ScreenPointToRay(new Vector3(0, 0.5f, 0)).origin.x);
        StartCoroutine(Helpers.SmoothLerp(0.7F, gameObject.transform, newTarget));
    }
}
