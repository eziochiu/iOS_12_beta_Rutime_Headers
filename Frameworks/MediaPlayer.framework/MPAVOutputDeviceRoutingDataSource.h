/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    MPMRAVOutputContextWrapper * _applicationOutputContext;
    bool  _attemptedToInitializeAppOutputContext;
    void * _callbackToken;
    bool  _devicePresenceDetected;
    void * _discoverySession;
    MPAVEndpointRoute * _endpointRoute;
    NSArray * _outputDeviceRoutes;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldSourceOutputDevicesFromAVODDS;
    bool  _supportsMultipleSelection;
}

@property (nonatomic, retain) MPMRAVOutputContextWrapper *applicationOutputContext;
@property (nonatomic, retain) MPAVEndpointRoute *endpointRoute;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic) bool supportsMultipleSelection;

+ (id)_globalAudioSessionLock;

- (void).cxx_destruct;
- (void)_endpointsDidChangeNotification:(id)arg1;
- (id)_outputDeviceRouteWithUID:(id)arg1;
- (void)_outputDevicesDidChange:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(bool)arg1;
- (void)_unregisterNotifications;
- (void)addRouteToGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)applicationOutputContext;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (long long)discoveryMode;
- (id)endpointRoute;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)removeRouteFromGroup:(id)arg1 completion:(id /* block */)arg2;
- (bool)routeIsLeaderOfEndpoint:(id)arg1;
- (id)routingContextUID;
- (void)setApplicationOutputContext:(id)arg1;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setEndpointRoute:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;
- (void)setRoutingContextUID:(id)arg1;
- (void)setSupportsMultipleSelection:(bool)arg1;
- (bool)supportsMultipleSelection;

@end
