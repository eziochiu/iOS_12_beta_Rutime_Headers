/* made by EzioChiu.
 */

@protocol _TVRCWifiMonitorProtocol <NSObject>

@required

- (void)wifiMonitor:(_TVRCWifiMonitor *)arg1 updatedNetworkStateWithOldState:(long long)arg2 andNewState:(long long)arg3;

@end
