using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.UI;
using UnityEngine.UI.ProceduralImage;

public class BoxController : MonoBehaviour
{
    public TextMeshProUGUI starsCount;
    public ProceduralImage proceduralUiImage;
    public TextMeshProUGUI boxCount;
    public GameObject counter;
    public GameObject getPrise;
    public Image image;
    public Sprite boxClose;
    public Sprite boxOpen;
    private bool getBox = false;

    void Update()
    {
        var star_count = DataLoader.GetTotalStarsCount();
        getBox = Constants.MAX_STARS_TO_BOX <= star_count;
        proceduralUiImage.color = getBox ? new Color(79 / 255f, 255 / 255f, 64 / 255f) : new Color(195 / 255f, 97 / 255f, 255 / 255f);
        image.sprite = getBox ? boxOpen : boxClose;
        starsCount.text = getBox ? $"{LocalizationSettings.StringDatabase.GetLocalizedString("Menu/Canvas/SafeArea/BoxSection/BoxViolet/Text(TMP)")}" : $"{star_count}/{Constants.MAX_STARS_TO_BOX}";
        var box_count = star_count / Constants.MAX_STARS_TO_BOX;
        counter.SetActive(box_count >= 1);
        boxCount.text = box_count.ToString();
    }

    public void GetBox()
    {
        if (!getBox) return;
        getPrise.SetActive(true);
        getPrise.GetComponent<BoxReward>().GetPrise();
    }
}
