/* made by EzioChiu.
 */

@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate <NSObject>

@required

- (void)relayInitiator:(HMDCameraSnapshotIDSRelayInitiator *)arg1 didFailToSendFile:(NSError *)arg2;

@end
