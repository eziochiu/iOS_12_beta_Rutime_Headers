/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSLocalAssertionManager : NSObject <DNDSObservableModeAssertionProvider> {
    NSMutableDictionary * _assertionsByUUID;
    <DNDSBackingStore> * _backingStore;
    NSDate * _lastCompleteInvalidationDate;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadDataFromStore;
- (id)_queue_allModeAssertionsWithError:(id*)arg1;
- (id)_queue_assertionWithUUID:(id)arg1 error:(id*)arg2;
- (id)_queue_invalidateAllModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2 error:(id*)arg3;
- (id)_queue_invalidateModeAssertionsWithUUIDs:(id)arg1 reason:(unsigned long long)arg2 error:(id*)arg3;
- (id)_queue_takeModeAssertionWithDetails:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_saveDataToStoreWithError:(id*)arg1;
- (void)_sendUpdateToAllObserversForAssertionInvalidations:(id)arg1;
- (void)_sendUpdateToAllObserversForTakenAssertions:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allModeAssertionsWithError:(id*)arg1;
- (id)assertionWithClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)assertionWithUUID:(id)arg1 error:(id*)arg2;
- (id)initWithBackingStore:(id)arg1;
- (id)invalidateAllModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2 error:(id*)arg3;
- (id)invalidateModeAssertionWithUUID:(id)arg1 reason:(unsigned long long)arg2 error:(id*)arg3;
- (id)invalidateModeAssertionWithUUIDs:(id)arg1 reason:(unsigned long long)arg2 error:(id*)arg3;
- (id)lastCompleteInvalidationDate;
- (void)removeObserver:(id)arg1;
- (id)takeModeAssertionWithDetails:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;

@end
