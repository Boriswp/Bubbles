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

	List<Vector3> reflectionPositions = new();

	public const float LAUNCH_SPEED = 15f;

	private void Awake()
	{
		nextKindColor = Random.Range(0, 5);
		Load();
		lineRenderer = GetComponent<LineRenderer>();
		lineRenderer.startWidth = 0.75f;
		lineRenderer.endWidth = 0.75f;
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
		currentKindColor = nextKindColor;
		nextKindColor = Random.Range(0, 5);
		nextColorBall.GetComponent<SpriteRenderer>().color = GridManager.colorArray[nextKindColor];
		load = Instantiate(ball, transform.parent.position,Quaternion.identity);
		load.SetActive(true);
		var circleCollider2D = load.GetComponent<CircleCollider2D>();
		circleCollider2D.enabled = false;
		var hitter = load.GetComponent<Hitter>();
		hitter.kind = currentKindColor;
		hitter.enabled = true;
		hitter.parent = gameObject;
	}

	public void Fire()
	{
		if (load == null) return;
		var circleCollider2D = load.GetComponent<CircleCollider2D>();
		circleCollider2D.enabled = true;

		var rb = load.GetComponent<Rigidbody2D>();
		rb.velocity = transform.right * LAUNCH_SPEED;
		load = null;
	}

	private void DrawCurrentTrajectory(Vector2 inputDirection)
	{
		reflectionPositions.Clear();

		Vector2 position = new(transform.position.x,transform.position.y);
		Vector2 direction = inputDirection;
		lineRenderer.startColor = GridManager.colorArray[currentKindColor];
		lineRenderer.endColor = GridManager.colorArray[currentKindColor];
		reflectionPositions.Add(position);

		for (var i = 0; i <= maximumReflectionCount; ++i)
		{
			var circleHit = Physics2D.CircleCast(position,0.24F, direction, maximumRayCastDistance);
			//var hit = Physics2D.Raycast(position, direction, maximumRayCastDistance);
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
