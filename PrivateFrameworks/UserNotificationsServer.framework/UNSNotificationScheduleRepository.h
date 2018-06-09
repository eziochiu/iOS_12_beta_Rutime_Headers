/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationScheduleRepository : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    UNSKeyedDictionaryRepository * _repository;
}

- (void).cxx_destruct;
- (id)_dateFormatter;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_removeScheduleForBundleIdentifier:(id)arg1;
- (id)_queue_scheduleForBundleIdentifier:(id)arg1;
- (void)_queue_setSchedule:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (id)initWithDirectory:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)performMigration;
- (void)removeScheduleForBundleIdentifier:(id)arg1;
- (id)scheduleForBundleIdentifier:(id)arg1;
- (void)setSchedule:(id)arg1 forBundleIdentifier:(id)arg2;

@end
