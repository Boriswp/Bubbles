public class WheelOfFortune
{
    public int [ ] v={0,0,0,0,0,1,1,1,2,3,3,3,3,3,3,3,3,3,3,3,4,4,5,6,7,8,9,9,9,9,9,9};
    public enum RewardType
    {
        Hearts,
        Bomb,
        FireBall,
        LightingBall,
        RandomBall,
        BonusBalls,
    }

    public void SpeenTheWheel()
    {
        var r=UnityEngine.Random.Range (0,v.Length);
    }
}