/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssertionManager : NSObject {
    NSObject<OS_dispatch_queue> * _assertionExpirationQueue;
    NSMutableDictionary * _assertionRecordsByIdentifier;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _observerSetsByAssertionIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *assertionExpirationQueue;

- (void).cxx_destruct;
- (void)_postNotification:(id)arg1 forAssertion:(id)arg2;
- (void)_queue_enumerateActiveAssertionsWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)_releaseAssertion:(id)arg1;
- (id)activeAssertionsForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2;
- (id)assertionExpirationQueue;
- (void)dealloc;
- (bool)hasActiveAssertionForIdentifier:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)ownerIdentifiersForAssertionIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2;
- (bool)takeAssertion:(id)arg1;

@end
