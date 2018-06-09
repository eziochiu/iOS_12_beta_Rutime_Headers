/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationRecordMapper : NSObject {
    BSCFBundle * _bundle;
}

- (void).cxx_destruct;
- (id)_notificationContentForNotificationRecord:(id)arg1;
- (id)_notificationIconForNotificationRecord:(id)arg1;
- (id)_notificationSoundForNotificationRecord:(id)arg1;
- (id)_notificationTriggerForNotificationRecord:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)notificationForNotificationRecord:(id)arg1;
- (id)notificationRequestForNotificationRecord:(id)arg1;

@end
