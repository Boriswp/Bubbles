using UnityEngine;

public class Hitter : MonoBehaviour
{
    public int kind;
    private bool collided = false;
    public BaseGameGridManager gameGridManager;
    private Rigidbody2D rigid;

    public void Start()
    {
        var spriteRenderer = GetComponent<SpriteRenderer>();
        spriteRenderer.sprite = BaseGridManager.SpriteArray[kind];
        rigid = GetComponent<Rigidbody2D>();
    }


    void OnCollisionEnter2D(Collision2D collision)
    {
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
            gameGridManager.CreateSimple(gameObject, kind);
            return;
        }
    }
}
