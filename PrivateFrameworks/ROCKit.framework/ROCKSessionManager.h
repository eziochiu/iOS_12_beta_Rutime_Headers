/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKSessionManager : NSObject {
    NSMapTable * _checkedInForwardingProxies;
    NSMapTable * _classesToProtocols;
    ROCKConnectionManager * _connectionManager;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSMapTable * _impersonatedObjects;
    NSObject<OS_dispatch_queue> * _instancesQueue;
    NSObject<OS_dispatch_queue> * _invocationQueue;
    NSMapTable * _objCTypesToMethodSignatures;
    NSHashTable * _pendingForwardingProxies;
    NSMapTable * _protocolsToClasses;
    NSMapTable * _protocolsToMethodSignatures;
    NSMapTable * _remoteImpersonators;
    NSMapTable * _serializers;
    NSObject<OS_xpc_object> * _serviceConnection;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, retain) NSMapTable *checkedInForwardingProxies;
@property (nonatomic, retain) NSMapTable *classesToProtocols;
@property (nonatomic, retain) ROCKConnectionManager *connectionManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, retain) NSMapTable *impersonatedObjects;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *instancesQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *invocationQueue;
@property (nonatomic, retain) NSMapTable *objCTypesToMethodSignatures;
@property (nonatomic, retain) NSHashTable *pendingForwardingProxies;
@property (nonatomic, retain) NSMapTable *protocolsToClasses;
@property (nonatomic, retain) NSMapTable *protocolsToMethodSignatures;
@property (nonatomic, retain) NSMapTable *remoteImpersonators;
@property (nonatomic, retain) NSMapTable *serializers;
@property (nonatomic, retain) NSObject<OS_xpc_object> *serviceConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)forwardingProxyWithBlock:(id)arg1 xpcAnonymousConnection:(id)arg2 eventQueue:(id)arg3 eventHandler:(id /* block */)arg4;
+ (void)forwardingProxyWithInstance:(id)arg1 eventQueue:(id)arg2 eventHandler:(id /* block */)arg3;
+ (id)forwardingProxyWithInstance:(id)arg1 machServiceName:(id)arg2 eventQueue:(id)arg3 eventHandler:(id /* block */)arg4;
+ (id)forwardingProxyWithInstance:(id)arg1 xpcAnonymousConnection:(id)arg2 eventQueue:(id)arg3 eventHandler:(id /* block */)arg4;
+ (id)remoteProxyWithMachServiceName:(id)arg1 eventQueue:(id)arg2 eventHandler:(id /* block */)arg3;
+ (id)remoteProxyWithServiceName:(id)arg1 eventQueue:(id)arg2 eventHandler:(id /* block */)arg3;
+ (id)remoteProxyWithXPCConnection:(id)arg1 eventQueue:(id)arg2 eventHandler:(id /* block */)arg3;
+ (id)sessionManagerWithEventQueue:(id)arg1 eventHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)blockProxyWithRemoteImpersonatorUUID:(id)arg1 signature:(id)arg2 stret:(id)arg3 rockConnection:(id)arg4;
- (id)checkedInForwardingProxies;
- (id)classesToProtocols;
- (id)connectionManager;
- (id)connectionQueue;
- (void)dealloc;
- (id)dispatchQueueProxyWithQueue:(id)arg1;
- (id /* block */)eventHandler;
- (id)eventQueue;
- (id)forwardingProxyWithBlock:(id)arg1;
- (id)forwardingProxyWithInstance:(id)arg1;
- (id)immutableProxyWithInstance:(id)arg1 error:(id*)arg2;
- (id)impersonatedObjects;
- (id)init;
- (id)initWithEventQueue:(id)arg1 eventHandler:(id /* block */)arg2;
- (id)instancesQueue;
- (id)invocationQueue;
- (id)objCTypesToMethodSignatures;
- (id)pendingForwardingProxies;
- (id)protocolsToClasses;
- (id)protocolsToMethodSignatures;
- (id)remoteHybridProxyWithRemoteImpersonatorUUID:(id)arg1 protocols:(id)arg2 rockConnection:(id)arg3 memoizedInstance:(id)arg4;
- (id)remoteImpersonators;
- (id)remoteProxyWithRemoteImpersonatorUUID:(id)arg1 protocols:(id)arg2 forwardingInterposerClass:(Class)arg3 rockConnection:(id)arg4;
- (id)serializers;
- (id)serviceConnection;
- (void)setCheckedInForwardingProxies:(id)arg1;
- (void)setClassesToProtocols:(id)arg1;
- (void)setConnectionManager:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setImpersonatedObjects:(id)arg1;
- (void)setInstancesQueue:(id)arg1;
- (void)setInvocationQueue:(id)arg1;
- (void)setObjCTypesToMethodSignatures:(id)arg1;
- (void)setPendingForwardingProxies:(id)arg1;
- (void)setProtocolsToClasses:(id)arg1;
- (void)setProtocolsToMethodSignatures:(id)arg1;
- (void)setRemoteImpersonators:(id)arg1;
- (void)setSerializers:(id)arg1;
- (void)setServiceConnection:(id)arg1;
- (void)setStateQueue:(id)arg1;
- (id)stateQueue;

@end
