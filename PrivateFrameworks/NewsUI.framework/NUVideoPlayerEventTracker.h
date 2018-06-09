/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoPlayerEventTracker : NSObject <NSSNewsAnalyticsSessionManagerObserving, NUAggregateVideoPlayerEventTracker, NUViewAppearanceEventTracker> {
    NSMutableArray * _eventTrackers;
    bool  _hostProcessIsForeground;
    bool  _videoPlayerIsVisible;
    bool  _videoPlayerViewHasAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *eventTrackers;
@property (readonly) unsigned long long hash;
@property (getter=isHostProcessForeground, nonatomic) bool hostProcessIsForeground;
@property (readonly) Class superclass;
@property (getter=isVideoPlayerVisible, nonatomic) bool videoPlayerIsVisible;
@property (getter=hasVideoPlayerViewAppeared, nonatomic) bool videoPlayerViewHasAppeared;

- (void).cxx_destruct;
- (void)_performBlockForEventTrackersRespondingToSelector:(SEL)arg1 block:(id /* block */)arg2;
- (void)_updateVideoPlayerVisibilityIfNeeded;
- (void)addEventTracker:(id)arg1;
- (id)eventTrackers;
- (bool)hasVideoPlayerViewAppeared;
- (void)impressionThresholdReachedForVideoAdWithMetadata:(id)arg1;
- (id)init;
- (id)initWithSessionManager:(id)arg1;
- (bool)isHostProcessForeground;
- (bool)isVideoPlayerVisible;
- (void)loadingFinishedForVideoAdWithMetadata:(id)arg1;
- (void)muteStateChanged:(bool)arg1 withVideoItem:(id)arg2 metadata:(id)arg3;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFinishedForVideoAdWithMetadata:(id)arg1;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedForVideoAdWithMetadata:(id)arg1;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedForVideoAdWithMetadata:(id)arg1;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)removeEventTracker:(id)arg1;
- (void)sessionDidStart;
- (void)sessionWillEnd;
- (void)setHostProcessIsForeground:(bool)arg1;
- (void)setVideoPlayerIsVisible:(bool)arg1;
- (void)setVideoPlayerViewHasAppeared:(bool)arg1;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1;
- (void)userEngagedWithCallToActionOfVideoAdWithMetadata:(id)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1;
- (void)userSkippedPlaybackOfVideoAdWithMetadata:(id)arg1;
- (void)videoPlaybackPassedFirstQuartileWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedSecondQuartileWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedThirdQuartileWithVideoItem:(id)arg1;
- (void)videoPlayerDidBecomeInvisible;
- (void)videoPlayerDidBecomeVisible;
- (void)viewDidAppear;
- (void)viewDidDisappear;

@end
