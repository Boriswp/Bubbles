using System.Collections.Generic;


[System.Serializable]
public class SaveData
{
    public int rowCount;
    public int columnCount;
    public int playerBallCount;
    public List<BubbleSerialized> bubbles;
}