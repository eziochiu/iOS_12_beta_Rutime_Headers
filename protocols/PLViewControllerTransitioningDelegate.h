/* made by EzioChiu.
 */

@protocol PLViewControllerTransitioningDelegate <UIViewControllerTransitioningDelegate>

@required

- (UIPreviewPresentationController *)previewPresentationControllerForPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3;

@end
