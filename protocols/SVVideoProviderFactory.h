/* made by EzioChiu.
 */

@protocol SVVideoProviderFactory <NSObject>

@required

- (<SVVideoProviding> *)createVideoProviderForVideo:(id <SVVideo>)arg1;

@end
