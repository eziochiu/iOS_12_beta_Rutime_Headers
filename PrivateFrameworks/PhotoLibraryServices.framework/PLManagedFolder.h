/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable> {
    bool  _needsFixedOrderKeysComplianceUpdate;
    bool  _needsPersistenceUpdate;
}

@property (nonatomic, readonly, retain) NSString *_prettyDescription;
@property (nonatomic, readonly, retain) NSString *_typeDescription;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly, copy) id /* block */ albumsSortingComparator;
@property (nonatomic, retain) NSOrderedSet *childCollections;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic) bool needsFixedOrderKeysComplianceUpdate;
@property (nonatomic) bool needsPersistenceUpdate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;

+ (id)childKeyForOrdering;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)localizedRecoveredTitle;
+ (id)validKindsForPersistence;

- (id)_prettyDescription;
- (id)_typeDescription;
- (void)addChildCollections:(id)arg1;
- (void)addChildCollectionsObject:(id)arg1;
- (bool)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned long long)albumsCount;
- (id /* block */)albumsSortingComparator;
- (unsigned long long)approximateCount;
- (id)assets;
- (unsigned long long)assetsCount;
- (bool)canEditAlbums;
- (bool)canEditContainers;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)childKeyForOrdering;
- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (unsigned long long)count;
- (id)descriptionOfChildCollectionOrderValues;
- (void)didSave;
- (void)enforceFixedOrderKeyCompliance;
- (int)filter;
- (bool)hasAtLeastOneAlbum;
- (id)identifier;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
- (bool)isEmpty;
- (bool)isValidKindForPersistence;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)mutableAssets;
- (bool)needsFixedOrderKeysComplianceUpdate;
- (bool)needsPersistenceUpdate;
- (bool)needsReordering;
- (void)persistMetadataToFileSystem;
- (unsigned long long)photosCount;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)prepareForDeletion;
- (void)refreshCollections;
- (void)removeChildCollections:(id)arg1;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)removePersistedFileSystemData;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setNeedsFixedOrderKeysComplianceUpdate:(bool)arg1;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (void)setNeedsReordering;
- (unsigned long long)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;
- (unsigned long long)videosCount;
- (void)willSave;

@end
