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

    private ParticleSystem particles;

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
                    if (particles != null) return;
                    circleCollider2D.enabled = false;
                    GetComponent<SpriteRenderer>().enabled = false;
                    particles = GetComponent<ParticleSystem>();
                    var settings = particles.main;
                    settings.startColor = new ParticleSystem.MinMaxGradient(BaseGridManager.ColorArray[kind]);
                    settings.duration = Constants.POP_SPEED;
                    particles.Play();
                    break;
                }
            case BubbleState.Explode:
                {

                    circleCollider2D.enabled = false;

                    rigidBody2D.gravityScale = 1f;
                    rigidBody2D.velocity = new Vector3(
                        Random.Range(-Constants.EXPLODE_SPEED, Constants.EXPLODE_SPEED),
                        Random.Range(-Constants.EXPLODE_SPEED, Constants.EXPLODE_SPEED),
                        0f
                    );
                    state = BubbleState.Fall;
                    break;
                }
            case BubbleState.Fall:
                {
                    if (transform.position.y < Constants.KILL_Y)
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
