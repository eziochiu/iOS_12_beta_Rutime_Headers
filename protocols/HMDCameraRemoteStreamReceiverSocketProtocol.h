/* made by EzioChiu.
 */

@protocol HMDCameraRemoteStreamReceiverSocketProtocol <HMDCameraRemoteStreamReceiverProtocol>

@required

- (int)remoteAudioSocket;
- (int)remoteVideoSocket;

@end
