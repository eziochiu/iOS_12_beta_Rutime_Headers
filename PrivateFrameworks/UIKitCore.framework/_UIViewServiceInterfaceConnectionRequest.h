/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {
    bool  __automatic_invalidation_invalidated;
    int  __automatic_invalidation_retainCount;
    NSError * _cancellationError;
    _UIAsyncInvocation * _cancellationInvocation;
    id /* block */  _connectionHandler;
    bool  _isCancelled;
    NSObject<OS_dispatch_queue> * _queue;
    _UIRemoteViewService * _service;
    NSString * _serviceBundleIdentifier;
    BKSProcessAssertion * _serviceProcessAssertion;
    NSXPCConnection * _serviceSessionConnection;
    int  _sessionRequestNotifyToken;
}

+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)connectToViewService:(id)arg1 connectionHandler:(id /* block */)arg2;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(id /* block */)arg2;

- (int)__automatic_invalidation_logic;
- (void)_cancelUnconditionallyThen:(id /* block */)arg1;
- (void)_cancelWithError:(id)arg1;
- (void)_createAndEstablishConnection;
- (void)_createPlugInProcessAssertion;
- (void)_createProcessAssertion;
- (void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(id /* block */)arg3;
- (void)_didConnectToService;
- (void)_establishConnection;
- (bool)_isDeallocating;
- (void)_launchService;
- (bool)_tryRetain;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
