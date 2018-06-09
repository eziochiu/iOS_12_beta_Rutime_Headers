/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {
    unsigned int  _discoveryMode;
    NSArray * _distantEndpoints;
    NSMutableDictionary * _distantExternalDevices;
    NSArray * _distantOutputDevices;
    unsigned int  _endpointFeatures;
    bool  _hostedRoutingConnectionDidInitialize;
    NSXPCConnection * _hostedRoutingSessionConnection;
    NSString * _routingContextUID;
    NSObject<OS_dispatch_queue> * _serialQueue;
    int  _serviceResetNotifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *distantEndpoints;
@property (nonatomic, retain) NSMutableDictionary *distantExternalDevices;
@property (nonatomic, retain) NSArray *distantOutputDevices;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *hostedRoutingSessionConnection;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serviceInterface;

- (void).cxx_destruct;
- (id)_hostedRoutingConnection;
- (void)_initializeHostedRoutingConnection;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (id)availableEndpoints;
- (void)availableEndpointsDidChange:(id)arg1;
- (id)availableOutputDevices;
- (void)availableOutputDevicesDidChange:(id)arg1;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (id)distantEndpoints;
- (id)distantExternalDevices;
- (id)distantOutputDevices;
- (unsigned int)endpointFeatures;
- (id)hostedRoutingSessionConnection;
- (id)initWithEndpointFeatures:(unsigned int)arg1;
- (id)routingContextUID;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (void)setDistantEndpoints:(id)arg1;
- (void)setDistantExternalDevices:(id)arg1;
- (void)setDistantOutputDevices:(id)arg1;
- (void)setHostedRoutingSessionConnection:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;

@end
