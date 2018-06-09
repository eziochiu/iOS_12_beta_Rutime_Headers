/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoViewControllerContentTransitioningManager : NSObject <AVPlayerViewControllerContentTransitioning_NewsOnly, SVVideoTransitionObserver> {
    <SVPlayerProviding> * _playerProvider;
    <SVVideoPlaybackProgressObserving> * _progressObserver;
    <SVVideoPlaybackProgressObserverFactory> * _progressObserverFactory;
    <SVVideoQueueProviding> * _queueProvider;
    <SVVideoPlaybackSeeking> * _seeker;
    <SVVideoPlaybackSeekerFactory> * _seekerFactory;
    <SVVideoSkipLockObserving> * _skipLockObserver;
    <SVVideoSkipLockObserverFactory> * _skipLockObserverFactory;
    <SVVisibilityReporting> * _visibilityReporter;
    <SVVisiblePercentageReporting> * _visibilityReporterForAppearingVideo;
    <SVVisiblePercentageReporting> * _visibilityReporterForDisappearingVideo;
    <SVVideoVisiblePercentageManager> * _visiblePercentageManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerProviding> *playerProvider;
@property (nonatomic, retain) <SVVideoPlaybackProgressObserving> *progressObserver;
@property (nonatomic, readonly) <SVVideoPlaybackProgressObserverFactory> *progressObserverFactory;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (nonatomic, retain) <SVVideoPlaybackSeeking> *seeker;
@property (nonatomic, readonly) <SVVideoPlaybackSeekerFactory> *seekerFactory;
@property (nonatomic, retain) <SVVideoSkipLockObserving> *skipLockObserver;
@property (nonatomic, readonly) <SVVideoSkipLockObserverFactory> *skipLockObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVisibilityReporting> *visibilityReporter;
@property (nonatomic) <SVVisiblePercentageReporting> *visibilityReporterForAppearingVideo;
@property (nonatomic) <SVVisiblePercentageReporting> *visibilityReporterForDisappearingVideo;
@property (nonatomic, readonly) <SVVideoVisiblePercentageManager> *visiblePercentageManager;

- (void).cxx_destruct;
- (id)initWithVisiblePercentageManager:(id)arg1 visibilityReporter:(id)arg2 queueProvider:(id)arg3 playerProvider:(id)arg4 skipLockObserverFactory:(id)arg5 progressObserverFactory:(id)arg6 seekerFactory:(id)arg7;
- (id)playerProvider;
- (void)playerViewController:(id)arg1 didUpdateContentTransitionProgress:(double)arg2;
- (id)playerViewController:(id)arg1 playerForContentTransitionType:(long long)arg2;
- (void)playerViewControllerDidCancelContentTransition:(id)arg1;
- (void)playerViewControllerDidCompleteContentTransition:(id)arg1;
- (void)playerViewControllerWillBeginContentTransition:(id)arg1;
- (void)playerViewControllerWillCancelContentTransition:(id)arg1;
- (void)playerViewControllerWillCompleteContentTransition:(id)arg1;
- (id)progressObserver;
- (id)progressObserverFactory;
- (id)queueProvider;
- (id)seeker;
- (id)seekerFactory;
- (void)setProgressObserver:(id)arg1;
- (void)setSeeker:(id)arg1;
- (void)setSkipLockObserver:(id)arg1;
- (void)setVisibilityReporterForAppearingVideo:(id)arg1;
- (void)setVisibilityReporterForDisappearingVideo:(id)arg1;
- (id)skipLockObserver;
- (id)skipLockObserverFactory;
- (id)videoForContentTransitionType:(long long)arg1;
- (id)visibilityReporter;
- (id)visibilityReporterForAppearingVideo;
- (id)visibilityReporterForDisappearingVideo;
- (id)visiblePercentageManager;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
