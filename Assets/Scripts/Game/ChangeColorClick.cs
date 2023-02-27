using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColorClick : MonoBehaviour
{
    public delegate void OnRefreshClick();
    public static OnRefreshClick onRefreshClick;



    void OnMouseDown()
    {
        SoundController.soundEvent?.Invoke(SoundEvent.BUTTONSOUND);
        onRefreshClick.Invoke();    
    }
}
