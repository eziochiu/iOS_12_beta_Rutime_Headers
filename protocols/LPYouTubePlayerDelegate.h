/* made by EzioChiu.
 */

@protocol LPYouTubePlayerDelegate <NSObject>

@optional

- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didChangeToFullScreen:(bool)arg2;
- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didChangeToState:(long long)arg2;
- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didReceiveError:(NSError *)arg2;
- (void)youTubePlayerDidBecomeReady:(LPYouTubePlayerView *)arg1;

@end
