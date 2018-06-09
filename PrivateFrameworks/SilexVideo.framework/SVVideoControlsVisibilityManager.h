/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoControlsVisibilityManager : NSObject <SVVideoControlsVisibilityManager, SVVideoTransitionObserver, SVVideoViewControllerControlsVisibilityDelegate> {
    SVTimeBasedAction * _autoAppearanceAction;
    bool  _autoHidingEnabled;
    NSMutableSet * _items;
    <SVVideoLoadingStateObserving> * _loadingStateObserver;
    <SVVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SVVideoPlaybackStateObserving> * _playbackStateObserver;
    <SVVideoPlaybackStateObserverFactory> * _playbackStateObserverFactory;
    <SVVideoQueueProviding> * _queueProvider;
    SVTimeline * _timeline;
    <SVVideoControlsTimingProviding> * _timingProvider;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (nonatomic, retain) SVTimeBasedAction *autoAppearanceAction;
@property (nonatomic) bool autoHidingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, retain) <SVVideoLoadingStateObserving> *loadingStateObserver;
@property (nonatomic, readonly) <SVVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, retain) <SVVideoPlaybackStateObserving> *playbackStateObserver;
@property (nonatomic, readonly) <SVVideoPlaybackStateObserverFactory> *playbackStateObserverFactory;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) <SVVideoControlsTimingProviding> *timingProvider;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)autoAppearanceAction;
- (bool)autoHidingEnabled;
- (id)initWithTimeline:(id)arg1 queueProvider:(id)arg2 timingProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 playbackStateObserverFactory:(id)arg5 videoViewControllerProvider:(id)arg6;
- (id)items;
- (id)itemsPassingTest:(id /* block */)arg1;
- (id)loadingStateObserver;
- (id)loadingStateObserverFactory;
- (id)playbackStateObserver;
- (id)playbackStateObserverFactory;
- (id)queueProvider;
- (void)removeItem:(id)arg1;
- (void)scheduleAutoAppearanceWithTimeInterval:(double)arg1;
- (void)setAutoAppearanceAction:(id)arg1;
- (void)setAutoHidingEnabled:(bool)arg1;
- (void)setLoadingStateObserver:(id)arg1;
- (void)setPlaybackStateObserver:(id)arg1;
- (id)timeline;
- (id)timingProvider;
- (void)updateAutoHidingState;
- (void)videoViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (id)videoViewControllerProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
