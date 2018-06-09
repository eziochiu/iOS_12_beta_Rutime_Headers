/* made by EzioChiu.
 */

@protocol CRVehiclePolicyMonitoring <NSObject>

@optional

- (void)willDisableVehicleTrackedByMonitor:(CRVehiclePolicyMonitor *)arg1;
- (void)willEnableVehicleTrackedByMonitor:(CRVehiclePolicyMonitor *)arg1;

@end
