using UnityEngine;

public class Hitter : MonoBehaviour
{
	public int kind;
	private bool collided = false;
    public BaseGameGridManager gameGridManager;

	private void Start()
	{
		var spriteRenderer = GetComponent<SpriteRenderer>();
        spriteRenderer.sprite = BaseGridManager.SpriteArray[kind];
	}
	

	private void OnTriggerEnter2D(Collider2D collider)
	{
		if(collided||collider==null||gameGridManager==null) return;
		enabled = false;
		collided = true;
		gameGridManager.CreateSimple(gameObject, kind);
	}
}
