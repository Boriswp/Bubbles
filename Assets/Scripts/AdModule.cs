using System;
using GoogleMobileAds.Api;
using UnityEngine;

public class AdModule : MonoBehaviour
{
    private BannerView bannerView;
    private RewardedAd rewardedAd;
    private InterstitialAd interstitialAd;
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
        showInterestialAD += ShowAd;
#if UNITY_ANDROID || UNITY_IOS
        MobileAds.Initialize(initStatus =>
        {
            LoadRewardedAd();
            RequestBanner();
            LoadInterstitialAd();
        });
#endif
    }

    private void OnDisable()
    {
        showRewardedAD -= ShowRewardedAd;
        showInterestialAD -= ShowAd;
    }

    private void RequestBanner()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-3940256099942544/6300978111";
#elif UNITY_IOS
        string adUnitId = "ca-app-pub-3940256099942544/2934735716";
#else
        string adUnitId = "ca-app-pub-3940256099942544/6300978111";
#endif
        // Create a 320x50 banner at the top of the screen.
        bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
        AdRequest request = new AdRequest.Builder().Build();
        bannerView.LoadAd(request);
    }


    public void LoadRewardedAd()
    {

#if UNITY_ANDROID
        string _adUnitId = "ca-app-pub-3940256099942544/5224354917";
#elif UNITY_IOS
        string _adUnitId = "ca-app-pub-3940256099942544/1712485313";
#else
        string _adUnitId = "unexpected_platform";
#endif
        if (rewardedAd != null)
        {
            rewardedAd.Destroy();
            rewardedAd = null;
        }

        Debug.Log("Loading the rewarded ad.");

        var adRequest = new AdRequest.Builder().Build();

        RewardedAd.Load(_adUnitId, adRequest,
            (RewardedAd ad, LoadAdError error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("Rewarded ad failed to load an ad " +
                                   "with error : " + error);
                    return;
                }

                Debug.Log("Rewarded ad loaded with response : "
                          + ad.GetResponseInfo());
                ad.OnAdFullScreenContentClosed += () =>
                {
                    Debug.Log("Rewarded Ad full screen content closed.");
                    LoadRewardedAd();
                };

                ad.OnAdFullScreenContentFailed += (AdError error) =>
                {
                    Debug.LogError("Rewarded ad failed to open full screen content " +
                                   "with error : " + error);
                    LoadRewardedAd();
                };
                rewardedAd = ad;
            });
    }

    public void LoadInterstitialAd()
    {
#if UNITY_ANDROID
        string _adUnitId = "ca-app-pub-3940256099942544/1033173712";
#elif UNITY_IOS
        string _adUnitId = "ca-app-pub-3940256099942544/4411468910";
#else
        string _adUnitId = "unexpected_platform";
#endif

        if (interstitialAd != null)
        {
            interstitialAd.Destroy();
            interstitialAd = null;
        }

        Debug.Log("Loading the interstitial ad.");

        var adRequest = new AdRequest.Builder()
                .AddKeyword("unity-admob-sample")
                .Build();

        InterstitialAd.Load(_adUnitId, adRequest,
            (InterstitialAd ad, LoadAdError error) =>
            {
                if (error != null || ad == null)
                {
                    Debug.LogError("interstitial ad failed to load an ad " +
                                   "with error : " + error);
                    return;
                }

                Debug.Log("Interstitial ad loaded with response : "
                          + ad.GetResponseInfo());
                ad.OnAdFullScreenContentClosed += () =>
                {
                    Debug.Log("Interstitial Ad full screen content closed.");
                    LoadInterstitialAd();
                };

                ad.OnAdFullScreenContentFailed += (AdError error) =>
                {
                    Debug.LogError("Interstitial ad failed to open full screen content " +
                                   "with error : " + error);
                    LoadInterstitialAd();
                };
                interstitialAd = ad;
            });
    }

    public void ShowRewardedAd()
    {
        const string rewardMsg =
                "Rewarded ad rewarded the user. Type: {0}, amount: {1}.";

        if (rewardedAd != null && rewardedAd.CanShowAd())
        {
            rewardedAd.Show((Reward reward) =>
            {
                Debug.Log(String.Format(rewardMsg, reward.Type, reward.Amount));
                onGetReward.Invoke();
            });
        }
    }

    public void ShowAd()
    {
        if (interstitialAd != null && interstitialAd.CanShowAd())
        {
            Debug.Log("Showing interstitial ad.");
            interstitialAd.Show();
        }
        else
        {
            Debug.LogError("Interstitial ad is not ready yet.");
        }
    }

}
