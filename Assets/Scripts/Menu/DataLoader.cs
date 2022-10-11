using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DataLoader
{
   public static bool isInitialize = false;
   public static int currentLvl = 0;
   public static int lvlToload = 0;
   public static TextAsset[] lvls;
   public static ProfileData profileData;

   public delegate void OnDataInitialize();
   public static OnDataInitialize onDataInitialize;
   
   [RuntimeInitializeOnLoadMethod]
   public static void loadData()
   {
      lvls = Resources.LoadAll<TextAsset>("LevelsPack");
      Debug.Log(lvls.Length);
      profileData = Helpers.ReadProfileDataFromJson();
      isInitialize = true;
      onDataInitialize?.Invoke();
   }

}
