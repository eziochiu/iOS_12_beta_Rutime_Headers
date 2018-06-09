/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLitePropertyComparisonPredicate : HDSQLitePredicate <NSCopying> {
    long long  _comparisonType;
    NSString * _lhObjectPropertyName;
    NSString * _rhObjectPropertyName;
}

@property (nonatomic, readonly) long long comparisonType;
@property (nonatomic, readonly) NSString *lhObjectPropertyName;
@property (nonatomic, readonly) NSString *rhObjectPropertyName;

+ (id)predicateWithLeftHandObjectPropertyName:(id)arg1 rightHandObjectPropertyName:(id)arg2 comparisonType:(long long)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_comparisonOperator;
- (long long)comparisonType;
- (id)description;
- (id)lhObjectPropertyName;
- (id)rhObjectPropertyName;

@end