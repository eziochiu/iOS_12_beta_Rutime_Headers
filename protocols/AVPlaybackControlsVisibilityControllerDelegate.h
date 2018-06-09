/* made by EzioChiu.
 */

@protocol AVPlaybackControlsVisibilityControllerDelegate <NSObject>

@required

- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg2 appearingViews:(NSArray *)arg3 disappearingViews:(NSArray *)arg4;
- (void)playbackControlsVisibilityController:(AVPlaybackControlsVisibilityController *)arg1 updateStatusBarAppearanceUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2;
- (void)playbackControlsVisibilityControllerWillExitAutoplayPhase:(AVPlaybackControlsVisibilityController *)arg1;

@end
