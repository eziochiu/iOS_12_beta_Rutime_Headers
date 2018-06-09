/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDatabasePruningOperation : NSObject {
    Class  _entityClass;
    HDSQLitePredicate * _predicate;
}

@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) HDSQLitePredicate *predicate;

- (void).cxx_destruct;
- (Class)entityClass;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2;
- (id)predicate;

@end
