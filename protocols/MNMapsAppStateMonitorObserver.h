/* made by EzioChiu.
 */

@protocol MNMapsAppStateMonitorObserver <NSObject>

@required

- (void)mapsAppStateMonitor:(MNMapsAppStateMonitor *)arg1 didChangeToState:(unsigned int)arg2;

@end
