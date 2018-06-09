/* made by EzioChiu.
 */

@protocol AVPlayerViewControllerDelegatePrivate <AVPlayerViewControllerDelegate>

@optional

- (UIView *)playerViewController:(AVPlayerViewController *)arg1 targetViewForDismissalAnimationWithProposedTargetView:(UIView *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willTransitionToVisibilityOfPlaybackControls:(bool)arg2 withAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
- (void)playerViewControllerWillExitAutoplayPhase:(AVPlayerViewController *)arg1;

@end
