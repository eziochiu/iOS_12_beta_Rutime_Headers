/* made by EzioChiu.
 */

@protocol ISPlayerViewDelegate <NSObject>

@optional

- (void)playerViewGestureRecognizerDidChange:(ISPlayerView *)arg1;
- (void)playerViewIsInteractingDidChange:(ISPlayerView *)arg1;
- (void)playerViewPlaybackStateDidChange:(ISPlayerView *)arg1;

@end
