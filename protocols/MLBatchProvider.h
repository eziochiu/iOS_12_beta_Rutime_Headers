/* made by EzioChiu.
 */

@protocol MLBatchProvider

@required

- (long long)count;
- (<MLFeatureProvider> *)featuresAtIndex:(long long)arg1;

@optional

- (<MLFeatureProvider> *)featureProviderAtIndex:(long long)arg1;
- (long long)featureProviderCount;

@end
