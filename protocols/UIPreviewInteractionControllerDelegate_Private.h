/* made by EzioChiu.
 */

@protocol UIPreviewInteractionControllerDelegate_Private <UIPreviewInteractionControllerDelegate>

@optional

- (bool)performsCustomCommitTransitionForPreviewInteractionController:(UIPreviewInteractionController *)arg1;
- (void)previewInteractionController:(void *)arg1 performCustomCommitForPreviewViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIPreviewInteractionController *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<UIForceTransitioningDelegate> *)previewInteractionController:(UIPreviewInteractionController *)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;

@end