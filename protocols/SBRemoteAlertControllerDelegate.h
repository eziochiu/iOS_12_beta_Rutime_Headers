/* made by EzioChiu.
 */

@protocol SBRemoteAlertControllerDelegate <NSObject>

@required

- (void)queue_remoteAlertController:(SBRemoteAlertController *)arg1 didInvalidateWithReason:(long long)arg2 underlyingError:(NSError *)arg3;
- (void)queue_remoteAlertControllerDidChangeActivationState:(SBRemoteAlertController *)arg1;

@end
