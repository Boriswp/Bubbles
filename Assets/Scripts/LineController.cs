using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class LineController : MonoBehaviour
{  
    LineRenderer lineRenderer;
    readonly List<Vector3> points = new();
    private Vector2 startPoint;

    public int maximumPointCount;
    // Start is called before the first frame update
    void Awake()
    {
        startPoint = transform.position;
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.startWidth = 0.75f;
        lineRenderer.endWidth = 0.75f;
        DrawCurrentTrajectory();
    }

    private void DrawCurrentTrajectory()
    {
        points.Add(startPoint);

        for (var i = 0; i <= maximumPointCount; ++i)
        {
            points.Add(i % 2 == 0
                ? new Vector3((startPoint.x + 2f), startPoint.y + 2f * i, 0)
                : new Vector3((startPoint.x - 2f), startPoint.y + 2f * i, 0));
        }
        lineRenderer.positionCount = points.Count;
        lineRenderer.SetPositions(points.ToArray());
    }
}
