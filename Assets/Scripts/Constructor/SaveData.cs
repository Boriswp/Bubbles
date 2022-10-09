using System.Collections.Generic;


[System.Serializable]
public class SaveData
{
    public int rowCount;
    public int columnCount;
    public int playerBallCount;
    public int oneStarScore;
    public int twoStarScore;
    public int threeStarScore;
    public List<BubbleSerialized> bubbles;
}