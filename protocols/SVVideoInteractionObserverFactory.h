/* made by EzioChiu.
 */

@protocol SVVideoInteractionObserverFactory <NSObject>

@required

- (<SVInteractionObserving> *)createInteractionObserverForVideo:(id <SVVideo>)arg1;

@end
