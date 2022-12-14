using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingsController : MonoBehaviour
{

    public GameObject Sound_on;
    public GameObject Sound_off;
    public GameObject Music_on;
    public GameObject Music_off;

    void Awake()
    {
        Music_on.SetActive(DataLoader.getMusicStatus());
        Music_off.SetActive(!DataLoader.getMusicStatus());
        Sound_on.SetActive(DataLoader.getSoundStatus());
        Sound_off.SetActive(!DataLoader.getSoundStatus());
    }


    public void MusicToggle(bool isActive)
    {
        Music_on.SetActive(isActive);
        Music_off.SetActive(!isActive);
        SoundController.soundEvent.Invoke(SoundEvent.MUSICEVENT);
        DataLoader.setMusicStatus(isActive);
    }


    public void SoundToggle(bool isActive)
    {
        Sound_on.SetActive(isActive);
        Sound_off.SetActive(!isActive);
        DataLoader.setSoundStatus(isActive);
    }

}
