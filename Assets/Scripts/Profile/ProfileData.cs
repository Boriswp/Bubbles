using System.Collections.Generic;


[System.Serializable]
public class ProfileData
{
    public int Lifes = 7;
    public float Invulnerable_time;
    public long Time_to_lives_respawn;
    public long Time_to_get_reward;
    public int money;
    public bool sound = true;
    public bool music = true;
    public int Stars_Count = 0;
    public int On_lvl_Bonus_Balls=0;
    public int Bonus_Balls_Count;
    public int Bonus_Bombs_Count;
    public int Bonus_Lighting_Count;
    public int Bonus_Fire_Count;
    public int Bonus_Random_Count;
    public int Curr_Lvl;
    public List<int> Passed_Lvls;
}
