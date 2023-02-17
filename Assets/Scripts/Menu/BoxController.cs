using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.ProceduralImage;

public class BoxController : MonoBehaviour
{
    public TextMeshProUGUI starsCount;
    public ProceduralImage proceduralUiImage;
    public Image image;
    public Sprite boxClose;
    public Sprite boxOpen;
    private bool getBox = false;

    void Update()
    {
        getBox = Constants.MAX_STARS_TO_BOX <= DataLoader.GetTotalStarsCount();
        proceduralUiImage.color = getBox ? new Color(79 / 255f, 255 / 255f, 64 / 255f) : new Color(195 / 255f, 97 / 255f, 255 / 255f);
        image.sprite = getBox ? boxOpen : boxClose;
        starsCount.text = getBox ? "Собрать" : $"{DataLoader.GetTotalStarsCount()}/{Constants.MAX_STARS_TO_BOX}";
    }

    public void GetBox()
    {
        if (!getBox) return;
    }
}
