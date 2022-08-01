using System;
using UnityEngine;
using System.Collections;
using Random = UnityEngine.Random;

public class Hitter : MonoBehaviour
{
	public int kind;
	public GameObject parent;
	private bool collided;
	private GridManager gridManager;

	private void Start()
	{
		var spriteRenderer = GetComponent<SpriteRenderer>();
        spriteRenderer.color = GridManager.colorArray[kind];
		gridManager = parent.GetComponent<GridManager>();
	}
	

	private void OnTriggerEnter2D(Collider2D collider)
	{
		if(collided||collider==null|| gridManager == null) return;
		gridManager.ready = false;
		collided = true;
		enabled = false;
		var gridMember = gridManager.CreateSimple(gameObject, kind);
		gridManager.Seek(gridMember.column, -gridMember.row, gridMember.kind);
		gridManager.ready = true;
		var launcher = parent.GetComponent<Launcher>();
		launcher.Load();
	}
}
