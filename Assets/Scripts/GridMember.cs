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
	private const float EXPLODE_SPEED = 8f;
	private const float KILL_Y = -30f;

	private CircleCollider2D circleCollider2D;
	private Rigidbody2D rigidBody2D;

	private void Awake()
    {
	    circleCollider2D = GetComponent<CircleCollider2D>();
		rigidBody2D = GetComponent<Rigidbody2D>();
	}

	public void FixedUpdate()
	{
		switch (state)
		{
			case BubbleState.Pop:
			{
				circleCollider2D.enabled = false;

				transform.localScale *= POP_SPEED;
				if (transform.localScale.sqrMagnitude < 0.05f)
				{
					Destroy(gameObject);
				}
				break;
			}
			case BubbleState.Explode:
			{

				circleCollider2D.enabled = false;

				rigidBody2D.gravityScale = 1f;
				rigidBody2D.velocity = new Vector3(
					Random.Range(-EXPLODE_SPEED, EXPLODE_SPEED),
					Random.Range(-EXPLODE_SPEED, EXPLODE_SPEED),
					0f
				);
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
