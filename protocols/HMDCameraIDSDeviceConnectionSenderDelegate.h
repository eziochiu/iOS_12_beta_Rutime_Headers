/* made by EzioChiu.
 */

@protocol HMDCameraIDSDeviceConnectionSenderDelegate <NSObject>

@required

- (void)deviceConnectionSender:(HMDCameraIDSDeviceConnectionSender *)arg1 didEndSession:(NSError *)arg2;
- (void)deviceConnectionSender:(HMDCameraIDSDeviceConnectionSender *)arg1 didSetup:(NSError *)arg2;

@end
