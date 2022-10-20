using System;
using UnityEngine;


public class Movement : MonoBehaviour
{
    public GameObject ball;
    public int kind;
    private GameObject _objectToSetPosition;
    private ConstructorGridManager _gridManager;

    private void Awake()
    {
        _gridManager = GetComponentInParent<ConstructorGridManager>();
    }

    private void OnMouseDown()
    {
        if (_objectToSetPosition != null) return;
        _objectToSetPosition = Instantiate(ball, transform.position, Quaternion.identity);
        if (kind == -1) return;
        var spriteRenderer = _objectToSetPosition.GetComponent<SpriteRenderer>();
        spriteRenderer.sprite = BaseGridManager.SpriteArray[kind];
    }

    private void OnMouseDrag()
    {
        if (_objectToSetPosition == null) return;
        var worldPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        _objectToSetPosition.transform.position = new Vector3(worldPosition.x, worldPosition.y, 1);
    }

    private void OnMouseUp()
    {
        if (kind == -1)
        {
            _gridManager.DeleteThis(_objectToSetPosition.transform.position);
        }
        else
        {
            _gridManager.Create(_objectToSetPosition.transform.position, kind, false);
        }

        Destroy(_objectToSetPosition);
    }
}