/* made by EzioChiu.
 */

@protocol MNVehicleDetectorObserver <NSObject>

@required

- (void)vehicleDetector:(MNVehicleDetector *)arg1 didChangeStateTo:(unsigned long long)arg2;

@end
