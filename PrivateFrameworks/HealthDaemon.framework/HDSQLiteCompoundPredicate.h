/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <NSCopying> {
    NSString * _combinationOperation;
    NSArray * _predicates;
    bool  _trueIfNoPredicates;
    bool  _unary;
}

@property (nonatomic, readonly) NSArray *predicates;

+ (id)negatedPredicate:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isCompatibleWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicates;

@end
