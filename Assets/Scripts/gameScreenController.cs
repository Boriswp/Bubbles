using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using TMPro;

public class gameScreenController : AdModule
{
    public GameObject fireButton;
    public GameObject PauseMenu;
    public GameObject LoseScreen;
    public TextMeshProUGUI textCounter;
    public TextMeshProUGUI EndCounter;


    public void OnEnable()
    {
        BaseGameGridManager.onGameOver += ShowLoseScreen;
    }

    public void OnDisable()
    {
        BaseGameGridManager.onGameOver -= ShowLoseScreen;
    }

    public void ShowMenu()
   {
        Time.timeScale = 0f;
        PauseMenu.SetActive(true);
        fireButton.SetActive(false);
   }

    public void ReloadScene()
    {
        Time.timeScale = 1f;
        Scene scene = SceneManager.GetActiveScene(); 
        SceneManager.LoadScene(scene.name);
    }

    public void ShowLoseScreen()
    {
        Time.timeScale = 0f;
        fireButton.SetActive(false);
        LoseScreen.SetActive(true);
        EndCounter.text = EndCounter.text + " " + textCounter.text;
    }

    public void GoToMainMenu()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene("Menu");
    }

    public void ReturnToGame()
    {
        Time.timeScale = 1f;
        PauseMenu.SetActive(false);
        fireButton.SetActive(true);
    }
}
