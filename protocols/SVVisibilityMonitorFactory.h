/* made by EzioChiu.
 */

@protocol SVVisibilityMonitorFactory <NSObject>

@required

- (SVVisibilityMonitor *)createVisibilityMonitorForVideo:(id <SVVideo>)arg1;

@end
