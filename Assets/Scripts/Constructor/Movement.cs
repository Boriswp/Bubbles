using System;
using UnityEngine;
using UnityEngine.UI;

public class Movement : MonoBehaviour
{
    public GameObject ball;
    public GameObject root;
    public int kind;
    private GameObject _objectToSetPosition;
    public Sprite chain;
    public Image[] images;
    private ConstructorGridManager _gridManager;

    private void Awake()
    {
        _gridManager = GetComponentInParent<ConstructorGridManager>();
    }


    void Update()
    {
        var worldPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        foreach (KeyCode kcode in Enum.GetValues(typeof(KeyCode)))
        {
            if (Input.GetKey(kcode))
            {
                if (kcode == KeyCode.Mouse0)
                {
                    if (Helpers.isUI(Input.mousePosition)) return;
                    if (_objectToSetPosition == null) return;
                    if (kind == 7)
                    {
                        _gridManager.CreateChain(_objectToSetPosition.transform.position, root.transform);
                    }
                    else
                    {
                        _gridManager.Create(_objectToSetPosition.transform.position, kind, false, root.transform);
                    }
                }
                else if (kcode == KeyCode.Mouse1)
                {
                    _gridManager.DeleteThis(new Vector3(worldPosition.x, worldPosition.y, 5));
                }
                else
                {
                    var tempkind = ((int)kcode) - 48;
                    if (tempkind < 8 && tempkind >= 0)
                    {
                        kind = tempkind;
                        for (int pos = 0; pos < images.Length; pos++)
                        {
                            if (pos == kind)
                            {
                                images[pos].color = Color.white;
                            }
                            else
                            {
                                images[pos].color = Color.grey;
                            }
                        }
                        if (_objectToSetPosition != null)
                        {
                            Destroy(_objectToSetPosition);
                            _objectToSetPosition = null;
                        };
                        _objectToSetPosition = Instantiate(ball, transform.position, Quaternion.identity);
                        var spriteRenderer = _objectToSetPosition.GetComponent<SpriteRenderer>();
                        spriteRenderer.sortingOrder = 5;
                        if (kind == -1) return;
                        if (kind == 7)
                        {
                            spriteRenderer.sprite = chain;
                        }
                        else
                        {
                            spriteRenderer.sprite = BaseGridManager.SpriteArray[kind];
                        }
                    }
                }
            }
        }
        if (_objectToSetPosition == null) return;
        _objectToSetPosition.transform.position = new Vector3(worldPosition.x, worldPosition.y, 5);
    }
}