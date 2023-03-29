using System.Collections.Generic;


[System.Serializable]
public class ProfileData
{
    public int Lifes = 7;
    public float Invulnerable_time;
    public long Time_to_lives_respawn;
    public long Time_to_get_reward;
    public long Time_to_get_spin;
    public int Count_to_show_Ad;
    public int current_day_reward;
    public int money;
    public bool sound = true;
    public bool music = true;
    public int Stars_Count = 0;
    public int On_lvl_Bonus_Balls = 0;
    public int Bonus_Balls_Count;
    public int Bonus_Bombs_Count = 0;
    public int Bonus_Lighting_Count = 0;
    public int Bonus_Fire_Count = 0;
    public int Bonus_Random_Count= 0;
    public int Curr_Lvl;
    public List<int> Passed_Lvls;
}
