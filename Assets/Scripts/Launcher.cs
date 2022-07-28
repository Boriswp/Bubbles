using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Launcher : MonoBehaviour
{
	public GameObject ball;
	public GameObject load;

	public Transform firePosition;
	public int maximumReflectionCount = 5;
	private int maxReflect;
	public float maximumRayCastDistance = 50f;

	LineRenderer lineRenderer;

	List<Vector3> reflectionPositions = new();

	public const float LAUNCH_SPEED = 15f;

	private void Awake()
	{
		Load();
		maxReflect = maximumReflectionCount;
		lineRenderer = GetComponent<LineRenderer>();
		lineRenderer.startWidth = 0.1f;
		lineRenderer.endWidth = 0.1f;
	}

	void FixedUpdate()
	{
		Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		var delta = mousePos - (Vector2)transform.parent.position;
		transform.parent.rotation = Quaternion.Euler(0f, 0f, 90 - Mathf.Rad2Deg * Mathf.Atan2(delta.x, delta.y));
		DrawCurrentTrajectory(delta);
	}

	public void Load()
	{
		if (load != null) return;
		load = Instantiate(ball, transform.parent.position,Quaternion.identity);
		load.SetActive(true);

		var circleCollider2D = load.GetComponent<CircleCollider2D>();
		circleCollider2D.enabled = false;

		var hitter = load.GetComponent<Hitter>();
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
	}

	private void DrawCurrentTrajectory(Vector2 inputDirection)
	{
		reflectionPositions.Clear();

		Vector2 position = new(transform.position.x,transform.position.y);
		Vector2 direction = inputDirection;

		reflectionPositions.Add(position);

		for (var i = 0; i <= maxReflect; ++i)
		{
			var circleHit = Physics2D.CircleCast(position,0.225F, direction, maximumRayCastDistance);
			//var hit = Physics2D.Raycast(position, direction, maximumRayCastDistance);
			if (!circleHit) continue;
			position = circleHit.point + circleHit.normal*0.225f;
			reflectionPositions.Add(position);
			if (circleHit.collider.CompareTag("Bubble"))
			{
				break;
            }
            else
            {
				maxReflect = maximumReflectionCount;
            }
			direction = Vector2.Reflect(direction, circleHit.normal);
		}

		lineRenderer.positionCount = reflectionPositions.Count;
		lineRenderer.SetPositions(reflectionPositions.ToArray());
	}
}
