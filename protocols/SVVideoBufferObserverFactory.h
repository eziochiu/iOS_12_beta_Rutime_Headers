/* made by EzioChiu.
 */

@protocol SVVideoBufferObserverFactory <NSObject>

@required

- (<SVVideoBufferObserving> *)createBufferObserverForVideo:(id <SVVideo>)arg1;

@end
