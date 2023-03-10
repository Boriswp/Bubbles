using UnityEngine;

public class Hitter : MonoBehaviour
{
    public int kind;
    private bool collided = false;
    public BaseGameGridManager gameGridManager;
    private Rigidbody2D rigid;
    private Vector2 currentDirection;

    public void Start()
    {
        var spriteRenderer = GetComponent<SpriteRenderer>();
        spriteRenderer.sprite = BaseGridManager.SpriteArray[kind];
        rigid = GetComponent<Rigidbody2D>();
        currentDirection = transform.position;
    }


    void OnCollisionEnter2D(Collision2D collision)
    {
        currentDirection = ((Vector2)transform.position - currentDirection).normalized;
        if (collided || gameGridManager == null) return;
        if (collision.collider.CompareTag("Destroyer"))
        {
            gameGridManager.Reload();
            Destroy(gameObject);
        }
        if (collision.collider.CompareTag("Bubble") || collision.collider.CompareTag("Ceiling"))
        {
            enabled = false;
            collided = true;
            rigid.velocity = Vector2.zero;
            rigid.bodyType = RigidbodyType2D.Static;
            gameGridManager.CreateSimple(gameObject, kind, currentDirection);
            return;
        }
    }
}
