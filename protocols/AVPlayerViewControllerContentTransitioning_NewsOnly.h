/* made by EzioChiu.
 */

@protocol AVPlayerViewControllerContentTransitioning_NewsOnly

@required

- (void)playerViewController:(AVPlayerViewController *)arg1 didUpdateContentTransitionProgress:(double)arg2;
- (AVPlayer *)playerViewController:(AVPlayerViewController *)arg1 playerForContentTransitionType:(long long)arg2;
- (void)playerViewControllerDidCancelContentTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidCompleteContentTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillBeginContentTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillCancelContentTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillCompleteContentTransition:(AVPlayerViewController *)arg1;

@end
