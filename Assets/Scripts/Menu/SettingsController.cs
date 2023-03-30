using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.UI;

public class SettingsController : MonoBehaviour
{

    public GameObject Sound_on;
    public GameObject Sound_off;
    public GameObject Music_on;
    public GameObject Music_off;
    private int selected;

    void Awake()
    {
        Music_on.SetActive(DataLoader.getMusicStatus());
        Music_off.SetActive(!DataLoader.getMusicStatus());
        Sound_on.SetActive(DataLoader.getSoundStatus());
        Sound_off.SetActive(!DataLoader.getSoundStatus());
        for (int i = 0; i < LocalizationSettings.AvailableLocales.Locales.Count; ++i)
        {
            var locale = LocalizationSettings.AvailableLocales.Locales[i];
            if (LocalizationSettings.SelectedLocale == locale)
                selected = i;
        }
    }

    public void OpenFaqUrl()
    {
        Application.OpenURL(Constants.FAQ_URL);
    }

    public void playButtonSound()
    {
        SoundController.soundEvent?.Invoke(SoundEvent.BUTTONSOUND);
    }

    public void MusicToggle(bool isActive)
    {
        Music_on.SetActive(isActive);
        Music_off.SetActive(!isActive);
        SoundController.soundEvent?.Invoke(SoundEvent.MUSICEVENT);
        DataLoader.setMusicStatus(isActive);
    }

    public void OnLanguageChange()
    {
        selected++;

        if (selected == LocalizationSettings.AvailableLocales.Locales.Count)
        {
            selected = 0;
        }

        LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[selected];

    }

    public void SoundToggle(bool isActive)
    {
        Sound_on.SetActive(isActive);
        Sound_off.SetActive(!isActive);
        DataLoader.setSoundStatus(isActive);
    }

}
