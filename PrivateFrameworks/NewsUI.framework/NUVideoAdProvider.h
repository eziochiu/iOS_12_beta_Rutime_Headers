/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoAdProvider : NSObject <ADBannerViewInternalDelegate, NUAdContextProvider, SVVideo, SVVideoAdProviding> {
    NSURL * _URL;
    <NUAdProvider> * _adProvider;
    <SXVASTAnalyticsEventInfoFactory> * _analyticsEventInfoFactory;
    NUAdBannerView * _bannerView;
    <NUAdContextProvider> * _contextProviderForVideoAfter;
    <NUAdContextProvider> * _contextProviderForVideoBefore;
    NSArray * _contextProviders;
    <NUVideoAdEventTracker> * _eventTracker;
    NSString * _identifier;
    <SVVideoMetadataProviding> * _metadata;
    <SVModalPresentationViewControllerProviding> * _modalPresentationViewControllerProvider;
    <NUVideoPlaybackCounter> * _playbackCounter;
    SVKeyValueObserver * _playbackStartedObserver;
    unsigned long long  _skipThreshold;
    SXVideoAdStateManager * _stateManager;
    <SVVisibilityMonitoring> * _videoPlayerVisibilityMonitor;
    <SVVisibilityMonitoring> * _videoVisibilityMonitor;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, readonly) <NUAdProvider> *adProvider;
@property (nonatomic, readonly) bool allowsCallToActionBar;
@property (nonatomic, readonly) <SXVASTAnalyticsEventInfoFactory> *analyticsEventInfoFactory;
@property (nonatomic, retain) NUAdBannerView *bannerView;
@property (nonatomic, retain) <NUAdContextProvider> *contextProviderForVideoAfter;
@property (nonatomic, retain) <NUAdContextProvider> *contextProviderForVideoBefore;
@property (nonatomic, copy) NSArray *contextProviders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <NUVideoAdEventTracker> *eventTracker;
@property (nonatomic, readonly) bool hasAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) <SVVideoMetadataProviding> *metadata;
@property (nonatomic, readonly) <SVModalPresentationViewControllerProviding> *modalPresentationViewControllerProvider;
@property (nonatomic, readonly) <NUVideoPlaybackCounter> *playbackCounter;
@property (nonatomic, retain) SVKeyValueObserver *playbackStartedObserver;
@property (nonatomic) unsigned long long skipThreshold;
@property (nonatomic, readonly) SXVideoAdStateManager *stateManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double threshold;
@property (nonatomic, readonly) <SVVisibilityMonitoring> *videoPlayerVisibilityMonitor;
@property (nonatomic, readonly) unsigned long long videoType;
@property (nonatomic, readonly) <SVVisibilityMonitoring> *videoVisibilityMonitor;

- (void).cxx_destruct;
- (id)URL;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)adProvider;
- (bool)allowsCallToActionBar;
- (id)analyticsEventInfoFactory;
- (id)bannerView;
- (id)contextProviderForVideoAfter;
- (id)contextProviderForVideoBefore;
- (id)contextProviders;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)eventTracker;
- (bool)hasAction;
- (id)identifier;
- (void)impressionQuartilePassed:(unsigned long long)arg1;
- (void)impressionThresholdPassed:(double)arg1;
- (id)initWithContextProviders:(id)arg1 adProvider:(id)arg2 contextProviderForVideoBefore:(id)arg3 contextProviderForVideoAfter:(id)arg4 eventTracker:(id)arg5 videoPlayerVisibilityMonitor:(id)arg6 videoVisibilityMonitorProvider:(id)arg7 analyticsEventInfoFactory:(id)arg8 playbackCounter:(id)arg9 modalPresentationViewControllerProvider:(id)arg10;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (id)metadata;
- (id)metadataForCurrentState;
- (id)modalPresentationViewControllerProvider;
- (void)muteStateChanged:(bool)arg1;
- (id)playbackCounter;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (id)playbackStartedObserver;
- (void)presentAction;
- (void)presentPrivacyStatement;
- (void)setBannerView:(id)arg1;
- (void)setContextProviderForVideoAfter:(id)arg1;
- (void)setContextProviderForVideoBefore:(id)arg1;
- (void)setContextProviders:(id)arg1;
- (void)setEventTracker:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPlaybackStartedObserver:(id)arg1;
- (void)setSkipThreshold:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (unsigned long long)skipThreshold;
- (void)skipped;
- (id)stateManager;
- (void)tappedAdvance;
- (void)tappedToToggleControls;
- (double)threshold;
- (id)videoPlayerVisibilityMonitor;
- (unsigned long long)videoType;
- (id)videoVisibilityMonitor;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end
