/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMDCameraGetSnapshotProtocol, HMDCameraStreamSnapshotCaptureDelegate, HMFLogging> {
    NSMapTable * _delegateTable;
    NSString * _logID;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _retiredStreamSnapshotCaptures;
    NSMutableDictionary * _serviceInstanceStreamStatus;
    bool  _streamAvailable;
    bool  _streamSetupInProgress;
    NSMutableSet * _streamSnapshotCaptures;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMapTable *delegateTable;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) NSMutableSet *retiredStreamSnapshotCaptures;
@property (nonatomic, readonly) NSMutableDictionary *serviceInstanceStreamStatus;
@property (getter=isStreamAvailable, nonatomic, readonly) bool streamAvailable;
@property (getter=isStreamSetupInProgress, nonatomic, readonly) bool streamSetupInProgress;
@property (nonatomic, readonly) NSMutableSet *streamSnapshotCaptures;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidGetLastSnapshot:(id)arg1;
- (void)_callDidGetNewSnapshot:(id)arg1;
- (void)_callStreamSetupInProgress:(bool)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)addVideoStreamInterface:(id)arg1;
- (void)callStreamSetupInProgress:(bool)arg1;
- (id)delegateTable;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3;
- (bool)isStreamAvailable;
- (bool)isStreamSetupInProgress;
- (id)logID;
- (id)logIdentifier;
- (id)propertyQueue;
- (void)removeDelegate:(id)arg1;
- (void)removeVideoStreamInterface:(id)arg1;
- (id)retiredStreamSnapshotCaptures;
- (id)serviceInstanceStreamStatus;
- (void)setStreamAvailable:(bool)arg1;
- (void)setStreamSetupInProgress:(bool)arg1;
- (void)setStreamSetupStatusForService:(id)arg1 inProgress:(bool)arg2;
- (void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2;
- (id)streamSnapshotCaptures;
- (id)workQueue;

@end
