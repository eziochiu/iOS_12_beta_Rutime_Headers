/* made by EzioChiu.
 */

@protocol HMDCameraSnapshotIDSRelayReceiverDelegate <NSObject>

@required

- (void)relayReceiver:(HMDCameraSnapshotIDSRelayReceiver *)arg1 didReceiveFile:(NSError *)arg2;

@end
