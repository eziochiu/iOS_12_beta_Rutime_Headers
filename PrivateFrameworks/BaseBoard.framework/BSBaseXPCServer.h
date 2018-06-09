/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBaseXPCServer : NSObject {
    NSMutableSet * _clients;
    bool  _connectionResumed;
    NSObject<OS_xpc_object> * _listenerConnection;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    bool  _usesAnonymousConnection;
}

@property (getter=usesAnonymousConnection, nonatomic) bool usesAnonymousConnection;

- (void)_addClientConnection:(id)arg1;
- (id)_clients;
- (id)_connection;
- (id)_copyEndpoint;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (void)_invalidate;
- (id)_notifyTokenName;
- (id)_queue_clientForConnection:(id)arg1;
- (void)_queue_removeClientConnection:(id)arg1;
- (void)_sendMessageReply:(id)arg1 messagePacker:(id /* block */)arg2;
- (void)_sendReply:(id)arg1 messagePacker:(id /* block */)arg2;
- (void)_sendReplyForMessage:(id)arg1 messagePacker:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)queue;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (void)queue_clientAdded:(id)arg1;
- (void)queue_clientRemoved:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (id)queue_newClientForConnection:(id)arg1;
- (bool)queue_shouldAcceptNewConnection:(id)arg1;
- (void)registerServerSuspended;
- (void)resumeServer;
- (void)run;
- (void)setUsesAnonymousConnection:(bool)arg1;
- (bool)usesAnonymousConnection;

@end
