/* made by EzioChiu.
 */

@protocol SVVideoAdProviderFactory <NSObject>

@required

- (<SVVideoAdProviding> *)createVideoAdProviderForVideo:(id <SVVideo>)arg1;

@end
