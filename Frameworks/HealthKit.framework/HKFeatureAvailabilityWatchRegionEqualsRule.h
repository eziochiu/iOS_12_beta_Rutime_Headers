/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFeatureAvailabilityWatchRegionEqualsRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule> {
    NSString * _regionCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *regionCode;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (bool)evaluate;
- (void)processUserInfo:(id)arg1;
- (id)regionCode;
- (void)setRegionCode:(id)arg1;

@end
