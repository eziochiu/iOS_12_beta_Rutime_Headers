/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceClient : BSBaseXPCClient <FBSSceneUpdater> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    BSBasicServerClient * _client;
    <FBSWorkspaceClientDelegate> * _delegate;
    bool  _inTransaction;
    FBSProcessHandle * _processHandle;
    NSMutableArray * _queuedMessages;
    NSMutableDictionary * _sceneIDToSceneHandlerMap;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <FBSWorkspaceClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_debugLog:(id)arg1;
- (id)_handlerForSceneID:(id)arg1;
- (id)_loggingProem;
- (void)_queue_ensureTransaction;
- (void)_queue_handleActions:(id)arg1;
- (void)_queue_handleCreateScene:(id)arg1;
- (void)_queue_handleDestroyScene:(id)arg1;
- (void)_queue_handleSceneActions:(id)arg1;
- (void)_queue_handleSceneMessage:(id)arg1;
- (void)_queue_handleSceneUpdate:(id)arg1;
- (void)_queue_handleTransactionBookEnd;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(id /* block */)arg3 ofType:(Class)arg4;
- (void)_queue_sendMessageReply:(id)arg1 withEvent:(id)arg2;
- (id)_queue_workspaceEventFromMessage:(id)arg1 ofType:(Class)arg2;
- (void)_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (void)_sendMessageReply:(id)arg1 withEvent:(id)arg2;
- (id)callOutQueue;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)hostProcess;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (void)queue_connectionWasInterrupted;
- (void)queue_handleMessage:(id)arg1;
- (bool)queue_handleMessageWithType:(long long)arg1 message:(id)arg2 client:(id)arg3;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (void)scene:(id)arg1 didAttachLayer:(id)arg2;
- (void)scene:(id)arg1 didDetachLayer:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didUpdateLayer:(id)arg2;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)sendCreateSceneRequestEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendDestroySceneRequestEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (bool)willObserveLayersManually;

@end
