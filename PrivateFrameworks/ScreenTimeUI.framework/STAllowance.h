/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAllowance : NSObject <NSCopying> {
    unsigned long long  _allowanceType;
    unsigned long long  _behaviorOption;
    NSArray * _budgetedIdentifiers;
    NSArray * _iCloudPredicateUserDSIDs;
    NSString * _identifier;
    NSDateComponents * _time;
    NSDictionary * _timeByDay;
}

@property (nonatomic) unsigned long long allowanceType;
@property (nonatomic) unsigned long long behaviorOption;
@property (nonatomic, copy) NSArray *budgetedIdentifiers;
@property (nonatomic, readonly, copy) NSArray *iCloudPredicateUserDSIDs;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSDateComponents *time;
@property (nonatomic, copy) NSDictionary *timeByDay;

+ (unsigned long long)allowanceTypeForUsageItemType:(unsigned long long)arg1;
+ (id)displayNameForAllowance:(id)arg1;

- (void).cxx_destruct;
- (void)_stAllowanceInitByParsingFamilyBudgetAllPredicate:(id)arg1;
- (void)_stAllowanceInitByParsingPersonalBudgetPredicate:(id)arg1;
- (unsigned long long)allowanceType;
- (unsigned long long)behaviorOption;
- (id)budgetedIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultBudgetTime;
- (id)defaultTimeByDay;
- (id)iCloudPredicateUserDSIDs;
- (id)identifier;
- (id)init;
- (id)initWithBudget:(id)arg1;
- (void)setAllowanceType:(unsigned long long)arg1;
- (void)setBehaviorOption:(unsigned long long)arg1;
- (void)setBudgetedIdentifiers:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeByDay:(id)arg1;
- (id)time;
- (id)timeByDay;

@end
