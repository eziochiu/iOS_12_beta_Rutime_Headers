/* made by EzioChiu.
 */

@protocol HMDCameraSnapshotRemoteRelaySenderDelegate <NSObject>

@required

- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;

@end
