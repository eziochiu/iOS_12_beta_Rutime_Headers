/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryBarManager : NSObject <SVVideoTransitionObserver> {
    SVVideoAccessoryBarView * _accessoryBarView;
    <SVAccessoryItemContentManager> * _contentManager;
    <SVAccessoryItem> * _discoverMoreItem;
    <SVVideoLoadingStateObserving> * _loadingStateObserver;
    <SVVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SVAccessoryItem> * _moreFromItem;
    <SVAccessoryItem> * _nowPlayingItem;
    <SVVideoPlaybackProgressObserving> * _playbackProgressObserver;
    <SVVideoPlaybackProgressObserverFactory> * _playbackProgressObserverFactory;
    <SVVideoPlaybackStateObserving> * _playbackStateObserver;
    <SVVideoPlaybackStateObserverFactory> * _playbackStateObserverFactory;
    <SVVideoQueueProviding> * _queueProvider;
    SVTimeline * _timeline;
    NSTimer * _timer;
    <SVVideoControlsTimingProviding> * _timingProvider;
    <SVAccessoryItem> * _upNextItem;
    SVTimeBasedAction * _upNextItemDisplayAction;
}

@property (nonatomic, readonly) SVVideoAccessoryBarView *accessoryBarView;
@property (nonatomic, readonly) <SVAccessoryItemContentManager> *contentManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVAccessoryItem> *discoverMoreItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SVVideoLoadingStateObserving> *loadingStateObserver;
@property (nonatomic, readonly) <SVVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, readonly) <SVAccessoryItem> *moreFromItem;
@property (nonatomic, readonly) <SVAccessoryItem> *nowPlayingItem;
@property (nonatomic, retain) <SVVideoPlaybackProgressObserving> *playbackProgressObserver;
@property (nonatomic, readonly) <SVVideoPlaybackProgressObserverFactory> *playbackProgressObserverFactory;
@property (nonatomic, retain) <SVVideoPlaybackStateObserving> *playbackStateObserver;
@property (nonatomic, readonly) <SVVideoPlaybackStateObserverFactory> *playbackStateObserverFactory;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, retain) NSTimer *timer;
@property (nonatomic, readonly) <SVVideoControlsTimingProviding> *timingProvider;
@property (nonatomic, readonly) <SVAccessoryItem> *upNextItem;
@property (nonatomic, retain) SVTimeBasedAction *upNextItemDisplayAction;

- (void).cxx_destruct;
- (id)accessoryBarView;
- (void)cancelDisplayOfUpNextItem;
- (void)cancelScheduledNowPlayingOrMoreFromTransition;
- (id)contentManager;
- (id)discoverMoreItem;
- (id)initWithAccessoryBarView:(id)arg1 timeline:(id)arg2 timingProvider:(id)arg3 nowPlayingAccessoryItem:(id)arg4 moreFromAccessoryItem:(id)arg5 upNextAccessoryItem:(id)arg6 discoverMoreAccessoryItem:(id)arg7 playbackProgressObserverFactory:(id)arg8 playbackStateObserverFactory:(id)arg9 queueProvider:(id)arg10 loadingStateObserverFactory:(id)arg11 contentManager:(id)arg12;
- (id)loadingStateObserver;
- (id)loadingStateObserverFactory;
- (id)moreFromItem;
- (id)nowPlayingItem;
- (id)playbackProgressObserver;
- (id)playbackProgressObserverFactory;
- (id)playbackStateObserver;
- (id)playbackStateObserverFactory;
- (id)queueProvider;
- (void)scheduleDisplayOfUpNextItemWithInterval:(double)arg1;
- (void)scheduleMoreFromTransitionIfNeeded;
- (void)scheduleNowPlayingOrMoreFromTransitionIfNeeded;
- (void)scheduleNowPlayingTransitionIfNeeded;
- (void)scheduleTransitionToLeadingItem:(id)arg1 withTimeInterval:(double)arg2 completionBlock:(id /* block */)arg3;
- (void)setLoadingStateObserver:(id)arg1;
- (void)setPlaybackProgressObserver:(id)arg1;
- (void)setPlaybackStateObserver:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setUpNextItemDisplayAction:(id)arg1;
- (id)timeline;
- (id)timer;
- (id)timingProvider;
- (id)upNextItem;
- (id)upNextItemDisplayAction;
- (void)updateAccessoryBarToStateForVideo:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
