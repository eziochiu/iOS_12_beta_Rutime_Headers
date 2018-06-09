/* made by EzioChiu.
 */

@protocol AECameraTilePresentationDelegate <NSObject>

@optional

- (void)presentationNavigationControllerPrepareForDismissal:(AECameraTilePresentationNavigationController *)arg1;
- (void)presentationNavigationControllerWillBeDismissed:(AECameraTilePresentationNavigationController *)arg1;
- (void)presentationNavigationControllerWillBePresented:(AECameraTilePresentationNavigationController *)arg1;

@end
