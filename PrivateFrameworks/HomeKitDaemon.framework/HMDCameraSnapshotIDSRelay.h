/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotIDSRelay : HMFObject <HMFLogging, IDSServiceDelegate> {
    IDSService * _idsStreamService;
    HMDCameraSessionID * _sessionID;
    HMFOSTransaction * _snapshotRelayTransaction;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *idsStreamService;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, retain) HMFOSTransaction *snapshotRelayTransaction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)idsStreamService;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (id)sessionID;
- (void)setSnapshotRelayTransaction:(id)arg1;
- (id)snapshotRelayTransaction;
- (id)workQueue;

@end
