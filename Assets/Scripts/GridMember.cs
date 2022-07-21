using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class GridMember : MonoBehaviour
{
	public GameObject parent;
	public int row;
	public int column;
	public int kind;
	public BubbleState state = BubbleState.Initial;

	private const float POP_SPEED = 0.9f;
	private const float EXPLODE_SPEED = 5f;
	private const float KILL_Y = -30f;

	public void FixedUpdate()
	{
		switch (state)
		{
			case BubbleState.Pop:
			{
				var cc = GetComponent<CircleCollider2D>();
				if (cc != null)
					cc.enabled = false;

				transform.localScale *= POP_SPEED;
				if (transform.localScale.sqrMagnitude < 0.05f)
				{
					Destroy(gameObject);
				}

				break;
			}
			case BubbleState.Explode:
			{
				var cc = GetComponent<CircleCollider2D>();
				if (cc != null)
					cc.enabled = false;

				var rb = GetComponent<Rigidbody2D>();
				if (rb != null)
				{
					rb.gravityScale = 1f;
					rb.velocity = new Vector3(
						Random.Range(-EXPLODE_SPEED, EXPLODE_SPEED),
						Random.Range(-EXPLODE_SPEED, EXPLODE_SPEED),
						0f
					);
				}
				state = BubbleState.Fall;
				break;
			}
			case BubbleState.Fall:
			{
				if (transform.position.y < KILL_Y)
				{
					Destroy(gameObject);
				}
				break;
			}
			case BubbleState.Initial:
				break;
			default:
				throw new ArgumentOutOfRangeException();
		}
	}

}
