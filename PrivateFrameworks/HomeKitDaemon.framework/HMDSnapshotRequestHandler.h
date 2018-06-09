/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotRequestHandler : HMFObject <HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol, HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    NSString * _imageCacheDirectory;
    NSString * _logString;
    HMDSnapshotFile * _mostRecentSnapshot;
    HMFTimer * _mostRecentSnapshotInvalidationTimer;
    NSMutableArray * _pendingRequests;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    NSArray * _supportedVideoResolutions;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *imageCacheDirectory;
@property (nonatomic, readonly) NSString *logString;
@property (nonatomic, retain) HMDSnapshotFile *mostRecentSnapshot;
@property (nonatomic, retain) HMFTimer *mostRecentSnapshotInvalidationTimer;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedVideoResolutions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addSupportedResolutionsFrom:(id)arg1 to:(id)arg2;
- (void)_getSupportedVideoResolutions:(id)arg1 streamingTierType:(unsigned long long)arg2;
- (void)_handleImageResourceData:(id)arg1 error:(id)arg2 requestedResolution:(id)arg3 snapshotDataTrasaction:(id)arg4;
- (void)_handleSupportedParameters:(id)arg1 sessionID:(id)arg2 streamingTierType:(unsigned long long)arg3;
- (id)_prepareResolutionPreference:(id)arg1;
- (id)_resolutionToRequest:(unsigned long long)arg1;
- (id)_saveSnapshotFile:(id)arg1;
- (void)_sendSnapshotRequest:(id)arg1 streamingTierType:(unsigned long long)arg2;
- (id)accessory;
- (id)imageCacheDirectory;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 imageCacheDirectory:(id)arg4 logID:(id)arg5;
- (id)logIdentifier;
- (id)logString;
- (id)mostRecentSnapshot;
- (id)mostRecentSnapshotInvalidationTimer;
- (id)pendingRequests;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setMostRecentSnapshot:(id)arg1;
- (void)setMostRecentSnapshotInvalidationTimer:(id)arg1;
- (void)setSupportedVideoResolutions:(id)arg1;
- (id)streamSnapshotHandler;
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
- (id)supportedVideoResolutions;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
