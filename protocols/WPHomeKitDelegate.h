/* made by EzioChiu.
 */

@protocol WPHomeKitDelegate <NSObject>

@required

- (void)homeKit:(WPHomeKit *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)homeKit:(WPHomeKit *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4 type:(long long)arg5;
- (void)homeKitDidUpdateState:(WPHomeKit *)arg1;

@optional

- (void)homeKit:(WPHomeKit *)arg1 allowDuplicate:(bool)arg2;
- (void)homeKit:(WPHomeKit *)arg1 failedToStartScanningWithError:(NSError *)arg2 forType:(long long)arg3;
- (void)homeKitStartedScanning:(WPHomeKit *)arg1 forType:(long long)arg2;
- (void)homeKitStoppedScanning:(WPHomeKit *)arg1 forType:(long long)arg2;

@end
