/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseMigrationTransaction : NSObject {
    HDSQLiteDatabase * _protectedDatabase;
    HDSQLiteDatabase * _unprotectedDatabase;
}

@property (nonatomic, readonly) bool isProtectedMigration;
@property (nonatomic, readonly) HDSQLiteDatabase *protectedDatabase;
@property (nonatomic, readonly) HDSQLiteDatabase *unprotectedDatabase;

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1;

- (void).cxx_destruct;
- (id)databaseNameForProtectionClass:(long long)arg1;
- (id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2;
- (bool)isProtectedMigration;
- (id)protectedDatabase;
- (id)unprotectedDatabase;

@end
