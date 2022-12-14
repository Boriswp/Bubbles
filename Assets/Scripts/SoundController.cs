using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundController : MonoBehaviour
{

    public AudioClip[] audioMusicClips;
    public AudioClip buttonSound;
    public AudioClip failClip;
    public AudioClip winClip;
    public AudioClip popClip;
    public AudioSource musicSource;
    public AudioSource soundSource;

    public delegate void SoundControllerEvent(SoundEvent soundEvent);
    public static SoundControllerEvent soundEvent;

    void Awake()
    {
        GameObject[] objs = GameObject.FindGameObjectsWithTag("Sound");

        if (objs.Length > 1)
        {
            Destroy(this.gameObject);
        }

        if (DataLoader.getMusicStatus())
        {
            SetUpMusic();
        }
        soundEvent += OnEventReaction;

        DontDestroyOnLoad(gameObject); 
    }

    private void OnEventReaction(SoundEvent soundEvent)
    {
        switch (soundEvent)
        {
            case SoundEvent.MUSICEVENT:
                Toggler(!musicSource.isPlaying);
                break;
            case SoundEvent.BUTTONSOUND:
                soundSource.clip = buttonSound;
                soundSource.Play();
                break;
            case SoundEvent.FAILSOUND:
                soundSource.clip = failClip;
                soundSource.Play();
                break;
            case SoundEvent.WINSOUND:
                soundSource.clip = winClip;
                soundSource.Play();
                break;
            case SoundEvent.POPSOUND:
                soundSource.clip = popClip;
                soundSource.Play();
                break;
            default:
                break;
        }
    }

    private void OnDisable()
    {
        soundEvent -= OnEventReaction;
    }


    private void Toggler(bool status)
    {
        Debug.Log($"Music {status}");
        if (status)
        {
            SetUpMusic();
        }
        else
        {
            StopPlayMusic();
        }
    }

    public void playPressButtonSound()
    {
        if (DataLoader.getSoundStatus())
        {
            soundSource.clip = buttonSound;
            soundSource.Play();
        }
    }


    private void SetUpMusic()
    {
        musicSource.clip = audioMusicClips[Random.Range(0, audioMusicClips.Length - 1)];
        musicSource.Play();
    }

    private void StopPlayMusic()
    {
        musicSource.Stop();
    }
}
