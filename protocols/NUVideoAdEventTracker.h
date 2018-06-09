/* made by EzioChiu.
 */

@protocol NUVideoAdEventTracker <NSObject>

@optional

- (void)impressionThresholdReachedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)loadingFinishedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackFinishedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackPausedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackStartedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)userEngagedWithCallToActionOfVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)userSkippedPlaybackOfVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;

@end
