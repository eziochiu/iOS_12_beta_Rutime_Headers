/* made by EzioChiu.
 */

@protocol QLItemViewControllerPresentingDelegate

@required

- (QLItemPresenterViewController *)itemPresenterViewController;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;

@end
