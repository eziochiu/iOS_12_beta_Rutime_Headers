/* made by EzioChiu.
 */

@protocol SVVideoURLProviderFactory <NSObject>

@required

- (<SVVideoURLProviding> *)createURLProviderForVideo:(id <SVVideo>)arg1;

@end
