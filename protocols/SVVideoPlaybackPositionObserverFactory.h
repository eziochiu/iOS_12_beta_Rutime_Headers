/* made by EzioChiu.
 */

@protocol SVVideoPlaybackPositionObserverFactory <NSObject>

@required

- (<SVVideoPlaybackPositionObserving> *)createPlaybackPositionObserverForVideo:(id <SVVideo>)arg1;

@end
