using System;
using YandexMobileAds;
using YandexMobileAds.Base;
using UnityEngine;

public class AdModule : MonoBehaviour
{
    private Banner bannerView;
    private RewardedAd rewardedAd;
    private RewardedAdLoader rewardedAdLoader;
    private InterstitialAdLoader interstitialAdLoader;
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

        showRewardedAD += ShowRewardedAd;
        showInterestialAD += ShowInterstitial;
#if UNITY_ANDROID || UNITY_IOS

        LoadRewardedAd();
        RequestBanner();
        LoadInterstitialAd();
#endif
    }

    private void OnDisable()
    {
        showRewardedAD -= ShowRewardedAd;
        showInterestialAD -= ShowInterstitial;
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
        BannerAdSize adSize = BannerAdSize.StickySize(320);
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
      
        rewardedAdLoader = new RewardedAdLoader();
        rewardedAdLoader.OnAdLoaded += HandleRewardedAdLoaded;

        Debug.Log("Loading the rewarded ad.");
    
        AdRequestConfiguration adRequestConfiguration = new AdRequestConfiguration.Builder(adUnitId).Build();
        rewardedAdLoader.LoadAd(adRequestConfiguration);
    }

    public void LoadInterstitialAd()
    {
#if UNITY_ANDROID
        string adUnitId = "R-M-2385670-3";
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
        interstitialAdLoader = new InterstitialAdLoader();
        interstitialAdLoader.OnAdLoaded += HandleInterstitialLoaded;
        interstitialAdLoader.OnAdFailedToLoad += HandleInterstitialFailedToLoad;


        Debug.Log("Loading the interstitial ad.");
        
        AdRequestConfiguration adRequestConfiguration = new AdRequestConfiguration.Builder(adUnitId).Build();
        interstitialAdLoader.LoadAd(adRequestConfiguration);
    }

    private void ShowRewardedAd()
    {
        if (this.rewardedAd!=null)
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
        if (interstitialAd!=null)
        {
            interstitialAd.Show();
        }
        else
        {
            Debug.Log("Interstitial is not ready yet");
        }
    }

    public void HandleInterstitialLoaded(object sender, InterstitialAdLoadedEventArgs args)
    {
        print("HandleInterstitialLoaded event received");
        interstitialAd = args.Interstitial;
        interstitialAd.OnAdClicked += HandleAdClicked;
        interstitialAd.OnAdShown += HandleInterstitialShown;
        interstitialAd.OnAdFailedToShow += HandleInterstitialFailedToShow;
        interstitialAd.OnAdDismissed += HandleInterstitialDismissed;
        interstitialAd.OnAdImpression += HandleImpression;
    }

    public void HandleInterstitialFailedToLoad(object sender, AdFailedToLoadEventArgs args)
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

    public void HandleRewardedAdLoaded(object sender, RewardedAdLoadedEventArgs args)
    {
        MonoBehaviour.print("HandleRewardedAdLoaded event received");
        rewardedAd = args.RewardedAd;
        rewardedAd.OnAdClicked += HandleAdClicked;
        rewardedAd.OnAdShown += HandleRewardedAdShown;
        rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        rewardedAd.OnAdDismissed += HandleRewardedAdDismissed;
        rewardedAd.OnAdImpression += HandleImpression;
        rewardedAd.OnRewarded += HandleRewarded;

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
