/* made by EzioChiu.
 */

@protocol SVPlayerTimeControlStatusObserverFactory <NSObject>

@required

- (<SVPlayerTimeControlStatusObserving> *)createTimeControlStatusObserverForVideo:(id <SVVideo>)arg1;

@end
