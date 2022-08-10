using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Helpers 
{
	public static IEnumerator SmoothLerp(float time, Transform objectToTransform, Vector3 finalPos)
	{
		var startingPos = objectToTransform.position;
		float elapsedTime = 0;

		while (elapsedTime < time)
		{
			objectToTransform.position = Vector3.Lerp(startingPos, finalPos, (elapsedTime / time));
			elapsedTime += Time.deltaTime;
			yield return null;
			objectToTransform.position = finalPos;
		}
	}

	public static System.Tuple<int, List<int>> GetLastRowAndColors(GameObject[,] objects,int rows,int columns)
    {
		var lastRow = 0;
		var listColors = new List<int>();
		for (var r = 0; r < rows; r++)
		{
			for (var c = 0; c < columns; c++)
			{
                if (objects[c, r] == null) {
					continue;
				}
                else
                {
					var newKind = objects[c, r].GetComponent<GridMember>().kind;
					if (!listColors.Contains(newKind)){
						listColors.Add(newKind);
                    }
					lastRow = r;
                }
			}
		}
		return System.Tuple.Create(lastRow,listColors);
    }
}
