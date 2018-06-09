/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMappedObjectStore : NSPersistentStore {
    NSSet * _entitiesToFetch;
    NSPersistentStoreMap * _theMap;
}

+ (id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (void)_addObject:(id)arg1 objectIDMap:(id)arg2;
- (id)_pathFromURI:(id)arg1;
- (id)_rawMetadata__;
- (void)_removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)_setMap:(id)arg1;
- (id)_theMap;
- (void)_updateObject:(id)arg1 objectIDMap:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)executeCountRequest:(id)arg1 withContext:(id)arg2;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2;
- (id)getNewIDForObject:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)metadata;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)save;
- (void)saveDocumentToPath:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
