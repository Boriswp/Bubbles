using UnityEngine;

public class BaseGridManager : MonoBehaviour
{
    public float gap;
    public GameObject bubble;
    protected GameObject[,] grid;
    public GameObject initialPos;
    public static readonly Color[] ColorArray = { Color.red, Color.cyan, Color.yellow, Color.green, Color.magenta };
    protected readonly int[] deltax = { -1, 0, -1, 0, -1, 1 };
    protected readonly int[] deltaxprime = { 1, 0, 1, 0, -1, 1 };
    protected readonly int[] deltay = { -1, -1, 1, 1, 0, 0 };
    
    
    public void Create(Vector2 position, int kind)
    {
        var snappedPosition = Snap(position);
        var position1 = initialPos.transform.position;
            var row = (int)Mathf.Round((snappedPosition.y - position1.y) / gap);
            int column;
            if (row % 2 != 0)
            {
                column = (int)Mathf.Round((snappedPosition.x - position1.x) / gap + gap);
            }
            else
            {
                column = (int)Mathf.Round((snappedPosition.x - position1.x) / gap);
            }

            try
            {
                if (grid[column, -row] != null)
                {
                    Destroy(grid[column, -row]);
                }
                var bubbleClone = Instantiate(bubble, snappedPosition, Quaternion.identity);
                var circleCollider2D = bubbleClone.GetComponent<CircleCollider2D>();
                circleCollider2D.isTrigger = true;

                var gridMember = bubbleClone.GetComponent<GridMember>();
                gridMember.enabled = true;
                gridMember.parent = gameObject;

                gridMember.row = row;
                gridMember.column = column;
                gridMember.kind = kind;

                var spriteRenderer = bubbleClone.GetComponent<SpriteRenderer>();
			
                spriteRenderer.color = ColorArray[gridMember.kind];

                grid[column, -row] = bubbleClone;
            }
            catch (System.IndexOutOfRangeException)
            {
                Debug.Log($"wrong coord {position}");
            }
    }
    
    protected Vector3 Snap(Vector3 position)
    {
        var objectOffset = position - initialPos.transform.position;
        var objectSnap = new Vector3(
            Mathf.Round(objectOffset.x / gap),
            Mathf.Round(objectOffset.y / gap),
            0f
        );
        if ((int)objectSnap.y % 2 == 0) return initialPos.transform.position + objectSnap * gap;
        if (objectOffset.x > objectSnap.x * gap)
        {
            objectSnap.x += gap;
        }
        else
        {
            objectSnap.x -= gap;
        }
        return initialPos.transform.position + objectSnap * gap;
    }
}
