using UnityEngine;
using System.Collections;

public class Launcher : MonoBehaviour
{
	public GameObject ball;
	public GameObject load;

	public const float LAUNCH_SPEED = 15f;

	private void Awake()
	{
		Load();
	}

	void FixedUpdate()
	{
		Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		var delta = mousePos - (Vector2)transform.position;
		transform.rotation = Quaternion.Euler(0f, 0f, 90 - Mathf.Rad2Deg * Mathf.Atan2(delta.x, delta.y));
	}

	public void Load()
	{
		if (load != null) return;
		load = Instantiate(ball, transform.position, transform.rotation);
		load.SetActive(true);

		var circleCollider2D = load.GetComponent<CircleCollider2D>();
		if (circleCollider2D != null)
			circleCollider2D.enabled = false;

		var hitter = load.GetComponent<Hitter>();
		if (hitter != null)
			hitter.parent = gameObject;
	}

	public void Fire()
	{
		if (load == null) return;
		var circleCollider2D = load.GetComponent<CircleCollider2D>();
		if (circleCollider2D != null)
			circleCollider2D.enabled = true;

		var rb = load.GetComponent<Rigidbody2D>();
		if (rb != null)
		{
			rb.velocity = transform.right * LAUNCH_SPEED;
		}
	}
}
