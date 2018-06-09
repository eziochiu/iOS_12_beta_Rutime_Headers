/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStore : NSIncrementalStore <NSSQLModelProvider> {
    NSGenerationalRowCache * _cache;
    NSXPCStoreConnectionManager * _connectionManager;
    NSSQLCore * _core;
    NSString * _fileBackedFuturesDirectory;
    NSDictionary * _metadata;
    NSSQLModel * _model;
    NSXPCStoreNotificationObserver * _observer;
    NSString * _remoteStoreChangedNotificationName;
    NSString * _sanityCheckToken;
    int  _stateLock;
}

@property (readonly, copy) NSString *remoteStoreChangedNotificationName;

+ (bool)_isOnExtendedTimeout;
+ (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
+ (int)debugDefault;
+ (void)initialize;
+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
+ (void)setDebugDefault:(int)arg1;

- (id)_cachedRowForObjectWithID:(id)arg1 generation:(id)arg2;
- (id)_cachedRowForRelationship:(id)arg1 onObjectWithID:(id)arg2 generation:(id)arg3;
- (void)_clearCachedRowForObjectWithID:(id)arg1 generation:(id)arg2;
- (void)_commitChangesForRequestContext:(id)arg1;
- (id)_createAndCacheRowForObjectWithID:(id)arg1 propertyValues:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (id)_executeSaveRequestForContext:(id)arg1 error:(id*)arg2;
- (void)_freeQueryGenerationWithIdentifier:(id)arg1;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (Class)_objectIDClass;
- (id)_rawMetadata__;
- (id)_sanityCheckToken;
- (void)_setMetadata:(id)arg1 includeVersioning:(bool)arg2;
- (void)_setSanityCheckToken:(id)arg1;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (id)ancillaryModels;
- (id)ancillarySQLModels;
- (void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 generation:(id)arg4;
- (void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 withTimestamp:(double)arg4 generation:(id)arg5;
- (void)cacheFetchedRows:(id)arg1 forManagedObjects:(id)arg2 generation:(id)arg3;
- (id)connectionManager;
- (id)currentChangeToken;
- (id)currentQueryGeneration;
- (void)dealloc;
- (void)decodePrefetchArray:(id)arg1 forSources:(id)arg2 context:(id)arg3;
- (void)decodePrefetchResult:(id)arg1 forSources:(id)arg2 context:(id)arg3;
- (id)decodeResults:(id)arg1 forFaultOfObjectWithID:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (id)decodeResults:(id)arg1 forFetch:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (id)decodeValue:(id)arg1 forRelationship:(id)arg2 onSource:(id)arg3 inContext:(id)arg4 error:(id*)arg5;
- (void)disconnect;
- (id)entityForEntityDescription:(id)arg1;
- (id)executeBatchDeleteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executePersistentHistoryRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executePullChangesRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeSaveRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)fileBackedFuturesDirectory;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)load:(id*)arg1;
- (bool)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)metadata;
- (id)model;
- (struct _NSScalarObjectID { Class x1; }*)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)objectIDFactoryForEntity:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)remoteStoreChangedNotificationName;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (id)sendMessage:(id)arg1 fromContext:(id)arg2 interrupts:(unsigned long long*)arg3 error:(id*)arg4;
- (id)serviceName;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSQLCore:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setupRemoteStoreObserver;
- (id)sqlCore;
- (bool)supportsConcurrentRequestHandling;
- (bool)supportsGenerationalQuerying;
- (id)type;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

@end
