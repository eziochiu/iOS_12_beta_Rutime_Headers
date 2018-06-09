/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotSenderProtocol, HMFLogging> {
    <HMDCameraSnapshotRemoteStreamSenderDelegate> * _delegate;
    HMDCameraSnapshotLocal * _snapshotLocal;
    HMDCameraSnapshotIDSStreamInitiator * _streamInitiator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraSnapshotRemoteStreamSenderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraSnapshotLocal *snapshotLocal;
@property (nonatomic, readonly) HMDCameraSnapshotIDSStreamInitiator *streamInitiator;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidStartCaptureImageDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 destinationID:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9;
- (id)logIdentifier;
- (void)sendSnapshotAtPath:(id)arg1;
- (void)snapShotTransferComplete;
- (id)snapshotLocal;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (id)streamInitiator;
- (void)streamInitiator:(id)arg1 didFailToSendFile:(id)arg2;

@end
