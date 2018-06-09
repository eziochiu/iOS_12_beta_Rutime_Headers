/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFeatureAvailabilityRuleSet : NSObject {
    NSMutableDictionary * _conditions;
}

@property (nonatomic, retain) NSMutableDictionary *conditions;

- (void).cxx_destruct;
- (void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2;
- (id)conditions;
- (id)evaluateAll;
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;
- (void)setConditions:(id)arg1;

@end
