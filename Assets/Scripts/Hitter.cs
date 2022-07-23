using System;
using UnityEngine;
using System.Collections;
using Random = UnityEngine.Random;

public class Hitter : MonoBehaviour
{
	public int kind;
	public GameObject parent;
	public Sprite specialBubble;
	private bool collided;

	private void Start()
	{
		var spriteRenderer = GetComponent<SpriteRenderer>();
		if (spriteRenderer == null) return;
		Color[] colorArray = { Color.red, Color.cyan, Color.yellow, Color.green, Color.magenta };

		kind = (int)Random.Range(1f, 7f);
		if (kind == 6)
		{
			spriteRenderer.sprite = specialBubble;
		}
		else
		{
			spriteRenderer.color = colorArray[kind - 1];
		}
	}
	

	private void OnTriggerEnter2D(Collider2D collider)
	{
		if(collided||collider==null) return;
		collided = true;
		enabled = false;
		var gridManager = parent.GetComponent<GridManager>();
		var newBubble = gridManager.Create(transform.position, kind);
		if (newBubble != null)
		{
			var gridMember = newBubble.GetComponent<GridMember>();
			gridManager.Seek(gridMember.column, -gridMember.row, gridMember.kind);
		}
		var launcher = parent.GetComponent<Launcher>();
		launcher.load = null;
		launcher.Load();
		Destroy(gameObject);
	}
}
