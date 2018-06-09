/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociationEntityAssociationPredicate : HDSQLitePredicate {
    long long  _assocationID;
}

+ (id)predicateWithAssociationID:(long long)arg1;

- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;

@end
