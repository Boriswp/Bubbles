using UnityEngine.SceneManagement;
using UnityEngine;
using TMPro;

public class gameScreenController : AdModule
{
    public GameObject fireButton;
    public GameObject PauseMenu;
    public GameObject LoseScreen;
    public int starsCount = 0;

    public TextMeshProUGUI textCounterScore;
    public TextMeshProUGUI textCounterBalls;
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
        playButtonSound();
        Time.timeScale = 0f;
        PauseMenu.SetActive(true);
        fireButton.SetActive(false);
    }

    public void ReloadScene()
    {
        playButtonSound();
        Time.timeScale = 1f;
        var scene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(scene.name);
    }

    private void ShowLoseScreen()
    {
        Time.timeScale = 0f;
        fireButton.SetActive(false);
        LoseScreen.SetActive(true);
        //EndCounter.text = EndCounter.text + " " + textCounterScore.text;
        SoundController.soundEvent?.Invoke(SoundEvent.FAILSOUND);
    }

    public void GoToMainMenu()
    {
        Time.timeScale = 1f;
        if (DataLoader.testMode)
        {
            SceneManager.LoadScene("Constructor");
        }
        else
        {
            playButtonSound();
            SceneManager.LoadScene("Menu");
        }
    }

    public void ReturnToGame()
    {
        playButtonSound();
        Time.timeScale = 1f;
        PauseMenu.SetActive(false);
        fireButton.SetActive(true);
    }
}
