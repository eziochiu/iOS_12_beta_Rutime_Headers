/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSPushRegistrationRepository : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    UNSKeyedDictionaryRepository * _repository;
}

- (void).cxx_destruct;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (id)_queue_registrationForBundleIdentifier:(id)arg1;
- (void)_queue_removeRegistrationForBundleIdentifier:(id)arg1;
- (void)_queue_setRegistration:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (id)initWithDirectory:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)performMigration;
- (id)registrationForBundleIdentifier:(id)arg1;
- (void)removeRegistrationForBundleIdentifier:(id)arg1;
- (void)setRegistration:(id)arg1 forBundleIdentifier:(id)arg2;

@end
