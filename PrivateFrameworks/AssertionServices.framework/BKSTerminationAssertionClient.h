/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSTerminationAssertionClient : BKSBaseAssertionClient {
    NSObject<OS_dispatch_queue> * _assertionEfficacyQueue;
    NSMutableDictionary * _efficaciesByBundleID;
    NSHashTable * _observers;
}

- (void)_notifyObserversOfEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_handleEfficacyChangedEvent:(id)arg1;
- (void)_requestAllCurrentAssertions;
- (void)addObserver:(id)arg1;
- (void)assertionQueue_handleEvent:(id)arg1 ofType:(unsigned long long)arg2;
- (void)assertionQueue_handleMessage:(id)arg1;
- (void)connectionWasDestroyed;
- (void)dealloc;
- (id)initWithMultiplexer:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)sendCreateEvent:(id)arg1 error:(id*)arg2;
- (void)sendDestroyEvent:(id)arg1;
- (void)sendUpdateEvent:(id)arg1;
- (id)supportedAssertionType;
- (unsigned long long)terminationAssertionEfficacyForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (bool)terminationAssertionIsHeldForBundleIdentifier:(id)arg1 withEfficacy:(unsigned long long)arg2 error:(id*)arg3;

@end
