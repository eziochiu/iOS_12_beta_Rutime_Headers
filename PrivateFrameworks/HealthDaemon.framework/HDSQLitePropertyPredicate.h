/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying> {
    NSString * _property;
}

@property (nonatomic, readonly) NSString *property;

- (void).cxx_destruct;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isCompatibleWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)property;

@end
