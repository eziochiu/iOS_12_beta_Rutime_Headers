/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXProvider : NSObject <CXActionDelegate, CXProviderVendorProtocol> {
    NSObject<OS_dispatch_queue> * _completionQueue;
    CXProviderConfiguration * _configuration;
    <CXProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableArray * _mutablePendingTransactions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) CXProviderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXProviderDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CXProviderHostProtocol> *hostProtocolDelegate;
@property (nonatomic, retain) NSMutableArray *mutablePendingTransactions;
@property (nonatomic, readonly, copy) NSArray *pendingTransactions;
@property (nonatomic, readonly) <CXProviderDelegatePrivate> *privateDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) bool requiresProxyingAVAudioSessionState;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (id)_pendingActionWithUUID:(id)arg1;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (void)_updatePendingTransactions;
- (void)actionCompleted:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (id)completionQueue;
- (id)configuration;
- (id)delegate;
- (id)delegateQueue;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(bool)arg1;
- (void)handleConnectionInterruption;
- (void)handleMediaServicesWereResetNotification:(id)arg1;
- (id)hostProtocolDelegate;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (id)mutablePendingTransactions;
- (id)pendingCallActionsOfClass:(Class)arg1 withCallUUID:(id)arg2;
- (id)pendingTransactions;
- (void)performCompletionBlock:(id /* block */)arg1;
- (void)performDelegateCallback:(id /* block */)arg1;
- (id)privateDelegate;
- (id)queue;
- (void)registerCurrentConfiguration;
- (void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3;
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(id /* block */)arg3;
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (void)requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (bool)requiresProxyingAVAudioSessionState;
- (void)sendProviderDidBegin;
- (void)setCompletionQueue:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setMutablePendingTransactions:(id)arg1;
- (void)setQueue:(id)arg1;

@end
