using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrajectoryRay : MonoBehaviour
{
    public Transform firePosition;
    public int maximumReflectionCount = 5;
    public float maximumRayCastDistance = 50f;

    LineRenderer lineRenderer;

    List<Vector3> reflectionPositions = new();

    private void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.startWidth = 0.1f;
        lineRenderer.endWidth = 0.1f;
    }

    private void Update()
    {
        DrawCurrentTrajectory();
    }

    private void DrawCurrentTrajectory()
    {
        reflectionPositions.Clear();

        Vector2 position = transform.position;
        Vector2 direction = Vector2.up;

        reflectionPositions.Add(position);

        for (var i = 0; i <= maximumReflectionCount; ++i)
        {
            var hit = Physics2D.Raycast(position, direction, maximumRayCastDistance);
            if (!hit) continue;
            position = hit.point + hit.normal * 0.00001f;
            direction = Vector2.Reflect(direction, hit.normal);

            reflectionPositions.Add(position);
        }

        lineRenderer.positionCount = reflectionPositions.Count;
        lineRenderer.SetPositions(reflectionPositions.ToArray());
    }
}
