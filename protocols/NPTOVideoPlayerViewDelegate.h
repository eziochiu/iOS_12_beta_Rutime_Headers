/* made by EzioChiu.
 */

@protocol NPTOVideoPlayerViewDelegate <NSObject>

@optional

- (void)videoPlayerViewDidBeginPlaying:(NPTOVideoPlayerView *)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(NPTOVideoPlayerView *)arg1;

@end
