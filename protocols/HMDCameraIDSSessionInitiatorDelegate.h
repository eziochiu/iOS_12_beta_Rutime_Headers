/* made by EzioChiu.
 */

@protocol HMDCameraIDSSessionInitiatorDelegate <NSObject>

@required

- (void)sessionInitiator:(HMDCameraIDSSessionInitiator *)arg1 didEndSession:(NSError *)arg2;
- (void)sessionInitiator:(HMDCameraIDSSessionInitiator *)arg1 didSetup:(NSError *)arg2;

@end
