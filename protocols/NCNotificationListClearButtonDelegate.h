/* made by EzioChiu.
 */

@protocol NCNotificationListClearButtonDelegate <NSObject>

@required

- (void)clearButtonViewDidDismissForceTouchView:(NCNotificationListClearButton *)arg1;
- (void)clearButtonViewDidPresentForceTouchView:(NCNotificationListClearButton *)arg1;

@end
