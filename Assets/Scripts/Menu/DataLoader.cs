using System.IO;
using UnityEngine;

public static class DataLoader
{
    public static bool testMode = false;
    public static bool isInitialize;
    public static int lvlToload = 0;
    public static TextAsset[] lvls;
    private static ProfileData profileData;

    public delegate void OnDataInitialize();
    public static OnDataInitialize onDataInitialize;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    private static void loadData()
    {
        lvls = Resources.LoadAll<TextAsset>("LevelsPack");
        Debug.Log(lvls.Length);
        profileData = Helpers.ReadProfileDataFromJson();
        isInitialize = true;
        onDataInitialize?.Invoke();
    }

    public static void SetCurrentTime(long time)
    {
        profileData.Time_to_lives_respawn = time;
        Helpers.WriteProfileDataToJson(profileData);
    }

    public static long GetTime()
    {
        return profileData.Time_to_lives_respawn;

    }

    public static int GetStarsCount(int index)
    {
        return index >= profileData.Passed_Lvls.Count ? 0 : profileData.Passed_Lvls[index] > 3 ? 3 : profileData.Passed_Lvls[index] < 0 ? 0 : profileData.Passed_Lvls[index];
    }

    public static int GetLifeCount()
    {
        return profileData.Lifes;
    }


    public static void setCurrentLifesCount(int lifesCount)
    {
        Debug.Log(lifesCount);
        profileData.Lifes = lifesCount;
        Helpers.WriteProfileDataToJson(profileData);
    }

    public static void setStarsToLVL(int starsCount)
    {
        if (testMode) return;
        if (profileData.Passed_Lvls.Count <= lvlToload)
        {
            profileData.Passed_Lvls.Add(lvlToload);
        }
        else
        {
            if (profileData.Passed_Lvls[lvlToload] < starsCount)
            {
                profileData.Passed_Lvls[lvlToload] = starsCount;
            }
        }

        if (profileData.Curr_Lvl == lvlToload)
        {
            profileData.Curr_Lvl++;
        }

        Helpers.WriteProfileDataToJson(profileData);
    }

    public static void setCurrentLvl(int lvlIndex)
    {
        profileData.Curr_Lvl = lvlIndex;
        Helpers.WriteProfileDataToJson(profileData);
    }

    public static bool getSoundStatus()
    {
        return profileData.sound;
    }

    public static bool getMusicStatus()
    {
        return profileData.music;
    }

    public static void setSoundStatus(bool isEnabled)
    {
        profileData.sound = isEnabled;
        Helpers.WriteProfileDataToJson(profileData);
    }

    public static void setMusicStatus(bool isEnabled)
    {
        profileData.music = isEnabled;
        Helpers.WriteProfileDataToJson(profileData);
    }

    public static string getLvl()
    {
        if (testMode) 
        {
            return File.ReadAllText($"{Application.persistentDataPath}/lvl.json"); 
        }
        else
        {
            return lvls[lvlToload].text;
        }
    }

    public static int GetCurrentLvl()
    {
        return profileData.Curr_Lvl;
    } 
}
