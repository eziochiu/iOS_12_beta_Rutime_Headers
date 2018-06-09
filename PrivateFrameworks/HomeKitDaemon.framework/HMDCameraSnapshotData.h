/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotData : HMFObject {
    NSData * _snapshotData;
    HMFOSTransaction * _snapshotDataTrasaction;
    HMDVideoResolution * _videoResolution;
}

@property (nonatomic, readonly) NSData *snapshotData;
@property (nonatomic, readonly) HMFOSTransaction *snapshotDataTrasaction;
@property (nonatomic, readonly) HMDVideoResolution *videoResolution;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3;
- (id)initWithSnapshotFile:(id)arg1 videoResolution:(id)arg2;
- (id)snapshotData;
- (id)snapshotDataTrasaction;
- (id)videoResolution;

@end
