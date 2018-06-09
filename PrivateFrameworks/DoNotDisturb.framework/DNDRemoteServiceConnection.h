/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDRemoteServiceConnection : NSObject <DNDRemoteServiceClientProtocol, DNDRemoteServiceServerProtocol> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    NSHashTable * _eventListeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_guaranteedXPCConnection;
- (void)_handleRemoteConnectionInterrupted;
- (void)_handleRemoteConnectionInvalidated;
- (void)addEventListener:(id)arg1;
- (void)deliverModeAssertionInvalidation:(id)arg1 forClientIdentifier:(id)arg2;
- (void)deliverStateUpdate:(id)arg1;
- (void)deliverUpdatedBehaviorSettings:(id)arg1;
- (void)deliverUpdatedPhoneCallBypassSettings:(id)arg1;
- (void)deliverUpdatedScheduleSettings:(id)arg1;
- (void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidateActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryStateWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeEventListener:(id)arg1;
- (void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(id /* block */)arg3;

@end
