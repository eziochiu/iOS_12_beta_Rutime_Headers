/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeAssertionService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSMutableSet * _activeAssertions;
    NSHashTable * _assertionUpdateListeners;
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForUpdates;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_handleLostXPCConnection;
- (void)_handleModeAssertionInvalidation:(id)arg1;
- (id)_initWithClientIdentifier:(id)arg1;
- (void)_invalidateAllAssertionsWithReason:(unsigned long long)arg1;
- (bool)_queue_registerForAssertionUpdatesIfRequired;
- (id)activeModeAssertionWithError:(id*)arg1;
- (bool)addAssertionUpdateListener:(id)arg1 error:(id*)arg2;
- (id)clientIdentifier;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (id)invalidateActiveModeAssertionWithError:(id*)arg1;
- (bool)invalidateAllActiveModeAssertionsWithError:(id*)arg1;
- (void)remoteService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2;
- (bool)removeAssertionUpdateListener:(id)arg1 error:(id*)arg2;
- (id)takeModeAssertionWithDetails:(id)arg1 error:(id*)arg2;

@end
