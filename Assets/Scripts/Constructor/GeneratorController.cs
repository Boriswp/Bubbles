using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeneratorController : MonoBehaviour
{
    public ConstructorGridManager gridManager;
    public Scroll scroll;
    private bool isRed = true;
    private bool isGreen = true;
    private bool isMagenta = true;
    private bool isCyan = true;
    private bool isYellow = true;
    private bool isViolet = true;
    private bool isBlue = true;
    private int rowFrom = 0;
    private int rowTo = 10;
    private int columnFrom = 0;
    private int holeVar = 20;
    private int chainVar = 0;
    private int columnTo = Constants.COLUMNS;
    private List<int> kindList = new();


    public void SetRowTo(string num) => int.TryParse(num, out rowTo);

    public void SetProbability(string num) => int.TryParse(num, out holeVar);

    public void SetChainProbability(string num) => int.TryParse(num, out chainVar);

    public void SetRowFrom(string num) => int.TryParse(num, out rowFrom);

    public void SetColumnFrom(string num) => int.TryParse(num, out columnFrom);

    public void SetColumnTo(string num) => int.TryParse(num, out columnTo);

    public void ToggleRedColor(bool isEnabled) => isRed = isEnabled;

    public void ToggleGreenColor(bool isEnabled) => isGreen = isEnabled;

    public void ToggleCyanColor(bool isEnabled) => isCyan = isEnabled;

    public void ToggleYellowColor(bool isEnabled) => isYellow = isEnabled;

    public void ToggleMagentaColor(bool isEnabled) => isMagenta = isEnabled;
    public void ToggleBlueColor(bool isEnabled) => isBlue = isEnabled;
    public void ToggleVioletColor(bool isEnabled) => isViolet = isEnabled;


    public void GenerateLVL()
    {
        Debug.Log(rowTo);
        kindList.Clear();
        if (isRed)
        {
            kindList.Add(0);
        }
        if (isCyan)
        {
            kindList.Add(1);
        }
        if (isYellow)
        {
            kindList.Add(2);
        }
        if (isGreen)
        {
            kindList.Add(3);
        }
        if (isMagenta)
        {
            kindList.Add(4);
        }
        if (isBlue)
        {
            kindList.Add(5);
        }
        if (isViolet)
        {
            kindList.Add(6);
        }
        if (kindList.Count == 0) return;
        gridManager.Generate(kindList, rowFrom, rowTo, columnFrom, columnTo, holeVar, chainVar);

        OnCancell();
    }

    public void OnCancell()
    {
        gameObject.SetActive(false);
    }
}
