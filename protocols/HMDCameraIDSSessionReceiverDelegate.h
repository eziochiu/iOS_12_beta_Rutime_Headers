/* made by EzioChiu.
 */

@protocol HMDCameraIDSSessionReceiverDelegate <NSObject>

@required

- (void)sessionReceiver:(HMDCameraIDSSessionReceiver *)arg1 didEndSession:(NSError *)arg2;
- (void)sessionReceiver:(HMDCameraIDSSessionReceiver *)arg1 didSetup:(NSError *)arg2;

@end
