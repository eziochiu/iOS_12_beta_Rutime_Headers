/* made by EzioChiu.
 */

@protocol FCDerivedPersonalizationData <NSObject>

@required

- (<FCPersonalizationAggregate> *)aggregateForFeatureKey:(NSString *)arg1;
- (NSDictionary *)aggregatesForFeatureKeys:(NSArray *)arg1;

@end
