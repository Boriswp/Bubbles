using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class constructorScreenController : MonoBehaviour
{
    public GameObject GeneratorUI;

    public void OnQuitAction()
    {
        Application.Quit();
    }

    public void OnOpenGenerator()
    {
        GeneratorUI.SetActive(true);
    }

}
