/* made by EzioChiu.
 */

@protocol CKInlineReplyRaiseControllerDelegate <NSObject>

@optional

- (void)raiseControllerDidStartRecording:(CKInlineReplyRaiseController *)arg1;
- (void)raiseControllerDidStopRecording:(CKInlineReplyRaiseController *)arg1;
- (void)raiseControllerShouldDismiss:(CKInlineReplyRaiseController *)arg1;

@end
