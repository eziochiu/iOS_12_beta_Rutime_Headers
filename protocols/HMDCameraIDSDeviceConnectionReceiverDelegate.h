/* made by EzioChiu.
 */

@protocol HMDCameraIDSDeviceConnectionReceiverDelegate <NSObject>

@required

- (void)deviceConnectionReceiver:(HMDCameraIDSDeviceConnectionReceiver *)arg1 didEndSession:(NSError *)arg2;
- (void)deviceConnectionReceiver:(HMDCameraIDSDeviceConnectionReceiver *)arg1 didSetup:(NSError *)arg2;

@end
