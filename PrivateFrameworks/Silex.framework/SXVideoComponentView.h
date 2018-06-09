/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoComponentView : SXMediaComponentView <SXFullscreenVideoPlaybackCandidate, SXMediaPlaybackDelegate, SXReachabilityObserver, SXVideoAdProviderDataSource, SXVideoPlayerViewControllerDataSource, SXVideoPlayerViewControllerDelegate, SXViewportChangeListener> {
    SXAdController * _adController;
    SXVideoAnalyticsRouter * _analyticsRouter;
    <SXAppStateMonitor> * _appStateMonitor;
    ADBannerView * _bannerView;
    <SXBookmarkManager> * _bookmarkManager;
    bool  _isReceivingViewportDynamicBoundsChanges;
    SXPosterFrameView * _posterFrame;
    id /* block */  _presentationBlock;
    <SXReachabilityProvider> * _reachabilityProvider;
    <SXResourceDataSource> * _resourceDataSource;
    <SXScrollObserverManager> * _scrollObserverManager;
    id /* block */  _thumbnailRequestCancelHandler;
    SXVideoComponentAnalyticsReporting * _videoComponentAnalyticsReporter;
    SXVideoPlayerViewController * _videoPlayerViewController;
    SXVideoPlayerViewControllerManager * _videoPlayerViewControllerManager;
    SVVolumeProvider * _volumeProvider;
}

@property (nonatomic, readonly) SXAdController *adController;
@property (nonatomic, retain) SXVideoAnalyticsRouter *analyticsRouter;
@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic) ADBannerView *bannerView;
@property (nonatomic, readonly) <SXBookmarkManager> *bookmarkManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isReceivingViewportDynamicBoundsChanges;
@property (nonatomic, retain) SXPosterFrameView *posterFrame;
@property (nonatomic, copy) id /* block */ presentationBlock;
@property (nonatomic, readonly) <SXReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (nonatomic, readonly) <SXScrollObserverManager> *scrollObserverManager;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ thumbnailRequestCancelHandler;
@property (nonatomic, retain) SXVideoComponentAnalyticsReporting *videoComponentAnalyticsReporter;
@property (nonatomic, retain) SXVideoPlayerViewController *videoPlayerViewController;
@property (nonatomic, readonly) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;
@property (nonatomic, readonly) SVVolumeProvider *volumeProvider;

- (void).cxx_destruct;
- (id)adController;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (id)analyticsRouter;
- (unsigned long long)analyticsVideoType;
- (id)appStateMonitor;
- (id)bannerView;
- (id)bookmarkManager;
- (bool)canEnterFullscreen;
- (void)discardContents;
- (void)enterFullscreen;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 reachabilityProvider:(id)arg8 adController:(id)arg9 scrollObserverManager:(id)arg10 volumeProvider:(id)arg11 videoPlayerViewControllerManager:(id)arg12 bookmarkManager:(id)arg13;
- (bool)isReceivingViewportDynamicBoundsChanges;
- (void)loadComponent:(id)arg1;
- (void)loadPosterFrameImage;
- (void)pauseMediaPlayback;
- (void)pausePrerollIfNeeded;
- (void)playButtonTapped;
- (id)posterFrame;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (id /* block */)presentationBlock;
- (void)reachabilityChanged:(bool)arg1;
- (id)reachabilityProvider;
- (void)registerAsMediaPlaybackDelegate;
- (void)registerForViewportDynamicBoundsChanges;
- (void)renderContents;
- (id)resourceDataSource;
- (id)scrollObserverManager;
- (void)setAnalyticsRouter:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setIsReceivingViewportDynamicBoundsChanges:(bool)arg1;
- (void)setPosterFrame:(id)arg1;
- (void)setPresentationBlock:(id /* block */)arg1;
- (void)setThumbnailRequestCancelHandler:(id /* block */)arg1;
- (void)setVideoComponentAnalyticsReporter:(id)arg1;
- (void)setVideoPlayerViewController:(id)arg1;
- (void)setupVideoPlayerViewController:(id)arg1;
- (id /* block */)thumbnailRequestCancelHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)transitionViewUsesThumbnail;
- (void)unloadVideoPlayerIfShowingAd;
- (void)unregisterForViewportDynamicBoundsChanges;
- (id)videoAdForVideoPlayerViewController:(id)arg1;
- (id /* block */)videoAdWithCompletionBlock:(id /* block */)arg1;
- (id)videoComponentAnalyticsReporter;
- (id)videoForVideoPlayerViewController:(id)arg1;
- (bool)videoPlayerIsMoreThan50PercentVisible;
- (id)videoPlayerViewController;
- (void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;
- (id)videoPlayerViewControllerManager;
- (bool)videoPlayerViewControllerShouldStartPlayback:(id)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(id)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (id)volumeProvider;

@end
