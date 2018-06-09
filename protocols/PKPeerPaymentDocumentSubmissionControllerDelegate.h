/* made by EzioChiu.
 */

@protocol PKPeerPaymentDocumentSubmissionControllerDelegate <NSObject>

@required

- (void)captureController:(PKPeerPaymentDocumentSubmissionController *)arg1 didChangeStateTo:(long long)arg2;
- (void)captureController:(PKPeerPaymentDocumentSubmissionController *)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)captureController:(PKPeerPaymentDocumentSubmissionController *)arg1 requestsPresentViewController:(UIViewController *)arg2 animated:(bool)arg3;

@end
