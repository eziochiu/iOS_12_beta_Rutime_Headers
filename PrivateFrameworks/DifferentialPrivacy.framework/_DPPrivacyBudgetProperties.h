/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPPrivacyBudgetProperties : NSObject {
    NSNumber * _interval;
    NSNumber * _intervalBudgetValue;
    NSString * _name;
}

@property (nonatomic, retain) NSNumber *interval;
@property (nonatomic, retain) NSNumber *intervalBudgetValue;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)allBudgetPropertiesKeys;
+ (id)budgetMaintenanceSchedule;
+ (id)budgetPropertiesForKey:(id)arg1;
+ (id)budgetPropertiesFromDictionary:(id)arg1;
+ (id)budgetPropertiesFromFile:(id)arg1;
+ (void)initializeAllBudgetProperties;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)interval;
- (id)intervalBudgetValue;
- (id)name;
- (void)setInterval:(id)arg1;
- (void)setIntervalBudgetValue:(id)arg1;

@end
