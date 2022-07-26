using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class ScreenController : MonoBehaviour
{
    public GameObject fireButton;
    public GameObject PauseMenu;
    public GameObject LoseScreen;

    private void Awake()
    {
        fireButton.SetActive(true);
    }

   public void ShowMenu()
   {
        Time.timeScale = 0f;
        PauseMenu.SetActive(true);
        fireButton.SetActive(false);
   }

    public void ShowLoseScreen()
    {
        fireButton.SetActive(false);
        LoseScreen.SetActive(true);
    }

    public void GoToMainMenu()
    {
        SceneManager.LoadScene("Menu");
    }

    public void ReturnToGame()
    {
        Time.timeScale = 1f;
        PauseMenu.SetActive(false);
        fireButton.SetActive(true);
    }
}
