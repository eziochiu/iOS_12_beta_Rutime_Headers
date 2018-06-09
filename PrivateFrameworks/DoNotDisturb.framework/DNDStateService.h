/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDStateService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForUpdates;
    NSHashTable * _stateUpdateListeners;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_handleLostXPCConnection;
- (id)_initWithClientIdentifier:(id)arg1;
- (bool)_queue_registerForStateUpdatesIfRequired;
- (bool)addStateUpdateListener:(id)arg1 error:(id*)arg2;
- (id)clientIdentifier;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (id)queryCurrentStateWithError:(id*)arg1;
- (void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (bool)removeStateUpdateListener:(id)arg1 error:(id*)arg2;

@end
