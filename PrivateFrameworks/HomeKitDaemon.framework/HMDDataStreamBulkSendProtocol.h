/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamBulkSendProtocol : NSObject <HMDDataStreamProtocol, HMFLogging> {
    id  _accessory;
    NSMapTable * _activeBulkSendSessions;
    <HMDDataStreamProtocolDelegate> * _dataStream;
    bool  _isConnected;
    NSPointerArray * _listeners;
    NSMapTable * _pendingBulkSendSessions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) id accessory;
@property (nonatomic, retain) NSMapTable *activeBulkSendSessions;
@property (nonatomic) <HMDDataStreamProtocolDelegate> *dataStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isConnected;
@property (nonatomic, retain) NSPointerArray *listeners;
@property (nonatomic, retain) NSMapTable *pendingBulkSendSessions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cancelSessionWithIdentifier:(id)arg1 reason:(unsigned char)arg2;
- (void)_closeAllSessionsWithError:(id)arg1;
- (id)_createSessionCandidateWithSessionIdentifier:(id)arg1;
- (id)_createSessionFromCandidate:(id)arg1 queue:(id)arg2;
- (id)_getBulkSendSessionCandidateForSessionIdentifier:(id)arg1;
- (id)_getBulkSendSessionForSessionIdentifier:(id)arg1;
- (void)_handleCloseMessage:(id)arg1;
- (void)_handleDataMessage:(id)arg1;
- (void)_handleOpenMessage:(id)arg1;
- (void)_pumpMessage:(id)arg1 session:(id)arg2;
- (void)_pumpReceiveFailure:(id)arg1 session:(id)arg2;
- (void)_rejectSessionCandidate:(id)arg1 reason:(unsigned char)arg2;
- (void)_removeBulkSendSessionCandidateForSessionIdentifier:(id)arg1;
- (void)_removeBulkSendSessionForSessionIdentifier:(id)arg1;
- (void)_startSessionCandidate:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (id)accessory;
- (id)activeBulkSendSessions;
- (void)addListener:(id)arg1;
- (void)asyncBulkSendSessionCandidate:(id)arg1 didAcceptOnQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)asyncBulkSendSessionCandidate:(id)arg1 didRejectWithReason:(unsigned char)arg2;
- (void)asyncBulkSendSessionDidCancelSessionWithIdentifier:(id)arg1 reason:(unsigned char)arg2;
- (id)dataStream;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (bool)dataStream:(id)arg1 didReceiveMessage:(id)arg2;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (id)initWithQueue:(id)arg1 accessory:(id)arg2;
- (bool)isConnected;
- (id)listeners;
- (id)pendingBulkSendSessions;
- (id)queue;
- (void)setAccessory:(id)arg1;
- (void)setActiveBulkSendSessions:(id)arg1;
- (void)setDataStream:(id)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setListeners:(id)arg1;
- (void)setPendingBulkSendSessions:(id)arg1;
- (void)setQueue:(id)arg1;

@end
