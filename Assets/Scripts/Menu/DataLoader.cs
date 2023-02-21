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

    public static void SaveProfileData()
    {
        Helpers.WriteProfileDataToJson(profileData);
    }

    public static void SetCurrentTime(long time)
    {
        profileData.Time_to_lives_respawn = time;
        SaveProfileData();
    }

    public static void UnsetLvlBonus(int count)
    {
        profileData.On_lvl_Bonus_Balls = 0;
        profileData.Bonus_Balls_Count += count;
    }

    public static void SetOnLvlBonus(int count)
    {
        profileData.On_lvl_Bonus_Balls = count;
        profileData.Bonus_Balls_Count -= count;
    }

    public static int GetBonusBallsCount()
    {
        return profileData.Bonus_Balls_Count;
    }

    public static int GetMoney()
    {
        return profileData.money;
    }

    public static float GetInvulnerableTime()
    {
        return profileData.Invulnerable_time;
    }

    public static long GetTime()
    {
        return profileData.Time_to_lives_respawn;

    }

    public static void SetMoneyBonus(int money)
    {
        profileData.money += money;
    }

    public static void SetBonusBalls(int count)
    {
        profileData.Bonus_Balls_Count += count;
        SaveProfileData();
    }

    public static void DecreaseStarsBonus()
    {
        profileData.Stars_Count -= 7;
        SaveProfileData();
    }

    public static void SetStarsBonus()
    {
        profileData.Stars_Count += 2;
        SaveProfileData();
    }

    public static void SetInvulnerable(float time)
    {
        profileData.Invulnerable_time = time;
        SaveProfileData();
    }

    public static int GetTotalStarsCount()
    {
        return profileData.Stars_Count;
    }

    public static int GetLVLBonusBalls()
    {
        var temp = profileData.On_lvl_Bonus_Balls;
        profileData.On_lvl_Bonus_Balls = 0;
        SaveProfileData();
        return temp;
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
        SaveProfileData();
    }

    public static void setStarsToLVL(int starsCount)
    {
        if (testMode) return;
        if (profileData.Passed_Lvls.Count <= lvlToload)
        {
            profileData.Passed_Lvls.Add(starsCount);
            profileData.Stars_Count += starsCount;
        }
        else
        {
            if (profileData.Passed_Lvls[lvlToload] < starsCount)
            {
                profileData.Stars_Count += starsCount - profileData.Passed_Lvls[lvlToload];
                profileData.Passed_Lvls[lvlToload] = starsCount;
            }
        }

        if (profileData.Curr_Lvl == lvlToload)
        {
            profileData.Curr_Lvl++;
        }

        SaveProfileData();
    }

    public static void setCurrentLvl(int lvlIndex)
    {
        profileData.Curr_Lvl = lvlIndex;
        SaveProfileData();
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
        SaveProfileData();
    }

    public static void setMusicStatus(bool isEnabled)
    {
        profileData.music = isEnabled;
        SaveProfileData();
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

    public static int GetBombsCount()
    {
        return profileData.Bonus_Bombs_Count;
    }

    public static int GetLightsCount()
    {
        return profileData.Bonus_Lighting_Count;
    }

    public static int GetRainbowCount()
    {
        return profileData.Bonus_Random_Count;
    }

    public static int GetFireBallCount()
    {
        return profileData.Bonus_Fire_Count;
    }

    public static void IncreaseBombsCount()
    {
        profileData.Bonus_Bombs_Count += 1;
    }

    public static void IncreaseLightsCount()
    {
        profileData.Bonus_Lighting_Count += 1;
    }

    public static void IncreaseRainbowCount()
    {
        profileData.Bonus_Random_Count += 1;
    }

    public static void IncreaseFireBallCount()
    {
        profileData.Bonus_Fire_Count += 1;
    }
}
