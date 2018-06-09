/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

@interface ACCTransportClient : NSObject <ACCTransportXPCClientProtocol> {
    NSMutableDictionary * _connectionPropertyChangeHandlers;
    <ACCTransportClientDelegate> * _delegate;
    NSMutableDictionary * _endpointDataOutHandlers;
    NSMutableDictionary * _endpointPropertyChangeHandlers;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSMutableDictionary *connectionPropertyChangeHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACCTransportClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *endpointDataOutHandlers;
@property (nonatomic, retain) NSMutableDictionary *endpointPropertyChangeHandlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)_init;
- (id)accessoryInfoForConnectionWithUUID:(id)arg1;
- (id)accessoryInfoForEndpointWithUUID:(id)arg1;
- (void)authStateDidChange:(int)arg1 forConnectionWithUUID:(id)arg2 previousAuthState:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(bool)arg5 connectionWasAuthenticated:(bool)arg6;
- (int)authStatusForConnectionWithUUID:(id)arg1 authType:(int)arg2;
- (void)connectToServer;
- (id)connectionPropertyChangeHandlers;
- (id)connectionUUIDForEndpointWithUUID:(id)arg1;
- (id)createConnectionWithType:(int)arg1 andIdentifier:(id)arg2;
- (id)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(id)arg3 andDataOutHandler:(id /* block */)arg4 forConnectionWithUUID:(id)arg5 publishConnection:(bool)arg6;
- (void)dealloc;
- (id)delegate;
- (bool)destroyConnectionWithUUID:(id)arg1;
- (bool)destroyEndpointWithUUID:(id)arg1;
- (id)endpointDataOutHandlers;
- (id)endpointPropertyChangeHandlers;
- (id)endpointUUIDsForConnectionWithUUID:(id)arg1;
- (id)identifierForConnectionWithUUID:(id)arg1;
- (id)identifierForEndpointWithUUID:(id)arg1;
- (id)init;
- (bool)isConnectionAuthenticated:(id)arg1;
- (void)launchServer;
- (bool)processIncomingData:(id)arg1 forEndpointWithUUID:(id)arg2;
- (void)propertiesDidChange:(id)arg1 forConnectionWithUUID:(id)arg2 previousProperties:(id)arg3;
- (void)propertiesDidChange:(id)arg1 forEndpointWithUUID:(id)arg2 previousProperties:(id)arg3 connectionUUID:(id)arg4;
- (id)propertiesForConnectionWithUUID:(id)arg1;
- (id)propertiesForEndpointWithUUID:(id)arg1;
- (bool)publishConnectionWithUUID:(id)arg1;
- (bool)removeProperty:(id)arg1 forConnectionWithUUID:(id)arg2;
- (bool)removeProperty:(id)arg1 forEndpointWithUUID:(id)arg2;
- (void)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 withReply:(id /* block */)arg4;
- (id)serverConnection;
- (bool)setAccessoryInfo:(id)arg1 forEndpointWithUUID:(id)arg2;
- (void)setConnectionPropertyChangeHandlers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointDataOutHandlers:(id)arg1;
- (void)setEndpointPropertyChangeHandlers:(id)arg1;
- (void)setHandler:(id /* block */)arg1 forConnectionProperty:(id)arg2;
- (void)setHandler:(id /* block */)arg1 forEndpointProperty:(id)arg2;
- (bool)setProperties:(id)arg1 forConnectionWithUUID:(id)arg2;
- (bool)setProperties:(id)arg1 forEndpointWithUUID:(id)arg2;
- (bool)setProperty:(id)arg1 value:(id)arg2 forConnectionWithUUID:(id)arg3;
- (bool)setProperty:(id)arg1 value:(id)arg2 forEndpointWithUUID:(id)arg3;
- (void)setServerConnection:(id)arg1;

@end
