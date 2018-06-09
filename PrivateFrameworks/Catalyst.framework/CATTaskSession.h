/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATTaskSession : NSObject <CATTaskOperationNotificationDelegate, CATTransportDelegate> {
    NSDictionary * _clientUserInfo;
    <CATTaskSessionDelegate> * _delegate;
    NSUUID * _sessionUUID;
    NSDictionary * _userInfo;
    CATOperationQueue * mDelegationQueue;
    NSMutableArray * mEnqueuedMessages;
    CATStateMachine * mFSM;
    bool  mIsStarting;
    NSMutableDictionary * mOperationByRemoteUUID;
    NSMutableSet * mOperations;
    CATOperationQueue * mOrphanedOperationQueue;
    NSHashTable * mOrphanedTransports;
    NSDictionary * mPreviousSessionInfo;
    NSMapTable * mRemoteUUIDsByFinishedOperationProgressUpdates;
    NSObject<OS_dispatch_group> * mSessionDidInvalidateGroup;
    CATTaskSession * mStrongSelf;
    CATTransport * mTransport;
}

@property (nonatomic, copy) NSDictionary *clientUserInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CATTaskSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATTransport *transport;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)abandonTransport;
- (void)acceptConnection;
- (id)captureTransport;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)clientDidResumeWithMessage:(id)arg1;
- (id)clientUserInfo;
- (void)connectWithTransport:(id)arg1;
- (void)connectWithTransportFromTaskSession:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidConnect;
- (void)delegateDidDisconnect;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidInvalidate;
- (void)delegateDidInvalidateAndFinalize;
- (void)delegateEnqueueOperation:(id)arg1;
- (id)delegatePrepareOperationWithRequest:(id)arg1 error:(id*)arg2;
- (bool)delegateShouldAcceptConnection;
- (void)delegateWillInvalidate;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1;
- (void)delegatedidReceiveNotificationWithName:(id)arg1;
- (id)description;
- (void)didCompleteSendForMessage:(id)arg1;
- (void)discardPreviousSessionInfo;
- (void)disconnect;
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;
- (void)enqueueMessage:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)evaluateConnectionWithResumeMessage:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (void)localOperationDidFinish:(id)arg1;
- (void)operationDidFinish:(id)arg1 remoteUUID:(id)arg2;
- (void)operationDidIncrementProgress:(id)arg1 remoteUUID:(id)arg2;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)processCancelMessage:(id)arg1;
- (void)processFetchProgressMessage:(id)arg1;
- (void)processNotificationMessage:(id)arg1;
- (void)processSessionMessage:(id)arg1;
- (void)processStartMessage:(id)arg1;
- (void)processTaskMessage:(id)arg1;
- (void)rejectConnection;
- (void)restorePreviousSessionInfo;
- (void)resumeCapturedTransportFromTaskSession:(id)arg1;
- (void)resumeTransport:(id)arg1;
- (void)savePreviousSessionInfo;
- (void)sendMessage:(id)arg1;
- (void)sendMessageThroughTransport:(id)arg1;
- (void)sendResumedMessage;
- (void)sessionDidInvalidate;
- (id)sessionUUID;
- (void)setClientUserInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (id)transport;
- (void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)transport:(id)arg1 didSendMessage:(id)arg2;
- (void)transportDidInvalidate:(id)arg1;
- (id)userInfo;

@end
