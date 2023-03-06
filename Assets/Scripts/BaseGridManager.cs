using System;
using UnityEngine;

public class BaseGridManager : MonoBehaviour
{
    public GameObject bubble;
    protected GameObject[,] grid;
    public GameObject initialPos;
    public static readonly Color[] ColorArray = { Color.red, Color.cyan, new(1, 0.85f, 0.1f, 1), Color.green, Color.magenta, new(0, 0.18f, 036f), new(0.5f, 0, 1, 1), Color.black, Color.black, Color.black, Color.black, };
    public static Sprite[] SpriteArray;
    protected readonly int[] deltax = { -1, 0, -1, 0, -1, 1 };
    protected readonly int[] deltaxprime = { 1, 0, 1, 0, -1, 1 };
    protected readonly int[] deltay = { -1, -1, 1, 1, 0, 0 };

    protected void LoadSpriteRes()
    {
        var usualSpites = Resources.LoadAll<Sprite>("bubbles");
        var special = Resources.LoadAll<Sprite>("special");
        SpriteArray = new Sprite[special.Length + usualSpites.Length];
        usualSpites.CopyTo(SpriteArray, 0);
        special.CopyTo(SpriteArray, usualSpites.Length);
    }

    public void Create(Vector2 position, int kind, bool isGame, Transform parent = null)
    {
        var snappedPosition = Snap(position);
        var position1 = initialPos.transform.position;
        var row = (int)Mathf.Round((snappedPosition.y - position1.y) / Constants.GAP);
        int column;
        if (row % 2 != 0)
        {
            column = (int)Mathf.Round((snappedPosition.x - position1.x) / Constants.GAP + Constants.GAP);
        }
        else
        {
            column = (int)Mathf.Round((snappedPosition.x - position1.x) / Constants.GAP);
        }

        try
        {
            if (grid[column, -row] != null && !isGame)
            {
                Destroy(grid[column, -row]);
            }
            var bubbleClone = Instantiate(bubble, snappedPosition, Quaternion.identity, parent);
            var gridMember = bubbleClone.GetComponent<GridMember>();
            gridMember.enabled = true;
            gridMember.row = row;
            gridMember.column = column;
            gridMember.kind = kind;

            var spriteRenderer = bubbleClone.GetComponent<SpriteRenderer>();
            if (kind >= Constants.FIRST_LAYER_BALLS)
            {
                spriteRenderer.sprite = SpriteArray[gridMember.kind - Constants.FIRST_LAYER_BALLS];
                gridMember.EnableChain();
            }
            else
            {
                spriteRenderer.sprite = SpriteArray[gridMember.kind];
            }
            grid[column, -row] = bubbleClone;
        }
        catch (IndexOutOfRangeException)
        {
            Debug.Log($"wrong coord {position}");
        }
    }

    protected Vector3 Snap(Vector3 position)
    {
        var objectOffset = position - initialPos.transform.position;
        var objectSnap = new Vector3(
            Mathf.Round(objectOffset.x / Constants.GAP),
            Mathf.Round(objectOffset.y / Constants.GAP),
            0f
        );
        if ((int)objectSnap.y % 2 == 0) return initialPos.transform.position + objectSnap * Constants.GAP;
        if (objectOffset.x > objectSnap.x * 0.5f)
        {
            objectSnap.x += Constants.GAP;
        }
        else
        {
            objectSnap.x -= Constants.GAP;
        }
        return initialPos.transform.position + objectSnap * Constants.GAP;
    }
}
