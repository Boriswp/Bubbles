using System;
using YandexMobileAds;
using YandexMobileAds.Base;
using UnityEngine;

public class AdModule : MonoBehaviour
{
    private Banner bannerView;
    private RewardedAd rewardedAd;
    private Interstitial interstitialAd;
    public delegate void OnGetReward();
    public static OnGetReward onGetReward;
    public delegate void ShowRewrdedAD();
    public static ShowRewrdedAD showRewardedAD;
    public delegate void InterestialAD();
    public static InterestialAD showInterestialAD;
    public static AdModule Instance;


    private void Awake()
    {
        GameObject[] objs = GameObject.FindGameObjectsWithTag("ADMob");

        if (objs.Length > 1)
        {
            Destroy(gameObject);
            return;
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
#if UNITY_ANDROID || UNITY_IOS
        showRewardedAD += ShowRewardedAd;
        showInterestialAD += ShowInterstitial;
        LoadRewardedAd();
        RequestBanner();
        LoadInterstitialAd();
#elif UNITY_WEBGL
          showRewardedAD += ShowYandexRewardedAD;
          showInterestialAD += ShowYandexInterestialAD;
          YandexSDK.YaSDK.onRewardedAdReward += UserGetYandexReward;
#endif
    }

    private void OnDisable()
    {
#if UNITY_ANDROID || UNITY_IOS
        showRewardedAD -= ShowRewardedAd;
        showInterestialAD -= ShowInterstitial;
#elif UNITY_WEBGL
        showRewardedAD -= ShowYandexRewardedAD;
        showInterestialAD -= ShowYandexInterestialAD;
        YandexSDK.YaSDK.onRewardedAdReward -= UserGetYandexReward;
#endif
    }

    private void RequestBanner()
    {
#if UNITY_ANDROID
        string adUnitId = "R-M-2385670-1";
#elif UNITY_IOS
        string adUnitId = "demo-banner-yandex";
#else
        string adUnitId = "unsupport";
#endif
        // Create a 320x50 banner at the top of the screen.
        AdSize adSize = AdSize.FlexibleSize(320, 50);
        bannerView = new Banner(adUnitId, adSize, AdPosition.BottomCenter);
        AdRequest request = new AdRequest.Builder().Build();
        bannerView.LoadAd(request);
    }


    public void LoadRewardedAd()
    {

#if UNITY_ANDROID
        string adUnitId = "R-M-2385670-4";
#elif UNITY_IPHONE
        string adUnitId = "demo-rewarded-yandex";
#else
        string adUnitId = "unexpected_platform";
#endif

        if (rewardedAd != null)
        {
            rewardedAd.Destroy();
            rewardedAd = null;
        }
        rewardedAd = new RewardedAd(adUnitId);

        rewardedAd.OnRewardedAdLoaded += this.HandleRewardedAdLoaded;
        this.rewardedAd.OnRewardedAdFailedToLoad += this.HandleRewardedAdFailedToLoad;
        this.rewardedAd.OnReturnedToApplication += this.HandleReturnedToApplicationRewarded;
        this.rewardedAd.OnLeftApplication += this.HandleLeftApplication;
        this.rewardedAd.OnAdClicked += this.HandleAdClicked;
        this.rewardedAd.OnRewardedAdShown += this.HandleRewardedAdShown;
        this.rewardedAd.OnRewardedAdDismissed += this.HandleRewardedAdDismissed;
        this.rewardedAd.OnImpression += this.HandleImpression;
        this.rewardedAd.OnRewarded += this.HandleRewarded;
        this.rewardedAd.OnRewardedAdFailedToShow += this.HandleRewardedAdFailedToShow;

        Debug.Log("Loading the rewarded ad.");

        var adRequest = new AdRequest.Builder().Build();

        rewardedAd.LoadAd(adRequest);
    }

    public void LoadInterstitialAd()
    {
#if UNITY_ANDROID
        string _adUnitId = "R-M-2385670-3";
#elif UNITY_IOS
        string _adUnitId = "demo-interstitial-yandex";
#else
        string _adUnitId = "unexpected_platform";
#endif

        if (interstitialAd != null)
        {
            interstitialAd.Destroy();
            interstitialAd = null;
        }

        interstitialAd = new Interstitial(_adUnitId);
        interstitialAd.OnInterstitialLoaded += this.HandleInterstitialLoaded;
        interstitialAd.OnInterstitialFailedToLoad += this.HandleInterstitialFailedToLoad;
        interstitialAd.OnReturnedToApplication += this.HandleReturnedToApplication;
        interstitialAd.OnLeftApplication += this.HandleLeftApplication;
        interstitialAd.OnAdClicked += this.HandleAdClicked;
        interstitialAd.OnInterstitialShown += this.HandleInterstitialShown;
        interstitialAd.OnInterstitialDismissed += this.HandleInterstitialDismissed;
        interstitialAd.OnImpression += this.HandleImpression;
        interstitialAd.OnInterstitialFailedToShow += this.HandleInterstitialFailedToShow;

        Debug.Log("Loading the interstitial ad.");

        var adRequest = new AdRequest.Builder().Build();
        interstitialAd.LoadAd(adRequest);
    }

    public void ShowYandexInterestialAD()
    {
        YandexSDK.YaSDK.instance.ShowInterstitial();
    }

    public void ShowYandexRewardedAD()
    {
        YandexSDK.YaSDK.instance.ShowRewarded("bonus");
    }

    public void UserGetYandexReward(string reward)
    {
        onGetReward.Invoke();
    }

    private void ShowRewardedAd()
    {
        if (this.rewardedAd.IsLoaded())
        {
            Debug.Log("Rewarded Ad show");
            rewardedAd.Show();
        }
        else
        {
            Debug.Log("Rewarded Ad is not ready yet");
        }
    }

    private void ShowInterstitial()
    {
        if (interstitialAd.IsLoaded())
        {
            interstitialAd.Show();
        }
        else
        {
            Debug.Log("Interstitial is not ready yet");
        }
    }

    public void HandleInterstitialLoaded(object sender, EventArgs args)
    {
        print("HandleInterstitialLoaded event received");
    }

    public void HandleInterstitialFailedToLoad(object sender, AdFailureEventArgs args)
    {
        print(
            "HandleInterstitialFailedToLoad event received with message: " + args.Message);
    }

    public void HandleReturnedToApplication(object sender, EventArgs args)
    {
        print("HandleReturnedToApplication event received");
        LoadInterstitialAd();
    }

    public void HandleReturnedToApplicationRewarded(object sender, EventArgs args)
    {
        print("HandleReturnedToApplication event received");
        LoadRewardedAd();
    }

    public void HandleLeftApplication(object sender, EventArgs args)
    {
        print("HandleLeftApplication event received");
    }

    public void HandleAdClicked(object sender, EventArgs args)
    {
        print("HandleAdClicked event received");
    }

    public void HandleInterstitialShown(object sender, EventArgs args)
    {
        print("HandleInterstitialShown event received");
    }

    public void HandleInterstitialDismissed(object sender, EventArgs args)
    {
        print("HandleInterstitialDismissed event received");
        LoadInterstitialAd();
    }

    public void HandleImpression(object sender, ImpressionData impressionData)
    {
        var data = impressionData == null ? "null" : impressionData.rawData;
        print("HandleImpression event received with data: " + data);
    }

    public void HandleInterstitialFailedToShow(object sender, AdFailureEventArgs args)
    {
        LoadInterstitialAd();
        print(
            "HandleInterstitialFailedToShow event received with message: " + args.Message);
    }

    public void HandleRewardedAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardedAdLoaded event received");
    }

    public void HandleRewardedAdFailedToLoad(object sender, AdFailureEventArgs args)
    {
        LoadRewardedAd();
        MonoBehaviour.print(
            "HandleRewardedAdFailedToLoad event received with message: " + args.Message);
    }


    public void HandleRewardedAdShown(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardedAdShown event received");
    }

    public void HandleRewardedAdDismissed(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardedAdDismissed event received");
        LoadRewardedAd();
    }


    public void HandleRewarded(object sender, Reward args)
    {
        MonoBehaviour.print("HandleRewarded event received: amout = " + args.amount + ", type = " + args.type);
        onGetReward.Invoke();
    }

    public void HandleRewardedAdFailedToShow(object sender, AdFailureEventArgs args)
    {
        MonoBehaviour.print(
            "HandleRewardedAdFailedToShow event received with message: " + args.Message);
    }

}
