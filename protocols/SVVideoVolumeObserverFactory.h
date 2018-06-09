/* made by EzioChiu.
 */

@protocol SVVideoVolumeObserverFactory <NSObject>

@required

- (<SVVideoVolumeObserving> *)createVolumeObserverForVideo:(id <SVVideo>)arg1;

@end
