/* made by EzioChiu.
 */

@protocol SVVideoViewControllerControlsVisibilityDelegate <NSObject>

@required

- (void)videoViewController:(SVVideoViewController *)arg1 willTransitionToVisibilityOfPlaybackControls:(bool)arg2 withAnimationCoordinator:(id <SVVideoControlItemAnimating>)arg3;

@end
