/* made by EzioChiu.
 */

@protocol SVVideoLoadingStateObserverFactory <NSObject>

@required

- (<SVVideoLoadingStateObserving> *)createLoadingStateObserverForVideo:(id <SVVideo>)arg1;

@end
