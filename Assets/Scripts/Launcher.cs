using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Random = UnityEngine.Random;

public class Launcher : MonoBehaviour
{
    public GameObject ball;
    public GameObject load;
    public GameObject nextColorBall;
    public int maximumReflectionCount = 5;
    public float maximumRayCastDistance = 50f;
    private int currentKindColor;
    private bool isSpecialBall = false;
    private int nextKindColor;
    LineRenderer lineRenderer;
    readonly List<Vector3> reflectionPositions = new();
    private BaseGameGridManager gameGridManager;
    

    private void Awake()
    {
        nextKindColor = Random.Range(0, 7);
        gameGridManager = GetComponent<BaseGameGridManager>();
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.startWidth = 0.75f;
        lineRenderer.endWidth = 0.75f;
    }
    

    public void SetUpSpecialBall(int kind)
    {
        isSpecialBall = true;
        currentKindColor = kind;
        Load();
    }

    public void UnSetUpSpecialBall()
    {
        isSpecialBall = false;
        Load();
    }

    public void OnEnable()
    {
        BaseGameGridManager.onReadyToLoad += Load;
    }

    public void OnDisable()
    {
        BaseGameGridManager.onReadyToLoad -= Load;
    }


    private void Update()
    {
        Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        var delta = mousePos - (Vector2)transform.parent.position;
        var zRotation = 90 - Mathf.Rad2Deg * Mathf.Atan2(delta.x, delta.y);
        lineRenderer.startColor = BaseGridManager.ColorArray[currentKindColor];
        lineRenderer.endColor = BaseGridManager.ColorArray[currentKindColor];
        if (zRotation is < 10 or > 170)
        {
            return;
        } 
        transform.parent.rotation = Quaternion.Euler(0f, 0f, zRotation);
        DrawCurrentTrajectory(delta);
    }

    public void Load()
    {
        
        var colorArray = gameGridManager.UpdateLvlInfo();
        if (!isSpecialBall)
        {
            //if (load != null) return;
            nextColorBall.SetActive(true);
            currentKindColor = nextKindColor;
            if (colorArray.Count > 0)
            {
                var index = Random.Range(0, colorArray.Count);
                nextKindColor = colorArray[index];
            }
            else
            {
                nextKindColor = Random.Range(0, 7);
            }

            nextColorBall.GetComponent<SpriteRenderer>().sprite = BaseGridManager.SpriteArray[nextKindColor];
        }
        else
        {
            nextColorBall.SetActive(false);
            Destroy(load);
        }
        load = Instantiate(ball, transform.parent.position, Quaternion.identity, transform.parent.parent);
        load.SetActive(true);
        var circleCollider2D = load.GetComponent<CircleCollider2D>();
        circleCollider2D.enabled = false;
        var hitter = load.GetComponent<Hitter>();
        hitter.kind = currentKindColor;
        hitter.enabled = true;
        hitter.gameGridManager = gameGridManager;
    }

    public void Fire()
    {
        if (Helpers.isMoving) return;
        if (load == null) return;
        var circleCollider2D = load.GetComponent<CircleCollider2D>();
        circleCollider2D.enabled = true;
        load.transform.parent = transform.parent.parent.parent;
        var rb = load.GetComponent<Rigidbody2D>();
        rb.velocity = transform.right * Constants.LAUNCH_SPEED;
        load = null;
    }

    private void DrawCurrentTrajectory(Vector2 inputDirection)
    {
        reflectionPositions.Clear();

        Vector2 position = new(transform.position.x, transform.position.y);
        var direction = inputDirection;

        reflectionPositions.Add(position);

        for (var i = 0; i <= maximumReflectionCount; ++i)
        {
            var circleHit = Physics2D.CircleCast(position, 0.25F, direction, maximumRayCastDistance);
            if (!circleHit) continue;
            position = circleHit.point + circleHit.normal * 0.25f;
            var newPos = Helpers.GetAccuratePos(position);

            if (circleHit.collider.CompareTag("Bubble"))
            {
                reflectionPositions.Add(position);
                break;
            }
            else
            {
                reflectionPositions.Add(newPos);
            }
            direction = Vector2.Reflect(direction, circleHit.normal);
        }
        lineRenderer.positionCount = reflectionPositions.Count;
        lineRenderer.SetPositions(reflectionPositions.ToArray());
    }
}
