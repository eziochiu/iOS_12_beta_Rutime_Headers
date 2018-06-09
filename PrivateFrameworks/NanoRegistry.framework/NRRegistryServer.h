/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRRegistryServer : NRRegistryHistoryStore <NRXPCRegistryDelegate, NRXPCServerDelegate> {
    int  _devicesUpdateCounterNotifyToken;
    NRXPCServer * _registryServer;
    bool  _sentLaunchUpdate;
    unsigned long long  _tokenValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicesUpdateCounterNotifyToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NRXPCServer *registryServer;
@property (nonatomic) bool sentLaunchUpdate;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tokenValue;

+ (Class)proxyClass;
+ (Class)xpcListenerClass;

- (void).cxx_destruct;
- (id)_dumpSecureProperties:(id)arg1 propertyIDList:(id)arg2;
- (void)_notifyClients;
- (unsigned long long)_tokenValue;
- (int)devicesUpdateCounterNotifyToken;
- (id)initWithParameters:(id)arg1;
- (void)invalidate;
- (id)registryServer;
- (bool)sentLaunchUpdate;
- (void)setDevicesUpdateCounterNotifyToken:(int)arg1;
- (void)setRegistryServer:(id)arg1;
- (void)setSentLaunchUpdate:(bool)arg1;
- (void)setTokenValue:(unsigned long long)arg1;
- (unsigned long long)tokenValue;
- (void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(id /* block */)arg3;
- (void)xpcClientInfo:(id /* block */)arg1;
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)xpcGetChangeHistoryWithBlock:(id /* block */)arg1;
- (void)xpcGetDeviceCollectionWithBlock:(id /* block */)arg1;
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(bool)arg2 withBlock:(id /* block */)arg3;
- (void)xpcRetrieveSecureProperties:(id)arg1 block:(id /* block */)arg2;
- (void)xpcSetMigrationConsented:(bool)arg1 forDeviceID:(id)arg2 withBlock:(id /* block */)arg3;
- (void)xpcSwitchIndex:(id /* block */)arg1;

@end
