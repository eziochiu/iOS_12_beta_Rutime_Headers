/* made by EzioChiu.
 */

@protocol CKBalloonTextViewInteractionDelegate <NSObject>

@required

- (void)interactionStartedFromPreviewItemControllerInTextView:(UITextView *)arg1;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(UITextView *)arg1;

@end
