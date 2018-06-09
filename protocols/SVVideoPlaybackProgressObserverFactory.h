/* made by EzioChiu.
 */

@protocol SVVideoPlaybackProgressObserverFactory <NSObject>

@required

- (<SVVideoPlaybackProgressObserving> *)createPlaybackProgressObserverForVideo:(id <SVVideo>)arg1;

@end
