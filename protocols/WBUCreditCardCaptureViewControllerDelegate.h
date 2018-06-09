/* made by EzioChiu.
 */

@protocol WBUCreditCardCaptureViewControllerDelegate <UINavigationControllerDelegate>

@optional

- (void)creditCardCaptureViewController:(WBUCreditCardCaptureViewController *)arg1 didCaptureCreditCard:(WBSCreditCardData *)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(WBUCreditCardCaptureViewController *)arg1;

@end
