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
            Destroy(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject);
        }

        if (DataLoader.getMusicStatus())
        {
            SetUpMusic();
        }

        soundEvent += OnEventReaction;
    }

    private void OnEventReaction(SoundEvent soundEvent)
    {
        soundSource.clip = soundEvent switch
        {
            SoundEvent.MUSICEVENT => Toggler(!musicSource.isPlaying),
            SoundEvent.BUTTONSOUND => buttonSound,
            SoundEvent.FAILSOUND => failClip,
            SoundEvent.WINSOUND => winClip,
            SoundEvent.POPSOUND => popClip,
            _ => null,
        };

        if (DataLoader.getSoundStatus())
        {
            soundSource.Play();
        }
    }

    private void OnDisable()
    {
        soundEvent -= OnEventReaction;
    }


    private AudioClip Toggler(bool status)
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

        return null;
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
