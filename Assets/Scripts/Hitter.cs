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
	private GridManager gridManager;

	private void Start()
	{
		var spriteRenderer = GetComponent<SpriteRenderer>();
		if (spriteRenderer == null) return;
		Color[] colorArray = { Color.red, Color.cyan, Color.yellow, Color.green, Color.magenta };
		kind = Random.Range(0, 5);
        spriteRenderer.color = colorArray[kind];
		gridManager = parent.GetComponent<GridManager>();
	}
	

	private void OnTriggerEnter2D(Collider2D collider)
	{
		if(collided||collider==null) return;
		collided = true;
		enabled = false;
		var gridMember = gridManager.CreateSimple(gameObject, kind);
		gridManager.Seek(gridMember.column, -gridMember.row, gridMember.kind);
		var launcher = parent.GetComponent<Launcher>();
		launcher.load = null;
		launcher.Load();
		this.enabled = false;
	}
}
