/* made by EzioChiu.
 */

@protocol HMDCameraRemoteStreamReceiverProtocol <HMDCameraRemoteStreamProtocol>

@required

- (IDSSession *)session;
- (void)setupReceiver:(NSString *)arg1;

@end
