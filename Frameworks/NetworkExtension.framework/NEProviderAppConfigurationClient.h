/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
    NSMutableArray * _createdManagers;
    NEVPNManager * _currentManager;
    NSMutableArray * _currentManagers;
    bool  _isServerMode;
    NSXPCListener * _listener;
    <NEConfigurationCommandHandling> * _remoteObject;
    NSString * _targetAppBundleID;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableArray *createdManagers;
@property (retain) NEVPNManager *currentManager;
@property (retain) NSMutableArray *currentManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isServerMode;
@property (readonly) NSXPCListener *listener;
@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) <NEConfigurationCommandHandling> *remoteObject;
@property (readonly) Class superclass;
@property (retain) NSString *targetAppBundleID;

- (void).cxx_destruct;
- (id)connection;
- (bool)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2;
- (id)createdManagers;
- (id)currentManager;
- (id)currentManagers;
- (int)deleteKeychainItemWithPersistentReference:(id)arg1;
- (bool)enabled;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleConfigChanged:(id)arg1;
- (id)initForServerMode;
- (id)initWithClientName:(id)arg1;
- (bool)isAlwaysOn;
- (bool)isServerMode;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)loadAllWithCompletionHandler:(id /* block */)arg1;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)onDemandEnabled;
- (id)onDemandRules;
- (id)protocolForParameters:(id)arg1;
- (id)remoteObject;
- (void)setConnection:(id)arg1;
- (void)setCreatedManagers:(id)arg1;
- (void)setCurrentManager:(id)arg1;
- (void)setCurrentManagers:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)setFilterPluginWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setIsServerMode:(bool)arg1;
- (int)setKeychainItemData:(id)arg1 withName:(id)arg2 persistentReference:(id*)arg3;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (bool)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setRemoteObject:(id)arg1;
- (bool)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setTargetAppBundleID:(id)arg1;
- (id)targetAppBundleID;
- (bool)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;

@end
