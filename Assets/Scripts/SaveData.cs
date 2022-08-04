using System.Collections;
using System.Collections.Generic;
using UnityEngine;



[System.Serializable]
public class SaveData
{
    public int rowCount;
    public int columnCount;
    public List<BubbleSerialized> bubbles;
}