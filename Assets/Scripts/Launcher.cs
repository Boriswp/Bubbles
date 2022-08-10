using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Launcher : MonoBehaviour
{
	public GameObject ball;
	public GameObject load;
	public GameObject nextColorBall;
	public int maximumReflectionCount = 5;
	public float maximumRayCastDistance = 50f;
	private int currentKindColor;
	private int nextKindColor;
	LineRenderer lineRenderer;
    readonly List<Vector3> reflectionPositions = new();
	private BaseGameGridManager gameGridManager;

	public const float LAUNCH_SPEED = 15f;

	private void Awake()
	{
		nextKindColor = Random.Range(0, 5);
		gameGridManager = GetComponent<BaseGameGridManager>();
		Load();
		lineRenderer = GetComponent<LineRenderer>();
		lineRenderer.startWidth = 0.75f;
		lineRenderer.endWidth = 0.75f;
	}

    public void OnEnable()
    {
		BaseGameGridManager.onReadyToLoad += Load;
    }

    public void OnDisable()
    {
        BaseGameGridManager.onReadyToLoad -= Load;
    }


    void FixedUpdate()
	{
		Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		var delta = mousePos - (Vector2)transform.parent.position;
		var zRotation = 90 - Mathf.Rad2Deg * Mathf.Atan2(delta.x, delta.y);
        if (zRotation is < 10 or > 170)
        {
			return;
        }
		transform.parent.rotation = Quaternion.Euler(0f, 0f,zRotation);
		DrawCurrentTrajectory(delta);
	}

	public void Load()
	{
		if (load != null) return;
		var colorArray = gameGridManager.UpdateLvlInfo();
		currentKindColor = nextKindColor;
		if(colorArray.Count > 0)
		{
			Debug.Log("here");
			var index = Random.Range(0, colorArray.Count);
			nextKindColor = colorArray[index];
        }
        else
        {
			nextKindColor = Random.Range(0, 5);
		}
		nextColorBall.GetComponent<SpriteRenderer>().color = BaseGridManager.ColorArray[nextKindColor];
		load = Instantiate(ball, transform.parent.position,Quaternion.identity,transform.parent.parent);
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
		if (load == null) return;
		var circleCollider2D = load.GetComponent<CircleCollider2D>();
		circleCollider2D.enabled = true;
		load.transform.parent = transform.parent.parent.parent;
		var rb = load.GetComponent<Rigidbody2D>();
		rb.velocity = transform.right * LAUNCH_SPEED;
		load = null;
	}

	private void DrawCurrentTrajectory(Vector2 inputDirection)
	{
		reflectionPositions.Clear();

		Vector2 position = new(transform.position.x,transform.position.y);
		Vector2 direction = inputDirection;
		lineRenderer.startColor = BaseGridManager.ColorArray[currentKindColor];
		lineRenderer.endColor = BaseGridManager.ColorArray[currentKindColor];
		reflectionPositions.Add(position);

		for (var i = 0; i <= maximumReflectionCount; ++i)
		{
			var circleHit = Physics2D.CircleCast(position,0.24F, direction, maximumRayCastDistance);
			if (!circleHit) continue;
			position = circleHit.point + circleHit.normal*0.24f;
			reflectionPositions.Add(position);
			if (circleHit.collider.CompareTag("Bubble"))
			{
				break;
            }
			direction = Vector2.Reflect(direction, circleHit.normal);
		}
		lineRenderer.positionCount = reflectionPositions.Count;
		lineRenderer.SetPositions(reflectionPositions.ToArray());
	}
}
