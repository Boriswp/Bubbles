using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using TMPro;
using UnityEngine.Serialization;

public class gameScreenController : AdModule
{
    public GameObject fireButton;
    public GameObject PauseMenu;
    public GameObject LoseScreen;
    public TextMeshProUGUI textCounterScore;
    public TextMeshProUGUI textCounterBalls;
    public TextMeshProUGUI EndCounter;


    public void OnEnable()
    {
        BaseGameGridManager.onGameOver += ShowLoseScreen;
        BaseGameGridManager.onUpdateScore += UpdateScore;
    }

    public void OnDisable()
    {
        BaseGameGridManager.onGameOver -= ShowLoseScreen;
        BaseGameGridManager.onUpdateScore -= UpdateScore;
    }

    public void UpdateScore(int score,int balls)
    {
        textCounterScore.text = score.ToString();
        textCounterBalls.text = balls.ToString();
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
        EndCounter.text = EndCounter.text + " " + textCounterScore.text;
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
