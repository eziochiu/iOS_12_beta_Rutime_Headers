/* made by EzioChiu.
 */

@protocol HMDCameraSnapshotLocalDelegate <NSObject>

@required

- (void)snapshotLocal:(HMDCameraSnapshotLocal *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSessionID *)arg4;

@end
