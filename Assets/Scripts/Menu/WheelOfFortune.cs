using DG.Tweening;
using UnityEngine;

public class WheelOfFortune : MonoBehaviour
{

    public GameObject wheel;
    public GameObject[] winObjects;
    public GameObject whiteSheet;
    public GameObject[] gameObjects;
    public GameObject freeSpinButton;
    public GameObject spinButton;
    private float angle = 51.25f;
    private int index = 0;
    private GameObject tempGameobject;
    public readonly int[] v = { 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6 };
    public enum RewardType
    {
        Hearts,
        BonusBalls,
    }
    public void OnEnable()
    {
        AdModule.onGetReward += SpinTheWheel;

        if ((System.DateTime.UtcNow.Ticks - DataLoader.GetTimeForWheel()) / 10000000 / 3600 / 24 > 0)
        {
            freeSpinButton.SetActive(true);
            spinButton.SetActive(false);
        }
        else {
            freeSpinButton.SetActive(false);
            spinButton.SetActive(true);
        }
    }

    public void OnDisable()
    {
        AdModule.onGetReward -= SpinTheWheel;
    }

    public void ShowAd()
    {
        AdModule.showRewardedAD.Invoke();
    }


    public void FreeSpin()
    {
        DataLoader.SetTimeForWheel(System.DateTime.UtcNow.Ticks);
        SpinTheWheel();
    }

    public void SpinTheWheel()
    {
        spinButton.SetActive(false);
        freeSpinButton.SetActive(false);
        index = Random.Range(0, v.Length);
        wheel.transform.DORotate(new Vector3(0, 0, 720 + angle * v[index]), 7, RotateMode.FastBeyond360).OnComplete(() =>
        {
            foreach (var obj in gameObjects)
            {
                obj.SetActive(false);
            }

            tempGameobject = Instantiate(winObjects[v[index]], this.transform);
            tempGameobject.transform.DORotate(new Vector3(0, 0, angle * v[index]), 1);
            tempGameobject.transform.DOLocalMoveY(-350, 1);
            tempGameobject.transform.DOScale(new Vector3(2, 2, 0), 2).OnComplete(() =>
            {
                whiteSheet.SetActive(true);
            });
        });
    }

    public void GetReward()
    {
        switch (v[index])
        {
            case 0:
                DataLoader.SetInvulnerable(900);
                HeartSystem.checkHealthStatus?.Invoke(false);
                break;
            case 1:
                DataLoader.SetMoneyBonus(200);
                break;
            case 2:
                DataLoader.SetBonusBalls(5);
                break;
            case 3:
                DataLoader.SetBonusBalls(7);
                break;
            case 4:
                DataLoader.SetBonusBalls(10);
                break;
            case 5:
                DataLoader.SetStarsBonus();
                break;
            case 6:
                DataLoader.SetMoneyBonus(50);
                break;

        }
        Destroy(tempGameobject);
        foreach (var obj in gameObjects)
        {
            obj.SetActive(true);
        }
        whiteSheet.SetActive(false);
        gameObject.SetActive(false);
    }


}