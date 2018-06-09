/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoAdProvider : NSObject <ADBannerViewInternalDelegate, SXVideoAdProviding> {
    <SXVASTAnalyticsEventInfoFactory> * _analyticsEventInfoFactory;
    <SXAnalyticsReporting> * _analyticsReporter;
    <SXVideoAdProviderDataSource> * _dataSource;
    <SXVideoAdViewControllerProviding> * _fullscreenViewControllerProvider;
    <SVVideoMetadataProviding> * _metadata;
    SXPrerollAdResponse * _response;
    SXVideoAdStateManager * _stateManager;
    SVTimeline * _timeline;
    <SVVisibilityMonitoring> * _videoPlayerVisibilityMonitor;
    <SVVisibilityMonitoring> * _videoVisibilityMonitor;
}

@property (nonatomic, readonly) <SXVASTAnalyticsEventInfoFactory> *analyticsEventInfoFactory;
@property (nonatomic, retain) <SXAnalyticsReporting> *analyticsReporter;
@property (nonatomic) <SXVideoAdProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXVideoAdViewControllerProviding> *fullscreenViewControllerProvider;
@property (nonatomic, readonly) bool hasAction;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SVVideoMetadataProviding> *metadata;
@property (nonatomic, retain) SXPrerollAdResponse *response;
@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (nonatomic, readonly) SXVideoAdStateManager *stateManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) <SVVisibilityMonitoring> *videoPlayerVisibilityMonitor;
@property (nonatomic, readonly) <SVVisibilityMonitoring> *videoVisibilityMonitor;

- (void).cxx_destruct;
- (id)analyticsEventInfoFactory;
- (id)analyticsReporter;
- (void)configureTimelineForImpressionReporting;
- (id)dataSource;
- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (id)fullscreenViewControllerProvider;
- (bool)hasAction;
- (id)initWithViewControllerProvider:(id)arg1 analyticsEventInfoFactory:(id)arg2 videoPlayerVisibilityMonitor:(id)arg3 videoVisibilityMonitor:(id)arg4;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (id)metadata;
- (void)muteStateChanged:(bool)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)presentAction;
- (void)presentPrivacyStatement;
- (void)reportEngagementEventWithType:(unsigned long long)arg1;
- (id)response;
- (void)setAnalyticsReporter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setResponse:(id)arg1;
- (unsigned long long)skipThreshold;
- (void)skipped;
- (id)stateManager;
- (void)tappedToToggleControls;
- (double)threshold;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (id)timeline;
- (id)videoPlayerVisibilityMonitor;
- (id)videoVisibilityMonitor;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end
