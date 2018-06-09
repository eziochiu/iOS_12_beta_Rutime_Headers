/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUNewsAnalyticsVideoPlayerEventTracker : NSObject <NSSNewsAnalyticsArticleViewingSessionTracker, NUVideoPlayerEventTracker> {
    NTPBEvent * _articleHostViewExposureEvent;
    NUNewsAnalyticsVideoPlayerEventTrackerConfiguration * _configuration;
    <NUVideoItem> * _currentVideo;
    int  _currentVideoPlayMethod;
    NSSNewsAnalyticsEventAnnotator * _eventAnnotator;
    <NSSNewsAnalyticsPBEventStreamObserver> * _observer;
    bool  _playbackFinishedForLastVideo;
    <NSSNewsAnalyticsSessionManager> * _sessionManager;
    NSOrderedSet * _videoItems;
    bool  _videoPlayerIsVisible;
}

@property (nonatomic, retain) NTPBEvent *articleHostViewExposureEvent;
@property (nonatomic, readonly, copy) NUNewsAnalyticsVideoPlayerEventTrackerConfiguration *configuration;
@property (nonatomic, copy) <NUVideoItem> *currentVideo;
@property (nonatomic) int currentVideoPlayMethod;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSNewsAnalyticsEventAnnotator *eventAnnotator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSSNewsAnalyticsPBEventStreamObserver> *observer;
@property (nonatomic) bool playbackFinishedForLastVideo;
@property (nonatomic, readonly) <NSSNewsAnalyticsSessionManager> *sessionManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSOrderedSet *videoItems;
@property (getter=isVideoPlayerVisible, nonatomic) bool videoPlayerIsVisible;

- (void).cxx_destruct;
- (id)_adEngagementEventWithType:(int)arg1 configuredWithMetadata:(id)arg2;
- (id)_adImpressionEventConfiguredWithMetadata:(id)arg1;
- (id)_articleViewingSessionIDForVideoItem:(id)arg1;
- (void)_createArticleHostViewExposureEventConfiguredForVideoItem:(id)arg1 withArticlePresentationReason:(int)arg2;
- (id)_currentArticleID;
- (id)_currentArticleViewingSessionID;
- (unsigned long long)_displayRankOfVideoItem:(id)arg1;
- (id)_eventForEventObject:(id)arg1;
- (id)_eventObjectWithAdEngagementEvent:(id)arg1;
- (id)_eventObjectWithAdImpressionEvent:(id)arg1;
- (id)_eventObjectWithLinkTapEvent:(id)arg1;
- (id)_eventObjectWithMediaEngageEvent:(id)arg1;
- (void)_finishAndSubmitArticleHostViewExposureEvent;
- (id)_linkTapEventWithLinkType:(int)arg1 forVideoItem:(id)arg2;
- (id)_mediaEngageCompleteEventConfiguredForVideoItem:(id)arg1;
- (id)_mediaEngageEventWithUserAction:(int)arg1 configuredForVideoItem:(id)arg2;
- (void)_submitEvent:(id)arg1;
- (void)_submitEventForEventObject:(id)arg1;
- (id)_widgetEngagementForVideoItem:(id)arg1;
- (id)articleHostViewExposureEvent;
- (id)articleViewingSessionIDForArticleWithID:(id)arg1;
- (id)configuration;
- (id)currentVideo;
- (int)currentVideoPlayMethod;
- (id)eventAnnotator;
- (void)impressionThresholdReachedForVideoAdWithMetadata:(id)arg1;
- (id)initWithConfiguration:(id)arg1 observer:(id)arg2 sessionManager:(id)arg3 userIDProvider:(id)arg4 videoItems:(id)arg5;
- (bool)isVideoPlayerVisible;
- (void)muteStateChanged:(bool)arg1 withVideoItem:(id)arg2 metadata:(id)arg3;
- (id)observer;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (bool)playbackFinishedForLastVideo;
- (void)playbackFinishedForVideoAdWithMetadata:(id)arg1;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedForVideoAdWithMetadata:(id)arg1;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)sessionManager;
- (void)setArticleHostViewExposureEvent:(id)arg1;
- (void)setCurrentVideo:(id)arg1;
- (void)setCurrentVideoPlayMethod:(int)arg1;
- (void)setPlaybackFinishedForLastVideo:(bool)arg1;
- (void)setVideoPlayerIsVisible:(bool)arg1;
- (void)userEngagedWithAdvanceButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1;
- (void)userEngagedWithCallToActionOfVideoAdWithMetadata:(id)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithNowPlayingButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithReplayButtonWithVideoItem:(id)arg1;
- (void)userSkippedPlaybackOfVideoAdWithMetadata:(id)arg1;
- (id)videoItems;
- (void)videoPlayerDidBecomeInvisible;
- (void)videoPlayerDidBecomeVisible;

@end
