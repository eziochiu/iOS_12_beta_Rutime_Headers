/* made by EzioChiu.
 */

@protocol TVRCXPCResponseProtocol <NSObject>

@required

- (void)deviceQueryUpdatedDiscoveredDevices:(NSSet *)arg1;
- (void)deviceUpdatedState:(_TVRCDeviceState *)arg1;
- (void)deviceWithState:(_TVRCDeviceState *)arg1 encounteredAuthChallengeOfType:(long long)arg2 codeToEnterOnDevice:(NSString *)arg3;
- (void)wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2;

@end
