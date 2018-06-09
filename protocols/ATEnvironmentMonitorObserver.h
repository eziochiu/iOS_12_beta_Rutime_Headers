/* made by EzioChiu.
 */

@protocol ATEnvironmentMonitorObserver <NSObject>

@optional

- (void)environmentMonitorDidChangeNetworkReachability:(ATEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangePower:(ATEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeThermalPressure:(ATEnvironmentMonitor *)arg1;

@end
