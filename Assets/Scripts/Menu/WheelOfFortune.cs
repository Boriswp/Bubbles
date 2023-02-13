using DG.Tweening;
using UnityEngine;

public class WheelOfFortune : MonoBehaviour
{

    public GameObject wheel;
    public GameObject[] winObjects;
    private float angle = 51.25f;
    public readonly int[] v = { 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7 };
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
        var r = Random.Range(0, v.Length);
        wheel.transform.DORotate(new Vector3(0, 0, 720 + angle * v[r]), 7, RotateMode.FastBeyond360);

    }
}