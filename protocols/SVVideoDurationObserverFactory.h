/* made by EzioChiu.
 */

@protocol SVVideoDurationObserverFactory <NSObject>

@required

- (<SVVideoDurationObserving> *)createDurationObserverForVideo:(id <SVVideo>)arg1;

@end
