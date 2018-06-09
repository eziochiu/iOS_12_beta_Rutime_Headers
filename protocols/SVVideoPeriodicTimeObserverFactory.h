/* made by EzioChiu.
 */

@protocol SVVideoPeriodicTimeObserverFactory <NSObject>

@required

- (<SVVideoPeriodicTimeObserving> *)createPeriodicTimeObserverForVideo:(id <SVVideo>)arg1;

@end
