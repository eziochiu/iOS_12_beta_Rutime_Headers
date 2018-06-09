/* made by EzioChiu.
 */

@protocol UIPreviewInteractionControllerDelegate_Internal <UIPreviewInteractionControllerDelegate_Private>

@optional

- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 didSelectMenuItem:(UIPreviewMenuItem *)arg2;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (bool)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(UIPreviewInteractionController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;

@end
