/* made by EzioChiu.
 */

@protocol NUVideoEventTracker <NSObject>

@optional

- (void)muteStateChanged:(bool)arg1 withVideoItem:(id <NUVideoItem>)arg2 metadata:(NUVideoMetadata *)arg3;
- (void)playbackFailedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackFinishedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackInitiatedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackPausedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackResumedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackStartedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)userEngagedWithAdvanceButtonWithVideoItem:(id <NUVideoItem>)arg1;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id <NUVideoItem>)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id <NUVideoItem>)arg1;
- (void)userEngagedWithNowPlayingButtonWithVideoItem:(id <NUVideoItem>)arg1;
- (void)userEngagedWithReplayButtonWithVideoItem:(id <NUVideoItem>)arg1;
- (void)videoPlaybackPassedFirstQuartileWithVideoItem:(id <NUVideoItem>)arg1;
- (void)videoPlaybackPassedSecondQuartileWithVideoItem:(id <NUVideoItem>)arg1;
- (void)videoPlaybackPassedThirdQuartileWithVideoItem:(id <NUVideoItem>)arg1;

@end
