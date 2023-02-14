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
    public AudioSource[] sources;

    public delegate void SoundControllerEvent(SoundEvent soundEvent);
    public static SoundControllerEvent soundEvent;

    void Awake()
    {
        GameObject[] objs = GameObject.FindGameObjectsWithTag("Sound");

        if (objs.Length > 1)
        {
            Destroy(gameObject);
            return;
        }
        else
        {
            DontDestroyOnLoad(gameObject);
        }
        sources = GetComponents<AudioSource>();
        if (DataLoader.getMusicStatus())
        {
            SetUpMusic();
        }
        soundEvent += OnEventReaction;
    }

    private void OnEventReaction(SoundEvent soundEvent)
    {
        sources[1].clip = soundEvent switch
        {
            SoundEvent.MUSICEVENT => Toggler(!sources[0].isPlaying),
            SoundEvent.BUTTONSOUND => buttonSound,
            SoundEvent.FAILSOUND => failClip,
            SoundEvent.WINSOUND => winClip,
            SoundEvent.POPSOUND => popClip,
            _ => null,
        };

        if (DataLoader.getSoundStatus())
        {
            sources[1].Play();
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
            sources[1].clip = buttonSound;
            sources[1].Play();
        }
    }


    private void SetUpMusic()
    {
        sources[0].clip = audioMusicClips[Random.Range(0, audioMusicClips.Length - 1)];
        sources[0].Play();
    }

    private void StopPlayMusic()
    {
        sources[0].Stop();
    }
}
