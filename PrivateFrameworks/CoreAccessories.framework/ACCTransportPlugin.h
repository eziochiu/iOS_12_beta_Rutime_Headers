/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

@interface ACCTransportPlugin : NSObject {
    NSMutableSet * _activeConnectionUUIDs;
    NSMutableDictionary * _connectionPropertyChangeHandlers;
    <ACCTransportPluginManagerProtocol> * _delegate;
    NSMutableDictionary * _endpointPropertyChangeHandlers;
    NSString * _pluginName;
}

@property (nonatomic, retain) NSMutableSet *activeConnectionUUIDs;
@property (nonatomic, retain) NSMutableDictionary *connectionPropertyChangeHandlers;
@property (nonatomic) <ACCTransportPluginManagerProtocol> *delegate;
@property (nonatomic, retain) NSMutableDictionary *endpointPropertyChangeHandlers;
@property (nonatomic, readonly) NSString *pluginClassAndName;
@property (nonatomic, readonly) NSString *pluginName;

- (void).cxx_destruct;
- (id)activeConnectionUUIDs;
- (id)allConnectionUUIDs;
- (id)allEndpointsUUIDs;
- (void)authStatusDidChangeHandler:(id)arg1;
- (int)authStatusForConnectionWithUUID:(id)arg1 authType:(int)arg2;
- (id)certificateCapabilitiesForConnectionWithUUID:(id)arg1;
- (id)certificateDataForConnectionWithUUID:(id)arg1;
- (id)certificateSerialForConnectionWithUUID:(id)arg1;
- (id)certificateSerialStringForConnectionWithUUID:(id)arg1;
- (void)connectionPropertiesDidChangeHandler:(id)arg1;
- (id)connectionPropertyChangeHandlers;
- (int)connectionTypeForConnectionWithUUID:(id)arg1;
- (id)connectionUUIDForEndpointWithUUID:(id)arg1;
- (id)createConnectionWithType:(int)arg1 andIdentifier:(id)arg2;
- (id)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(id)arg3 forConnectionWithUUID:(id)arg4 publishConnection:(bool)arg5;
- (void)dealloc;
- (id)delegate;
- (bool)destroyConnectionWithUUID:(id)arg1;
- (bool)destroyEndpointWithUUID:(id)arg1;
- (void)endpointPropertiesDidChangeHandler:(id)arg1;
- (id)endpointPropertyChangeHandlers;
- (id)endpointUUIDsForConnectionWithUUID:(id)arg1;
- (id)identifierForConnectionWithUUID:(id)arg1;
- (id)identifierForEndpointWithUUID:(id)arg1;
- (void)initPlugin;
- (id)initWithDelegate:(id)arg1;
- (id)pluginClassAndName;
- (id)pluginName;
- (bool)processIncomingData:(id)arg1 forEndpointWithUUID:(id)arg2;
- (id)propertiesForConnectionWithUUID:(id)arg1;
- (id)propertiesForEndpointWithUUID:(id)arg1;
- (bool)publishConnectionWithUUID:(id)arg1;
- (bool)routeOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3;
- (bool)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3;
- (bool)setAccessoryInfo:(id)arg1 forEndpointWithUUID:(id)arg2;
- (void)setActiveConnectionUUIDs:(id)arg1;
- (bool)setAuthenticationStatus:(int)arg1 andCertificateData:(id)arg2 authCTA:(bool)arg3 forConnectionWithUUID:(id)arg4;
- (void)setConnectionPropertyChangeHandlers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointPropertyChangeHandlers:(id)arg1;
- (void)setHandler:(id /* block */)arg1 forConnectionProperty:(id)arg2;
- (void)setHandler:(id /* block */)arg1 forEndpointProperty:(id)arg2;
- (bool)setProperties:(id)arg1 forConnectionWithUUID:(id)arg2;
- (bool)setProperties:(id)arg1 forEndpointWithUUID:(id)arg2;
- (void)startPlugin;
- (void)stopPlugin;
- (int)transportTypeForEndpointWithUUID:(id)arg1;

@end
