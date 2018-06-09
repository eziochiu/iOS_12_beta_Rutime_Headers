/* made by EzioChiu.
 */

@protocol HMDCameraSnapshotRemoteStreamSenderDelegate <NSObject>

@required

- (void)snapshotStreamSender:(HMDCameraSnapshotRemoteStreamSender *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
- (void)snapshotStreamSender:(HMDCameraSnapshotRemoteStreamSender *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;

@end
