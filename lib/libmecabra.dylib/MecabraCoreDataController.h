/* made by EzioChiu
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraCoreDataController : NSObject {
    NSEntityDescription * _entityDescription;
    NSURL * _localURL;
    NSString * _localURLLastPartOfName;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSURL * _storeURL;
    NSArray * _storedElementsForMerge;
    NSString * _type;
}

@property (nonatomic, readonly) NSEntityDescription *entityDescription;
@property (nonatomic, readonly) NSURL *localInfoPlistURL;
@property (nonatomic, readonly) NSURL *localStoreURL;
@property (nonatomic, retain) NSURL *localURL;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) NSURL *storeURL;
@property (nonatomic, retain) NSArray *storedElementsForMerge;
@property (nonatomic, retain) NSString *type;

+ (void)resetDatabaseWithType:(id)arg1 URL:(id)arg2;

- (void)addEntry:(id)arg1;
- (void)clearStoredMergeEntries;
- (id)coreDataUbiquityFolderURLforStore:(id)arg1;
- (id)databaseName;
- (id)databasePropertyForKey:(id)arg1;
- (void)dealloc;
- (void)deleteAllElements;
- (void)deleteAllMatchingEntries:(id)arg1;
- (void)deleteEntry:(id)arg1;
- (bool)dictionaryEntryHasAllRequiredKeys:(id)arg1;
- (id)dictionaryValueFromManagedObject:(id)arg1;
- (id)dictionaryValuesFromManagedObjects:(id)arg1;
- (id)entityDescription;
- (id)entityDescriptionForContext:(id)arg1;
- (id)entriesFromStrippedStoreURL:(id)arg1;
- (id)entriesToMerge;
- (id)initWithType:(id)arg1 URL:(id)arg2;
- (bool)isLogging;
- (id)localInfoPlistURL;
- (id)localStoreURL;
- (id)localURL;
- (id)locallyPresentUbiquitousFiles;
- (void)logEntry:(id)arg1 operationType:(id)arg2 extraInformation:(id)arg3;
- (void)logMessage:(id)arg1;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)newPersistentStoreWithURL:(id)arg1 ubiquityContainerIdentifier:(id)arg2 managedObjectModel:(id)arg3;
- (id)persistentStoreCoordinator;
- (void)prepareURLForDatabaseFile:(id)arg1;
- (id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned long long)arg4 identifierKey:(id)arg5;
- (void)save;
- (id)searchResultsWithValueDictionary:(id)arg1;
- (id)searchResultsWithValueDictionary:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3;
- (id)searchResultsWithValueDictionary:(id)arg1 sortDescriptors:(id)arg2;
- (void)sendRemoteNotification;
- (void)setDatabaseProperty:(id)arg1 forKey:(id)arg2;
- (void)setLocalURL:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setManagedObjectModel:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setStoredElementsForMerge:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3;
- (void)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2;
- (bool)shouldSyncDatabase;
- (id)storeURL;
- (id)storedElementsForMerge;
- (bool)stripUbiquitousInformationFromStore:(id)arg1;
- (id)type;

@end
