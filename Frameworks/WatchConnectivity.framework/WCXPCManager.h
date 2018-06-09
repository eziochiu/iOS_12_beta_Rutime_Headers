/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCManagerClientProtocol, WCXPCManagerDaemonProtocol> {
    NSXPCConnection * _connection;
    bool  _connectionInvalidated;
    NSObject<WCXPCManagerDelegate> * _delegate;
    int  _listenerResumedToken;
    bool  _reconnectFailed;
    unsigned long long  _reconnectRetryCount;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSXPCConnection *connection;
@property bool connectionInvalidated;
@property (readonly, copy) NSString *debugDescription;
@property NSObject<WCXPCManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int listenerResumedToken;
@property bool reconnectFailed;
@property unsigned long long reconnectRetryCount;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)clientInterface;
+ (id)daemonInterface;
+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)acknowledgeFileIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2;
- (void)acknowledgeFileResultIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2;
- (void)acknowledgeUserInfoIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2;
- (void)acknowledgeUserInfoResultIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2;
- (void)cancelAllOutstandingMessages;
- (void)cancelSendWithIdentifier:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (bool)connectionInvalidated;
- (id)delegate;
- (void)handleActiveDeviceSwitchStarted;
- (void)handleApplicationContextWithPairingID:(id)arg1;
- (void)handleFileResultWithPairingID:(id)arg1;
- (void)handleIncomingFileWithPairingID:(id)arg1;
- (void)handleIncomingUserInfoWithPairingID:(id)arg1;
- (void)handleInterruptedConnection;
- (void)handleMessageSendingAllowed;
- (void)handleRequest:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (void)handleSessionStateChanged:(id)arg1;
- (void)handleUserInfoResultWithPairingID:(id)arg1;
- (id)init;
- (void)invalidateConnection;
- (int)listenerResumedToken;
- (void)onqueue_reconnect;
- (void)onqueue_retryConnectIfNecessary;
- (bool)reconnectFailed;
- (unsigned long long)reconnectRetryCount;
- (void)sendMessage:(id)arg1 clientPairingID:(id)arg2 acceptanceHandler:(id /* block */)arg3;
- (void)sendMessage:(id)arg1 clientPairingID:(id)arg2 acceptanceHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)sessionReadyForInitialStateForClientPairingID:(id)arg1 supportsActiveDeviceSwitch:(bool)arg2 withErrorHandler:(id /* block */)arg3;
- (void)setConnectionInvalidated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListenerResumedToken:(int)arg1;
- (void)setReconnectFailed:(bool)arg1;
- (void)setReconnectRetryCount:(unsigned long long)arg1;
- (void)setupConnection;
- (void)transferFile:(id)arg1 sandboxToken:(id)arg2 clientPairingID:(id)arg3 errorHandler:(id /* block */)arg4;
- (void)transferUserInfo:(id)arg1 withURL:(id)arg2 clientPairingID:(id)arg3 errorHandler:(id /* block */)arg4;
- (void)updateApplicationContext:(id)arg1 clientPairingID:(id)arg2 errorHandler:(id /* block */)arg3;
- (id)workQueue;

@end
