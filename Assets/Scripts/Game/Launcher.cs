using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Random = UnityEngine.Random;
using TMPro;

public class Launcher : MonoBehaviour
{
    public GameObject ball;
    public GameObject load;
    public GameObject nextColorBall;
    public GameObject cancell;
    public GameObject rowBalls;
    public TextMeshProUGUI[] bombs;
    public int maximumReflectionCount = 5;
    public float maximumRayCastDistance = 50f;
    private int currentKindColor;
    private bool isSpecialBall;
    private bool firstLaunch = true;
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
        SetUpCountSpecialBalls();
    }

    private void SetUpCountSpecialBalls()
    {
        bombs[0].text = DataLoader.GetBombsCount().ToString();
        bombs[1].text = DataLoader.GetLightsCount().ToString();
        bombs[2].text = DataLoader.GetFireBallCount().ToString();
        bombs[3].text = DataLoader.GetRainbowCount().ToString();
    }

    public void SetUpSpecialBall(int kind)
    {
        switch (kind)
        {
            case Constants.BOMB_KIND:
                if (DataLoader.GetBombsCount() == 0) return;
                break;
            case Constants.FIRE_KIND:
                if (DataLoader.GetFireBallCount() == 0) return;
                break;
            case Constants.RANDOM_KIND:
                if (DataLoader.GetRainbowCount() == 0) return;
                break;
            case Constants.LIGHTNING_KIND:
                if (DataLoader.GetLightsCount() == 0) return;
                break;
        }
        cancell.SetActive(true);
        rowBalls.SetActive(false);
        nextColorBall.SetActive(false);
        isSpecialBall = true;
        currentKindColor = kind;
        var hitter = load.GetComponent<Hitter>();
        hitter.kind = currentKindColor;
        hitter.gameGridManager = gameGridManager;
        hitter.Start();
    }

    public void UnSetUpSpecialBall()
    {
        isSpecialBall = false;
        cancell.SetActive(false);
        rowBalls.SetActive(true);
        nextColorBall.SetActive(true);
    }

    public void UnSetUpSpecialBall(int kind)
    {
        switch (kind)
        {
            case Constants.BOMB_KIND:
                DataLoader.DecreaseBombsCount();
                break;
            case Constants.FIRE_KIND:
                DataLoader.DecreaseFireBallCount();
                break;
            case Constants.RANDOM_KIND:
                DataLoader.DecreaseRainbowCount();
                break;
            case Constants.LIGHTNING_KIND:
                DataLoader.DecreaseLightsCount();
                break;
        }
        UnSetUpSpecialBall();
    }

    public void OnColorChange()
    {
        var temp = currentKindColor;
        currentKindColor = nextKindColor;
        nextKindColor = temp;
        var hitter = load.GetComponent<Hitter>();
        hitter.kind = currentKindColor;
        hitter.gameGridManager = gameGridManager;
        hitter.Start();
        nextColorBall.GetComponent<SpriteRenderer>().sprite = BaseGridManager.SpriteArray[nextKindColor];
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
        lineRenderer.materials[0].color = BaseGridManager.ColorArray[currentKindColor];
        if (zRotation is < 10 or > 170)
        {
            return;
        }
        transform.parent.rotation = Quaternion.Euler(0f, 0f, zRotation);
        DrawCurrentTrajectory(delta);
    }

    private void Load()
    {

        var colorArray = gameGridManager.UpdateLvlInfo(isSpecialBall);
        nextColorBall.SetActive(true);
        if (firstLaunch)
        {
            var index = Random.Range(0, colorArray.Count);
            nextKindColor = colorArray[index];
            firstLaunch = false;

        }
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
        load = Instantiate(ball, transform.parent.position, Quaternion.identity, transform.parent.parent);
        load.SetActive(true);
        var circleCollider2D = load.GetComponent<CircleCollider2D>();
        circleCollider2D.enabled = false;
        var hitter = load.GetComponent<Hitter>();
        hitter.kind = currentKindColor;
        hitter.gameGridManager = gameGridManager;
        hitter.enabled = true;
    }

    public void Fire()
    {
        if (Helpers.isMoving) return;
        if (load == null) return;
        var circleCollider2D = load.GetComponent<CircleCollider2D>();
        circleCollider2D.enabled = true;
        load.transform.parent = transform.parent.parent.parent;
        var rb = load.GetComponent<Rigidbody2D>();
        rb.bodyType = RigidbodyType2D.Dynamic;
        rb.velocity = transform.right * Constants.LAUNCH_SPEED;
        load = null;
        if (isSpecialBall)
        {
            UnSetUpSpecialBall(currentKindColor);
        }
    }

    private void DrawCurrentTrajectory(Vector2 inputDirection)
    {
        reflectionPositions.Clear();

        Vector2 position = new(transform.position.x, transform.position.y);
        var direction = inputDirection;

        reflectionPositions.Add(position);

        for (var i = 0; i <= maximumReflectionCount; ++i)
        {
            var circleHit = Physics2D.CircleCast(position, 0.15F, direction, maximumRayCastDistance);
            if (!circleHit) continue;
            position = circleHit.point + circleHit.normal * 0.23f;
            var newPos = Helpers.GetAccuratePos(position);

            if (circleHit.collider.CompareTag("Bubble") || circleHit.collider.CompareTag("Destroyer"))
            {
                Vector2 newHitPos = new(circleHit.transform.position.x, circleHit.transform.position.y);
                reflectionPositions.Add(newHitPos + circleHit.normal * 0.23f);
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
