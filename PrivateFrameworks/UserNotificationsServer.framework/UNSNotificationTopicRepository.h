/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationTopicRepository : NSObject {
    UNSKeyedObservable * _observable;
    NSObject<OS_dispatch_queue> * _queue;
    UNSKeyedDataStoreRepository * _repository;
}

- (void).cxx_destruct;
- (long long)_maxObjectsPerKey;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_setTopics:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_topicsForBundleIdentifier:(id)arg1;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (id)initWithDirectory:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setTopics:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)topicsForBundleIdentifier:(id)arg1;

@end
