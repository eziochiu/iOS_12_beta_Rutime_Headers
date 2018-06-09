/* made by EzioChiu.
 */

@protocol _DKCoreDataStorageDelegate

@required

- (bool)coreDataStorage:(_DKCoreDataStorage *)arg1 didAutoMigratePersistentStore:(NSPersistentStore *)arg2 toManagedObjectModel:(NSManagedObjectModel *)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5;
- (NSString *)coreDataStorage:(_DKCoreDataStorage *)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;
- (bool)coreDataStorage:(_DKCoreDataStorage *)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;

@end
