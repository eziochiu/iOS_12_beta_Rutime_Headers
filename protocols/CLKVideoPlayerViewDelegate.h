/* made by EzioChiu.
 */

@protocol CLKVideoPlayerViewDelegate <NSObject>

@required

- (void)videoPlayerViewDidBeginPlaying:(CLKVideoPlayerView *)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(CLKVideoPlayerView *)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(CLKVideoPlayerView *)arg1;

@optional

- (void)videoPlayerViewWillBeginPlaying:(CLKVideoPlayerView *)arg1;

@end
