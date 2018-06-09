/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseTransaction : NSObject {
    HDDatabaseTransactionContext * _context;
    <HDSQLiteDatabaseProvider> * _databaseProvider;
    bool  _isActive;
    bool  _isOutermostTransactionUnprotected;
    bool  _performingMigration;
    HDSQLiteDatabase * _protectedDatabase;
    HDSQLiteDatabase * _unprotectedDatabase;
}

@property (nonatomic, readonly, copy) HDDatabaseTransactionContext *context;
@property (nonatomic) bool performingMigration;
@property (nonatomic, readonly) HDSQLiteDatabase *protectedDatabase;
@property (nonatomic, readonly) HDSQLiteDatabase *unprotectedDatabase;

- (void).cxx_destruct;
- (id)context;
- (id)databaseForEntity:(id)arg1;
- (id)databaseForEntityClass:(Class)arg1;
- (id)databaseForEntityProtectionClass:(long long)arg1;
- (id)databaseForOptions:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDatabaseProvider:(id)arg1 context:(id)arg2;
- (bool)performWithOptions:(unsigned long long)arg1 error:(id*)arg2 block:(id /* block */)arg3 inaccessibilityHandler:(id /* block */)arg4;
- (bool)performingMigration;
- (id)protectedDatabase;
- (void)setPerformingMigration:(bool)arg1;
- (id)unprotectedDatabase;

@end
