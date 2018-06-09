/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotIDSRelayInitiator : HMDCameraSnapshotIDSRelay <HMFLogging, IDSSessionDelegate> {
    <HMDCameraSnapshotIDSRelayInitiatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _destinationID;
    NSMutableData * _fileLengthAndData;
    IDSSession * _idsSession;
    bool  _idsSessionStarted;
    HMDSnapshotFile * _snapshotFile;
    NSObject<OS_dispatch_source> * _socketSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSnapshotIDSRelayInitiatorDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *destinationID;
@property (nonatomic, retain) NSMutableData *fileLengthAndData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSSession *idsSession;
@property (nonatomic) bool idsSessionStarted;
@property (nonatomic, retain) HMDSnapshotFile *snapshotFile;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *socketSource;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callFileTransferFailed:(id)arg1;
- (void)_sendFile;
- (void)_sendInvitation;
- (id)_smallData;
- (void)_startFileTransfer;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)destinationID;
- (id)fileLengthAndData;
- (id)idsSession;
- (bool)idsSessionStarted;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)logIdentifier;
- (void)sendFile:(id)arg1;
- (void)sendInvitation;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setFileLengthAndData:(id)arg1;
- (void)setIdsSession:(id)arg1;
- (void)setIdsSessionStarted:(bool)arg1;
- (void)setSnapshotFile:(id)arg1;
- (void)setSocketSource:(id)arg1;
- (id)snapshotFile;
- (id)socketSource;

@end
