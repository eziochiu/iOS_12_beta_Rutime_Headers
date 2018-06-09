/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSBannerSource : NSObject <CPBannerProviding, CPSApplicationStateObserving, SBUIBannerSource, SBUIBannerTargetManagerObserver> {
    bool  _applicationActive;
    <SBUIBannerTarget> * _bannerTarget;
    <CPBannerDelegate> * _delegate;
    NSTimer * _dimissTimer;
    UIView<SBUIBannerView> * _displayedBannerView;
    NSMutableArray * _queuedItems;
    bool  _rateLimited;
}

@property (getter=isApplicationActive, nonatomic) bool applicationActive;
@property (nonatomic) <SBUIBannerTarget> *bannerTarget;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPBannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSTimer *dimissTimer;
@property (nonatomic) UIView<SBUIBannerView> *displayedBannerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *queuedItems;
@property (getter=isRateLimited, nonatomic) bool rateLimited;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissTimerFired:(id)arg1;
- (void)_enqueueBannerItem:(id)arg1;
- (void)_flushQueue;
- (void)_resetDismissTimer;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(bool)arg2;
- (id)bannerTarget;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)bannerViewDidAppear:(id)arg1;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewWillAppear:(id)arg1;
- (void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
- (id)delegate;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)dimissTimer;
- (id)displayedBannerView;
- (id)initWithDelegate:(id)arg1;
- (bool)isApplicationActive;
- (bool)isRateLimited;
- (id)newBannerViewForContext:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)postBannerForNavigationAlert:(id)arg1;
- (id)queuedItems;
- (void)setApplicationActive:(bool)arg1;
- (void)setBannerTarget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimissTimer:(id)arg1;
- (void)setDisplayedBannerView:(id)arg1;
- (void)setQueuedItems:(id)arg1;
- (void)setRateLimited:(bool)arg1;

@end
