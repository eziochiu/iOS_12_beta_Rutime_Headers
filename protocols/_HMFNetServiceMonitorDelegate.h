/* made by EzioChiu.
 */

@protocol _HMFNetServiceMonitorDelegate <NSObject>

@optional

- (void)monitor:(_HMFNetServiceMonitor *)arg1 didUpdateNetService:(HMFNetService *)arg2;
- (void)monitor:(_HMFNetServiceMonitor *)arg1 didUpdateReachability:(bool)arg2;

@end
