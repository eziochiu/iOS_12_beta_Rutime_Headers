/* made by EzioChiu.
 */

@protocol AVPlayerViewControllerContentViewDelegate <NSObject>

@required

- (void)playerViewControllerContentView:(AVPlayerViewControllerContentView *)arg1 willLoadPlaybackControlsView:(AVPlaybackControlsView *)arg2;
- (void)playerViewControllerContentView:(AVPlayerViewControllerContentView *)arg1 willLoadTurboModePlaceholderView:(AVTurboModePlaybackControlsPlaceholderView *)arg2;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(AVPlayerViewControllerContentView *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewHasActiveTransition:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewIsPlayingOnSecondScreen:(AVPlayerViewControllerContentView *)arg1;
- (long long)playerViewControllerContentViewPreferredPlaybackControlsLoadedStatus:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(AVPlayerViewControllerContentView *)arg1;

@end
