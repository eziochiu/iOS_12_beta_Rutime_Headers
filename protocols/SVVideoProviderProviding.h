/* made by EzioChiu.
 */

@protocol SVVideoProviderProviding <NSObject>

@required

- (<SVVideoAdProviding> *)videoAdProviderForVideo:(id <SVVideo>)arg1;
- (<SVVideoProviding> *)videoProviderForVideo:(id <SVVideo>)arg1;

@end
