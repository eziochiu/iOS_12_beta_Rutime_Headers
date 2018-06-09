/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSRemoteNotificationFollowUp : NSObject <AMSRemoteNotificationParsable, AMSUserNotificationIntentCallback>

+ (id)_followUpActionFromActionDictionary:(id)arg1 logKey:(id)arg2;
+ (id)_generateItemFromPayload:(id)arg1;
+ (id)_generateNotificationFromPayload:(id)arg1;
+ (void)_performClearWithPayload:(id)arg1;
+ (void)_performPostWithPayload:(id)arg1;
+ (id)_sharedNotificationCenter;
+ (bool)_shouldAllowFollowUp:(id)arg1;
+ (bool)_shouldClearFollowUpFromPayload:(id)arg1;
+ (void)handleNotificationPayload:(id)arg1;
+ (long long)supportedActionType;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2;

@end
