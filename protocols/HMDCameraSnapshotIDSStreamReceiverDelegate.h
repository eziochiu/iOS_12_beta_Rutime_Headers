/* made by EzioChiu.
 */

@protocol HMDCameraSnapshotIDSStreamReceiverDelegate <NSObject>

@required

- (void)relayReceiver:(HMDCameraSnapshotIDSStreamReceiver *)arg1 didReceiveFile:(NSError *)arg2;

@end
