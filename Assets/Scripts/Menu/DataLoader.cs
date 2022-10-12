using UnityEngine;

public static class DataLoader
{
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

   public static int GetStarsCount(int index)
   {
      return index >= profileData.Passed_Lvls.Count ? 0 : profileData.Passed_Lvls[index];
   }
   

   public static void setCurrentLifesCount(int lifesCount)
   {
      profileData.Lifes = lifesCount;
      Helpers.WriteProfileDataToJson(profileData);
   }

   public static void setStarsToLVL(int starsCount)
   {
      if (profileData.Passed_Lvls.Count>=lvlToload)
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

   public static int GetCurrentLvl()
   {
      return profileData.Curr_Lvl;
   }
}
