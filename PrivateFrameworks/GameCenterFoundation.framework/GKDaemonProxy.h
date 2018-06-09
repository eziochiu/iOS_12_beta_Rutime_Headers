/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDaemonProxy : GKServiceProxy <GKClientProtocol, NSXPCConnectionDelegate> {
    NSObject<OS_dispatch_semaphore> * _concurrentRequestSemaphore;
    NSXPCConnection * _connection;
    <GKDaemonProxyDataUpdateDelegate> * _dataUpdateDelegate;
    int  _hostPID;
    NSDictionary * _interfaceLookup;
    NSObject<OS_dispatch_queue> * _invocationQueue;
    <GKDaemonProxyNetworkActivityIndicatorDelegate> * _networkActivityIndicatorDelegate;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <GKDaemonProxyDataUpdateDelegate> *dataUpdateDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hostPID;
@property (nonatomic) <GKDaemonProxyNetworkActivityIndicatorDelegate> *networkActivityIndicatorDelegate;
@property (readonly) Class superclass;

+ (id)daemonProxy;
+ (id)proxyForPlayer:(id)arg1;
+ (void)removeProxyForPlayer:(id)arg1;

- (void)_resetServiceLookup;
- (oneway void)acceptInviteWithNotification:(id)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (id)accountName;
- (oneway void)achievementSelected:(id)arg1;
- (void)addInterface:(id)arg1 toLookup:(id)arg2;
- (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;
- (id)authenticatedPlayerID;
- (id)authenticatedPlayerInfo;
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)beginNetworkActivity;
- (void)buildInterfaceLookup;
- (oneway void)cancelGameInvite:(id)arg1;
- (oneway void)challengeCompleted:(id)arg1;
- (oneway void)challengeReceived:(id)arg1;
- (oneway void)completedChallengeSelected:(id)arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (id)concurrentRequestSemaphore;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)dataUpdateDelegate;
- (void)dealloc;
- (oneway void)declineInviteWithNotification:(id)arg1;
- (oneway void)didConnectToParticipantWithID:(id)arg1;
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;
- (oneway void)didReceiveData:(id)arg1 reliably:(bool)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;
- (void)dispatchCompletedChallenge:(id)arg1;
- (oneway void)endNetworkActivity;
- (oneway void)fetchTurnBasedData;
- (oneway void)friendRequestSelected:(id)arg1;
- (oneway void)getAccountNameWithHandler:(id /* block */)arg1;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(id /* block */)arg1;
- (bool)hasAuthenticatedAccount;
- (int)hostPID;
- (id)init;
- (id)interfaceLookup;
- (id)invocationQueue;
- (void)loadRemoteImageDataForClientForURL:(id)arg1 reply:(id /* block */)arg2;
- (id)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
- (id)networkActivityIndicatorDelegate;
- (oneway void)processQuickAction:(id)arg1;
- (oneway void)receivedChallengeSelected:(id)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (oneway void)relayPushNotification:(id)arg1;
- (id)replyQueueForRequestSelector:(SEL)arg1;
- (void)resetLoginCancelCount;
- (oneway void)resetNetworkActivity;
- (void)resetServiceLookup;
- (oneway void)respondedToNearbyInvite:(id)arg1;
- (oneway void)scoreSelected:(id)arg1;
- (oneway void)session:(id)arg1 addedPlayer:(id)arg2;
- (oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
- (oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;
- (oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
- (oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;
- (oneway void)session:(id)arg1 removedPlayer:(id)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (void)setConnection:(id)arg1;
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(id /* block */)arg3;
- (void)setDataUpdateDelegate:(id)arg1;
- (void)setHostPID:(int)arg1;
- (oneway void)setLogBits:(int)arg1;
- (void)setNetworkActivityIndicatorDelegate:(id)arg1;
- (oneway void)setPreferencesValues:(id)arg1;
- (oneway void)setTestGame:(id)arg1;

@end
