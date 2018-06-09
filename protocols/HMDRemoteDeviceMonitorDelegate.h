/* made by EzioChiu.
 */

@protocol HMDRemoteDeviceMonitorDelegate <NSObject>

@optional

- (void)remoteDeviceMonitor:(HMDRemoteDeviceMonitor *)arg1 deviceIsReachable:(HMDDevice *)arg2;
- (void)remoteDeviceMonitor:(HMDRemoteDeviceMonitor *)arg1 deviceIsUnreachable:(HMDDevice *)arg2;

@end
