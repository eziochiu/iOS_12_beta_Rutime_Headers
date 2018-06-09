/* made by EzioChiu.
 */

@protocol PUUnlockClient <NSObject>

@required

- (void)didDisableOnlyRemoteUnlock:(bool)arg1 error:(NSError *)arg2;
- (void)didEnableOnlyRemoteUnlock:(bool)arg1 error:(NSError *)arg2;
- (void)didGetRemoteDeviceState:(PURemoteDeviceState *)arg1 error:(NSError *)arg2;
- (void)didPairForUnlock:(bool)arg1 error:(NSError *)arg2;
- (void)didUnpairForUnlock:(bool)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidCompleteRemoteAction:(bool)arg1 remoteDeviceState:(PURemoteDeviceState *)arg2 error:(NSError *)arg3;
- (void)remoteDeviceDidRemoveLockout:(bool)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidUnlock;

@end
