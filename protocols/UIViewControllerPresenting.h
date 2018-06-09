/* made by EzioChiu.
 */

@protocol UIViewControllerPresenting <NSObject>

@required

- (UIPresentationController *)_presentationControllerForPresentedController:(UIViewController *)arg1 presentingController:(UIViewController *)arg2 sourceController:(UIViewController *)arg3;

@end
