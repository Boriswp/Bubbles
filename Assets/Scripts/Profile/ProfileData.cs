using System.Collections.Generic;


[System.Serializable]
public class ProfileData
{
    public int Lifes = 7;
    public float Time_to_lives_respawn;
    public float Time_to_get_reward;
    public int money;
    public int Stars_Count;
    public int Bonus_Bombs_Count;
    public int Bonus_Lighting_Count;
    public int Bonus_Fire_Count;
    public int Bonus_Random_Count;
    public int Curr_Lvl;
    public List<int> Passed_Lvls;
}
