using System;
using UnityEngine;
using System.Collections;
using Random = UnityEngine.Random;

public class Hitter : MonoBehaviour
{
	public int kind;
	public GameObject parent;
	private bool collided;
	private ArcadeGridManager _arcadeGridManager;

	private void Start()
	{
		var spriteRenderer = GetComponent<SpriteRenderer>();
        spriteRenderer.color = BaseGridManager.ColorArray[kind];
		_arcadeGridManager = parent.GetComponent<ArcadeGridManager>();
	}
	

	private void OnTriggerEnter2D(Collider2D collider)
	{
		if(collided||collider==null|| _arcadeGridManager == null) return;
		_arcadeGridManager.ready = false;
		collided = true;
		enabled = false;
		var gridMember = _arcadeGridManager.CreateSimple(gameObject, kind);
		_arcadeGridManager.Seek(gridMember.column, -gridMember.row, gridMember.kind);
		_arcadeGridManager.ready = true;
		var launcher = parent.GetComponent<Launcher>();
		launcher.Load();
	}
}
