/* made by EzioChiu.
 */

@protocol FCReadonlyPersonalizationAggregateStore <NSObject>

@required

- (NSDictionary *)aggregatesForFeatures:(NSArray *)arg1;
- (<FCPersonalizationAggregate> *)baselineAggregateWithConfigurableValues:(FCPersonalizationTreatment *)arg1;
- (void)processTodayPersonalizationUpdates:(NSArray *)arg1 withConfigurableValues:(FCPersonalizationTreatment *)arg2;

@end
