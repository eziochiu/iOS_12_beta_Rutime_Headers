/* made by EzioChiu.
 */

@protocol SVVideoPlaybackEventTrackerFactory <NSObject>

@required

- (<SVVideoPlaybackEventTracking> *)createEventTrackerForVideo:(id <SVVideo>)arg1;

@end
