/* made by EzioChiu.
 */

@protocol FCPersonalizationAggregate <NSObject>

@required

- (double)clicks;
- (double)confidence;
- (unsigned long long)eventCount;
- (NSString *)featureKey;
- (double)impressions;
- (NSDate *)lastModified;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
- (double)powerWithDecayFactor:(double)arg1;
- (double)relativePersonalizationValueWithBaselineAggregate:(id <FCPersonalizationAggregate>)arg1 decayFactor:(double)arg2 baselineClicksMultiplier:(double)arg3;

@end
