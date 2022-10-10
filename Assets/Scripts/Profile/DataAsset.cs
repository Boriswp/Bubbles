using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Scriptables/DataScriptable")]
public class DataAsset : ScriptableObject
{
    public SaveData lvlData;
    public ProfileData profileData;
}
