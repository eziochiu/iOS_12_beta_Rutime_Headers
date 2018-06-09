/* made by EzioChiu.
 */

@protocol SFUnlockClientProtocol <NSObject>

@required

- (void)beganAttemptWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)completedUnlockWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)enabledDevice:(SFAutoUnlockDevice *)arg1;
- (void)failedToEnableDevice:(SFAutoUnlockDevice *)arg1 error:(NSError *)arg2;
- (void)failedUnlockWithError:(NSError *)arg1;
- (void)keyDeviceLocked:(SFAutoUnlockDevice *)arg1;

@end
