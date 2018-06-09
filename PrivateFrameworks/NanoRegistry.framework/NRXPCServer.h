/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRXPCServer : NSObject <NRNSXPCListenerDelegate, NRXPCProxyDelegate> {
    NSMutableDictionary * _appToProxy;
    bool  _entitlementRequired;
    NSMutableDictionary * _entitlements;
    NSXPCInterface * _exportedInterface;
    bool  _listenerInvalidated;
    bool  _listenerSuspended;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _managementQueue;
    BKSApplicationStateMonitor * _monitor;
    NSMutableArray * _proxies;
    Class  _proxyClass;
    NSXPCInterface * _remoteObjectInterface;
    <NRXPCServerDelegate> * _serverDelegate;
    id  _services;
    NSObject<OS_dispatch_queue> * _xpcIncomingMessageQueue;
    <NRNSXPCListenerProtocol> * _xpcListener;
    id  _xpcTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *managementQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAppToMonitorWithProxy:(id)arg1;
- (void)_proxyDidDisconnect:(id)arg1;
- (void)_removeAppFromMonitorWithProxy:(id)arg1;
- (void)_resume;
- (void)_suspend;
- (void)enumerateClientProxies:(id /* block */)arg1;
- (bool)hasEntitlement:(id)arg1 withBitmask:(unsigned int)arg2;
- (id)initWithProxyClass:(Class)arg1 xpcListenerClass:(Class)arg2 serverDelegate:(id)arg3 xpcTarget:(id)arg4 services:(id)arg5;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)managementQueue;
- (void)resume;
- (unsigned int)scanForEntitlementsWithConnection:(id)arg1;
- (void)shouldMonitorProxy:(id)arg1 forSuspension:(bool)arg2;
- (void)suspend;

@end
