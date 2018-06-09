/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseSchemaManager : NSObject {
    NSMutableSet * _createdDatabaseNames;
    HDDatabaseMigrationTransaction * _transaction;
}

- (void).cxx_destruct;
- (bool)_createSchemaMigrationTableIfNeededForDatabaseName:(id)arg1 error:(id*)arg2;
- (id)_schemaTableNameForDatabaseName:(id)arg1;
- (long long)currentVersionForSchema:(id)arg1 protectionClass:(long long)arg2 error:(id*)arg3;
- (id)initWithTransaction:(id)arg1;
- (bool)setVersion:(long long)arg1 schema:(id)arg2 protectionClass:(long long)arg3 error:(id*)arg4;

@end
