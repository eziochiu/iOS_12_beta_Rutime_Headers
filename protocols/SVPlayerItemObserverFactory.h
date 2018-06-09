/* made by EzioChiu.
 */

@protocol SVPlayerItemObserverFactory <NSObject>

@required

- (<SVPlayerItemObserving> *)createPlayerItemObserverForVideo:(id <SVVideo>)arg1;

@end
