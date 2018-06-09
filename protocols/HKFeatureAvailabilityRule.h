/* made by EzioChiu.
 */

@protocol HKFeatureAvailabilityRule <NSObject>

@required

+ (NSString *)ruleIdentifier;

- (bool)evaluate;
- (id)initWithRawValue:(NSDictionary *)arg1 dataSource:(id <HKFeatureAvailabilityDataSource>)arg2;

@end
