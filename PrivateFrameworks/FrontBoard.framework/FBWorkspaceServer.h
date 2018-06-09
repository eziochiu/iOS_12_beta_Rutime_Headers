/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceServer : NSObject {
    NSObject<OS_xpc_object> * _connection;
    <FBWorkspaceServerDelegate> * _delegate;
    bool  _invalidated;
    NSMutableArray * _messagesQueuedForSend;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _receivedEvent;
    NSMutableDictionary * _sceneIDToSceneHandlerMap;
    unsigned long long  _transactionBlockDepth;
    bool  _triedToSendMessageInTransaction;
}

@property (nonatomic, readonly) <FBWorkspaceServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_handlerForSceneID:(id)arg1;
- (id)_queue;
- (void)_queue_clientExited;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withHandlerBlock:(id /* block */)arg3;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withSceneHandlerBlock:(id /* block */)arg3;
- (void)_queue_handleConnect:(id)arg1;
- (void)_queue_handleCreateSceneRequest:(id)arg1;
- (void)_queue_handleDestroySceneRequest:(id)arg1;
- (void)_queue_handleMessage:(id)arg1;
- (bool)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)_queue_handleSceneAttachLayer:(id)arg1;
- (void)_queue_handleSceneDetachLayer:(id)arg1;
- (void)_queue_handleSceneDidReceiveActions:(id)arg1;
- (void)_queue_handleSceneDidReceiveMessage:(id)arg1;
- (void)_queue_handleSceneDidUpdateClientSettings:(id)arg1;
- (void)_queue_handleSceneUpdateLayer:(id)arg1;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(id /* block */)arg3 ofType:(Class)arg4;
- (void)_queue_sendMessage:(long long)arg1 withMessagePacker:(id /* block */)arg2 withReplyHandler:(id /* block */)arg3;
- (void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)_queue_setXPCConnection:(id)arg1;
- (void)beginTransaction;
- (void)dealloc;
- (id)delegate;
- (void)endTransaction;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (void)sendActionsEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)sendCreateSceneEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendDestroySceneEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendMessageEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)sendSceneActionsEvent:(id)arg1;
- (void)sendSceneUpdateEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)unregisterSceneEventHandler:(id)arg1 forSceneID:(id)arg2;

@end
