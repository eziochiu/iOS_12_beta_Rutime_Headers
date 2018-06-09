/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSRemoteServiceProvider : NSObject <DNDRemoteServiceServerProtocol, NSXPCListenerDelegate> {
    NSMutableDictionary * _clientConnectionDetailsByIdentifier;
    NSObject<OS_dispatch_queue> * _clientConnectionQueue;
    <DNDSRemoteServiceProviderDelegate> * _delegate;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSRemoteServiceProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeModeAssertionForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (void)_handleClientConnectionInterrupted:(id)arg1;
- (void)_handleClientConnectionInvalidated:(id)arg1;
- (id)_invalidateActiveModeAssertionForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (id)_invalidateAllActiveModeAssertionsWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (id)_queue_activeModeAssertionWithClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (id)_queue_getConnectionDetailsForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (void)_queue_handleModeAssertionInvalidations:(id)arg1;
- (id)_queue_invalidateActiveModeAssertionForClientConnection:(id)arg1 clientIdentifier:(id)arg2 reason:(unsigned long long)arg3 error:(id*)arg4;
- (id)_queue_invalidateAllActiveModeAssertionsWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (id)_queue_registerConnectionDetailsForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_queue_registerWantsAssertionUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_queue_registerWantsSettingsUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_queue_registerWantsStateUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (id)_queue_takeModeAssertionWithDetails:(id)arg1 clientConnection:(id)arg2 clientIdentifier:(id)arg3 error:(id*)arg4 invalidation:(id*)arg5;
- (void)_queue_unregisterConnectionDetailsForClientConnection:(id)arg1;
- (id)_registerConnectionDetailsForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_registerWantsAssertionUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_registerWantsSettingsUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_registerWantsStateUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
- (id)_takeModeAssertionWithDetails:(id)arg1 clientConnection:(id)arg2 clientIdentifier:(id)arg3 error:(id*)arg4 invalidation:(id*)arg5;
- (void)_unregisterConnectionDetailsForClientConnection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleModeAssertionInvalidations:(id)arg1;
- (void)handleStateUpdate:(id)arg1;
- (void)handleUpdatedBehaviorSettings:(id)arg1;
- (void)handleUpdatedPhoneCallBypassSettings:(id)arg1;
- (void)handleUpdatedScheduleSettings:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)queryStateWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resume;
- (void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(id /* block */)arg3;

@end
