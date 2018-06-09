/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDatabase : NSObject {
    NSManagedObjectContext * _context;
    id  _contextDidSaveNotificationObserver;
    NSString * _path;
    NSPersistentStore * _store;
}

@property (nonatomic) long long keychainVersion;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) long long version;

+ (bool)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id*)arg4;
+ (struct __CFString { }*)_copyRootPath;
+ (bool)_isUnrecoverableDatabaseError:(id)arg1;
+ (id)_managedObjectModel;
+ (id)_optionsForOpeningPersistentStore;
+ (void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
+ (void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2;
+ (void)_resetPeristentStoreCoordinator;
+ (id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1;
+ (id)defaultPath;

- (void).cxx_destruct;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (bool)_createLocalBackupCopy:(id*)arg1;
- (bool)_databaseFileExists;
- (void)_handleManagedObjectContextDidSaveNotification:(id)arg1;
- (id)_localBackupDirectoryPath;
- (id)_localBackupDirectoryURL;
- (id)_localBackupStorePath;
- (void)_setupManagedObjectContext;
- (id)_store;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (void)dealloc;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;
- (id)initWithTimeMachineHomeFolderPath:(id)arg1;
- (long long)keychainVersion;
- (id)managedObjectContext;
- (id)managedObjectIDForURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (id)path;
- (bool)saveWithError:(id*)arg1;
- (bool)saveWithError:(id*)arg1 rollbackOnFailure:(bool)arg2;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)setKeychainVersion:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
