using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using Random = UnityEngine.Random;

public class GridMember : MonoBehaviour
{
    public GameObject simpleEffects;
    public GameObject bombEffects;
    public GameObject lightningEffect;
    public GameObject chain;
    public int row;
    public int column;
    public int kind;
    public BubbleState state = BubbleState.Initial;

    private ParticleSystem particles;
    private ParticleSystem.MainModule settings;
    private readonly int[] validSpeedX = { -8, -7, -6, -5, -4, -3, 3, 4, 5, 6, 7, 8 };
    private readonly int[] validSpeedY = { -8, -7, -6, -5, -4, -3 };


    private CircleCollider2D circleCollider2D;
    private Rigidbody2D rigidBody2D;

    private void Awake()
    {
        circleCollider2D = GetComponent<CircleCollider2D>();
        rigidBody2D = GetComponent<Rigidbody2D>();
    }

    public void EnableChain()
    {
        chain.SetActive(true);
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
                    particles = kind switch
                    {
                        Constants.BOMB_KIND => bombEffects.GetComponent<ParticleSystem>(),
                        Constants.LIGHTNING_KIND => lightningEffect.GetComponent<ParticleSystem>(),
                        _ => simpleEffects.GetComponent<ParticleSystem>(),
                    };
                    settings = particles.main;
                    settings.startColor = new ParticleSystem.MinMaxGradient(BaseGridManager.ColorArray[kind]);
                    settings.duration = Constants.POP_SPEED;
                    particles.Play();
                    break;
                }
            case BubbleState.Explode:
                {
                    circleCollider2D.enabled = false;
                    rigidBody2D.bodyType = RigidbodyType2D.Kinematic;
                    rigidBody2D.gravityScale = 3f;
                    rigidBody2D.velocity = new Vector3(
                        validSpeedX[Random.Range(0, validSpeedX.Length)],
                        validSpeedY[Random.Range(0, validSpeedY.Length)],
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
            case BubbleState.BreakFirstLayer:
                {
                    chain.SetActive(false);
                    kind -= Constants.FIRST_LAYER_BALLS;
                    state = BubbleState.Initial;
                    break;
                }
            case BubbleState.Initial:
                break;
            default:
                throw new ArgumentOutOfRangeException();
        }
    }

}
