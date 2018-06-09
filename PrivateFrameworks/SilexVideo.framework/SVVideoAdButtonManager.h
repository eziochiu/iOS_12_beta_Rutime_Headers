/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAdButtonManager : NSObject <SVVideoTransitionObserver> {
    <SVVideoAdActionAvailabilityObserver> * _adActionAvailabilityObserver;
    <SVVideoAdActionAvailabilityObserverFactory> * _adActionAvailabilityObserverFactory;
    <SVCustomControlsViewProviding> * _customControlsViewProvider;
    SVLearnMoreButton * _learnMoreButton;
    <SVVideoLoadingStateObserving> * _loadingStateObserver;
    <SVVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    SVAdPrivacyButton * _privacyButton;
    SVVideoAdSkipButton * _skipButton;
    <SVVideoSkipLockObserving> * _skipLockObserver;
    <SVVideoSkipLockObserverFactory> * _skipLockObserverFactory;
}

@property (nonatomic, retain) <SVVideoAdActionAvailabilityObserver> *adActionAvailabilityObserver;
@property (nonatomic, readonly) <SVVideoAdActionAvailabilityObserverFactory> *adActionAvailabilityObserverFactory;
@property (nonatomic, readonly) <SVCustomControlsViewProviding> *customControlsViewProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SVLearnMoreButton *learnMoreButton;
@property (nonatomic, retain) <SVVideoLoadingStateObserving> *loadingStateObserver;
@property (nonatomic, readonly) <SVVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, readonly) SVAdPrivacyButton *privacyButton;
@property (nonatomic, readonly) SVVideoAdSkipButton *skipButton;
@property (nonatomic, retain) <SVVideoSkipLockObserving> *skipLockObserver;
@property (nonatomic, readonly) <SVVideoSkipLockObserverFactory> *skipLockObserverFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adActionAvailabilityObserver;
- (id)adActionAvailabilityObserverFactory;
- (void)addButtonsToCustomControlsView:(id)arg1 withAdActionAvailable:(bool)arg2;
- (id)customControlsViewProvider;
- (void)embedButtonsInViewControllerWithAdActionAvailable:(bool)arg1;
- (id)initWithCustomControlsViewProvider:(id)arg1 loadingStateObserverFactory:(id)arg2 adActionAvailabilityObserverFactory:(id)arg3 skipLockObserverFactory:(id)arg4 adPrivacyButton:(id)arg5 learnMoreButton:(id)arg6 skipButton:(id)arg7;
- (void)layoutButtonsInControlsView:(id)arg1 withAdActionAvailable:(bool)arg2;
- (id)learnMoreButton;
- (id)loadingStateObserver;
- (id)loadingStateObserverFactory;
- (id)privacyButton;
- (void)removeButtonsFromViewController;
- (void)removeObservers;
- (void)setAdActionAvailabilityObserver:(id)arg1;
- (void)setLoadingStateObserver:(id)arg1;
- (void)setSkipLockObserver:(id)arg1;
- (void)setupObserversForVideo:(id)arg1;
- (id)skipButton;
- (id)skipLockObserver;
- (id)skipLockObserverFactory;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
