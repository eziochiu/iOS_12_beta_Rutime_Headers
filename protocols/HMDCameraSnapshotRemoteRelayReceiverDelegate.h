/* made by EzioChiu.
 */

@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate <NSObject>

@required

- (void)snapshotRelayReceiver:(HMDCameraSnapshotRemoteRelayReceiver *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSessionID *)arg4;
- (void)snapshotRelayReceiver:(HMDCameraSnapshotRemoteRelayReceiver *)arg1 didStartGettingImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;

@end
