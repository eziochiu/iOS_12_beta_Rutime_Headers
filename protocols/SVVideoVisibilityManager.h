/* made by EzioChiu.
 */

@protocol SVVideoVisibilityManager <SVVisibilityReporting>

@required

- (void)startMonitoringVideo:(id <SVVideo>)arg1;
- (void)stopMonitoringVideo:(id <SVVideo>)arg1;

@end
