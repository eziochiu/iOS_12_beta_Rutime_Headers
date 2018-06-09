/* made by EzioChiu.
 */

@protocol AMSRemoteNotificationParsable

@required

+ (void)handleNotificationPayload:(AMSRemoteNotificationPayload *)arg1;
+ (long long)supportedActionType;

@end
