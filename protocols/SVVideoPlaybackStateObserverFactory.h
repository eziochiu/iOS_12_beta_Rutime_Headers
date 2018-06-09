/* made by EzioChiu.
 */

@protocol SVVideoPlaybackStateObserverFactory <NSObject>

@required

- (<SVVideoPlaybackStateObserving> *)createPlaybackStateObserverForVideo:(id <SVVideo>)arg1;

@end
