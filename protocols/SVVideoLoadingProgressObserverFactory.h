/* made by EzioChiu.
 */

@protocol SVVideoLoadingProgressObserverFactory <NSObject>

@required

- (<SVVideoLoadingProgressObserving> *)createLoadingProgressObserverForVideo:(id <SVVideo>)arg1;

@end
