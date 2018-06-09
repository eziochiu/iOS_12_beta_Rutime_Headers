/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspace : NSObject <FBSceneClientProvider, FBWorkspaceServerDelegate> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMapTable * _hostToClientMap;
    bool  _invalidated;
    NSMutableSet * _invalidatingScenes;
    FBSceneClientProviderInvalidationAction * _invalidationAction;
    NSObject<OS_dispatch_queue> * _queue;
    FBWorkspaceServer * _server;
    bool  _willInvalidate;
    BSZeroingWeakReference * _zeroingWeakDelegate;
    BSZeroingWeakReference * _zeroingWeakProcess;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBProcess *process;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createSceneClientWithIdentifier:(id)arg1 specification:(id)arg2;
- (void)_invalidateSceneClientWithIdentifier:(id)arg1;
- (id)_queue;
- (void)_queue_enumerateScenes:(id /* block */)arg1;
- (void)_queue_fireInvalidationAction;
- (void)_queue_invalidateAllScenes;
- (void)_queue_sceneDidInvalidate:(id)arg1;
- (void)_queue_willInvalidateAllScenes;
- (Class)_sceneClassForSpecification:(id)arg1;
- (id)_server;
- (Class)_serverClass;
- (id)auditToken;
- (void)beginTransaction;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endTransaction;
- (id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3;
- (id)process;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)server:(id)arg1 handleConnectEvent:(id)arg2;
- (void)server:(id)arg1 handleCreateSceneRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)server:(id)arg1 handleDestroySceneRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)unregisterHost:(id)arg1;

@end
