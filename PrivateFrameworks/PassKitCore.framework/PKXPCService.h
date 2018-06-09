/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver> {
    <NSObject> * _backgroundListener;
    NSString * _className;
    NSXPCConnection * _connection;
    NSLock * _connectionLock;
    <PKXPCServiceDelegate> * _delegate;
    id  _exportedObject;
    NSXPCInterface * _exportedObjectInterface;
    PKXPCForwarder * _exportedProxy;
    bool  _forceConnectionOnResume;
    <PKForegroundActiveArbiter> * _foregroundActiveArbiter;
    <NSObject> * _foregroundListener;
    NSString * _machServiceName;
    NSXPCInterface * _remoteObjectInterface;
    NSString * _serviceResumedNotificationName;
    int  _serviceResumedToken;
    bool  _suspendCallbacks;
}

@property (nonatomic, readonly) bool connectionEstablished;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKXPCServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceConnectionOnResume;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *machServiceName;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

+ (void)setForegroundActiveArbiter:(id)arg1;

- (void).cxx_destruct;
- (id)_connection;
- (void)_createConnectionIfPossible:(bool)arg1;
- (void)_establishServiceConnection;
- (void)_invalidateConnectionIfPossible;
- (id /* block */)_newErrorHandlerWithSemaphore:(id)arg1;
- (id /* block */)_newWrappedErrorHandlerForHandler:(id /* block */)arg1;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_registerForServiceListenerResumedNotifications;
- (void)_sendResumed;
- (void)_sendSuspended;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_unregisterForServiceListenerResumedNotifications;
- (bool)connectionEstablished;
- (void)dealloc;
- (id)delegate;
- (id)existingRemoteObjectProxy;
- (id)existingRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)existingSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)forceConnectionOnResume;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5;
- (bool)isSuspended;
- (id)machServiceName;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)remoteObjectProxyWithSemaphore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceConnectionOnResume:(bool)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
