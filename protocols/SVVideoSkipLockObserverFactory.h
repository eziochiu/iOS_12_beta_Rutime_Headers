/* made by EzioChiu.
 */

@protocol SVVideoSkipLockObserverFactory <NSObject>

@required

- (<SVVideoSkipLockObserving> *)createSkipLockObserverForVideo:(id <SVVideo>)arg1;

@end
