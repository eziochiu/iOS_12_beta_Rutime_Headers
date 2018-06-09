/* made by EzioChiu.
 */

@protocol SVPlayerStatusObserverFactory <NSObject>

@required

- (<SVPlayerStatusObserving> *)createPlayerStatusObserverForVideo:(id <SVVideo>)arg1;

@end
