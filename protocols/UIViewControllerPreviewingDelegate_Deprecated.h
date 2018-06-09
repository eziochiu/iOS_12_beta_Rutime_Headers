/* made by EzioChiu.
 */

@protocol UIViewControllerPreviewingDelegate_Deprecated <UIViewControllerPreviewingDelegate_Private>

@optional

- (void)commitPreviewViewController:(UIViewController *)arg1;
- (void)commitPreviewViewController:(UIViewController *)arg1 committedViewController:(UIViewController *)arg2;
- (void)didDismissWithPreviewMenuItem:(UIPreviewMenuItem *)arg1;
- (UIViewController *)previewViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(UIView *)arg2;
- (UIViewController *)previewViewControllerForPosition:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(UIView *)arg2;
- (void)willPresentPreviewViewController:(UIViewController *)arg1 forPosition:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(UIView *)arg3;

@end
