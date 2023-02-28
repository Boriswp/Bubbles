using UnityEngine;

public class Hitter : MonoBehaviour
{
	public int kind;
	private bool collided = false;
    public BaseGameGridManager gameGridManager;

	public void Start()
	{
		var spriteRenderer = GetComponent<SpriteRenderer>();
        spriteRenderer.sprite = BaseGridManager.SpriteArray[kind];
	}


	void OnCollisionEnter2D(Collision2D collision)
	{
		if (collision.collider.CompareTag("Destroyer")) {
			gameGridManager.Reload();
			Destroy(gameObject);
		}
		if(collided||!collision.collider.CompareTag("Bubble")||gameGridManager==null) return;
		enabled = false;
		collided = true;
		gameGridManager.CreateSimple(gameObject, kind);
	}
}
