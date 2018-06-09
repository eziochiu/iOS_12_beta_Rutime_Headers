/* made by EzioChiu.
 */

@protocol NUVideoViewControllerFactory <NSObject>

@required

- (SVVideoViewController *)createVideoViewControllerWithItems:(NSOrderedSet *)arg1 visibilityMonitor:(id <SVVisibilityMonitoring>)arg2 eventTrackerConfiguration:(NUNewsAnalyticsVideoPlayerEventTrackerConfiguration *)arg3 externalAnalyticsReferrer:(NSString *)arg4 placement:(NSString *)arg5 discoverMoreVideosInfo:(NTPBDiscoverMoreVideosInfo *)arg6;

@end
