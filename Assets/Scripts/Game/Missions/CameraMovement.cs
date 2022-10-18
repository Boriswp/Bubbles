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
        var newTarget = new Vector2(target.x, target.y+ Constants.CAMERA_STRIDE);
        StartCoroutine(Helpers.SmoothLerp(0.7F, gameObject.transform, newTarget));
    }
}
