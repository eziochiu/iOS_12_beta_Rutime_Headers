/* made by EzioChiu.
 */

@protocol CKTwoButtonInlineNotificationViewDelegate <CKInlineNotificationViewDelegate>

@required

- (void)inlineNotificationViewDidReceiveLeftButtonTap:(CKTwoButtonInlineNotificationView *)arg1;
- (void)inlineNotificationViewDidReceiveRightButtonTap:(CKTwoButtonInlineNotificationView *)arg1;

@end
