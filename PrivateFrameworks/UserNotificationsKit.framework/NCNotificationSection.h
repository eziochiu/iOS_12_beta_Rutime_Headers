/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationSection : NSObject {
    NSMutableDictionary * _coalescedNotifications;
}

@property (nonatomic, retain) NSMutableDictionary *coalescedNotifications;
@property (nonatomic, readonly) unsigned long long notificationsCount;

- (void).cxx_destruct;
- (id)addNotificationRequest:(id)arg1;
- (id)coalescedNotificationForThreadIdentifier:(id)arg1;
- (id)coalescedNotifications;
- (id)init;
- (unsigned long long)notificationsCount;
- (id)removeNotificationRequest:(id)arg1;
- (id)replaceNotificationRequest:(id)arg1;
- (void)setCoalescedNotifications:(id)arg1;

@end
