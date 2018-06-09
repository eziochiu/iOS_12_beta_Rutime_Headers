/* made by EzioChiu.
 */

@protocol SVVideoMetadataProviderFactory <NSObject>

@required

- (<SVVideoMetadataProviding> *)createMetadataProviderForVideo:(id <SVVideo>)arg1;

@end
