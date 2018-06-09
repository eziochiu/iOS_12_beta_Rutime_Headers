/* made by EzioChiu.
 */

@protocol AVTransitionControllerDelegate <NSObject>

@required

- (bool)transitionController:(AVTransitionController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
- (void)transitionController:(void *)arg1 prepareForFinishingInteractiveTransition:(void *)arg2; // needs 2 arg types, found 6: AVTransitionController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIView *)transitionController:(AVTransitionController *)arg1 targetViewForDismissingViewController:(UIViewController *)arg2;
- (void)transitionController:(AVTransitionController *)arg1 transitionWillComplete:(bool)arg2;
- (void)transitionController:(AVTransitionController *)arg1 willBeginDismissingViewController:(UIViewController *)arg2;
- (void)transitionController:(AVTransitionController *)arg1 willBeginPresentingViewController:(UIViewController *)arg2;
- (UIColor *)transitionControllerBackgroundColorForInteractivelyTransitioningPresentedViewController:(AVTransitionController *)arg1;
- (void)transitionControllerBeginInteractiveDismissalTransition:(AVTransitionController *)arg1;
- (void)transitionControllerBeginInteractivePresentationTransition:(AVTransitionController *)arg1;
- (bool)transitionControllerCanBeginInteractiveDismissalTransition:(AVTransitionController *)arg1;
- (bool)transitionControllerCanBeginInteractivePresentationTransition:(AVTransitionController *)arg1;
- (bool)transitionControllerCanCreateVideoOnlyWindow:(AVTransitionController *)arg1;
- (UIViewController *)transitionControllerContentSourceViewController:(AVTransitionController *)arg1;

@end
