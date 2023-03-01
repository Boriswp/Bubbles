using System.Collections;
using System;
using System.Collections.Generic;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;
using UnityEngine;

public class AdModule : MonoBehaviour
{
    private BannerView bannerView;
    private InterstitialAd interstitial;
    private RewardedAd rewardedAd;
    public delegate void OnLoadAd();
    public static OnLoadAd onLoadAd;
    public delegate void OnAdReady();
    public static OnAdReady onAdReady;
    public delegate void OnGetReward();
    public static OnGetReward onGetReward;


    private void Start()
    {
#if UNITY_ANDROID || UNITY_IOS
        onLoadAd += RequestAndLoadRewardedAd;
        RequestBanner();
#endif
    }

    private void RequestBanner()
    {
#if UNITY_ANDROID
            string adUnitId = "ca-app-pub-3940256099942544/6300978111";
#elif UNITY_IPHONE
            string adUnitId = "ca-app-pub-3940256099942544/2934735716";
#else
        string adUnitId = "ca-app-pub-3940256099942544/6300978111";
#endif
        // Create a 320x50 banner at the top of the screen.
        bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
        AdRequest request = new AdRequest.Builder().Build();
        bannerView.LoadAd(request);
    }
    public void RequestAndLoadRewardedAd()
    {
#if UNITY_EDITOR
        string adUnitId = "unused";
#elif UNITY_ANDROID
        string adUnitId = "ca-app-pub-3940256099942544/5224354917";
#elif UNITY_IPHONE
        string adUnitId = "ca-app-pub-3940256099942544/1712485313";
#else
        string adUnitId = "unexpected_platform";
#endif

        rewardedAd = new RewardedAd(adUnitId);
        rewardedAd.OnAdLoaded += HandleOnAdLoaded;
        rewardedAd.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        rewardedAd.OnAdOpening += HandleOnAdOpening;
        rewardedAd.OnAdClosed += HandleOnAdClosed;
        rewardedAd.OnUserEarnedReward += HandleAdReward;

        var request = new AdRequest.Builder().Build();
        rewardedAd.LoadAd(request);
    }

    public void ShowRewardedAd()
    {
        if (rewardedAd != null)
        {
            rewardedAd.Show();
        }
    }

    private void RequestInterstitial()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-3940256099942544/1033173712";
#elif UNITY_IPHONE
        string adUnitId = "ca-app-pub-3940256099942544/4411468910";
#else
        string adUnitId = "unexpected_platform";
#endif

        // Initialize an InterstitialAd.
        interstitial = new InterstitialAd(adUnitId);
        interstitial.OnAdLoaded += HandleOnAdLoaded;
        interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        interstitial.OnAdOpening += HandleOnAdOpening;
        interstitial.OnAdClosed += HandleOnAdClosed;

        var request = new AdRequest.Builder().Build();
        interstitial.LoadAd(request);
    }

    public void HandleAdReward(object sender, EventArgs args)
    {
        onGetReward.Invoke();
    }

    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        onAdReady.Invoke();
    }

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
       print("HandleFailedToReceiveAd event received with message: "
                            + args);
    }

    public void HandleOnAdOpening(object sender, EventArgs args)
    {
        print("HandleAdOpening event received");
    }

    public void HandleOnAdClosed(object sender, EventArgs args)
    {
        print("HandleAdClosed event received");
    }

    public void playButtonSound()
    {
        SoundController.soundEvent?.Invoke(SoundEvent.BUTTONSOUND);
    }

}
