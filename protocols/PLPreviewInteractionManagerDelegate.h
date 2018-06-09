/* made by EzioChiu.
 */

@protocol PLPreviewInteractionManagerDelegate <NSObject>

@required

- (UIViewController<PLPreviewInteractionPresentable> *)presentedViewControllerForPreviewInteractionManager:(PLPreviewInteractionManager *)arg1;

@optional

- (UIView *)containerViewForPreviewInteractionManager:(PLPreviewInteractionManager *)arg1;
- (void)previewInteractionManager:(PLPreviewInteractionManager *)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
- (void)previewInteractionManager:(void *)arg1 shouldFinishInteractionWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: PLPreviewInteractionManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)previewInteractionManager:(PLPreviewInteractionManager *)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)previewInteractionManagerDidEndUserInteraction:(PLPreviewInteractionManager *)arg1;
- (bool)previewInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(PLPreviewInteractionManager *)arg1;
- (bool)previewInteractionManagerShouldBeginInteraction:(PLPreviewInteractionManager *)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(PLPreviewInteractionManager *)arg1;
- (<PLViewControllerTransitioningDelegate> *)transitioningDelegateForPreviewInteractionManager:(PLPreviewInteractionManager *)arg1;

@end
