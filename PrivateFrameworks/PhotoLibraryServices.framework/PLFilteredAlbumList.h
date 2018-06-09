/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMapperDataSource, PLIndexMappingCache> {
    NSObject<PLIndexMappingCache> * _derivedAlbumLists;
    NSMutableIndexSet * _filteredIndexes;
    PLIndexMapper * _indexMapper;
    NSMutableOrderedSet * _weak_albums;
    PLManagedAlbumList * backingAlbumList;
    int  filter;
    NSPredicate * predicate;
}

@property (nonatomic, retain) NSMutableOrderedSet *_albums;
@property (nonatomic, readonly, retain) NSString *_prettyDescription;
@property (nonatomic, readonly, retain) NSString *_typeDescription;
@property (nonatomic, readonly) short albumListType;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *albums;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly, copy) id /* block */ albumsSortingComparator;
@property (nonatomic, retain) PLManagedAlbumList *backingAlbumList;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *cachedIndexMapState;
@property (nonatomic, readonly) bool canEditAlbums;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int filter;
@property (nonatomic, readonly, copy) NSIndexSet *filteredIndexes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) PLIndexMapper *indexMapper;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSPredicate *predicate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;

- (void).cxx_destruct;
- (id)_albums;
- (void)_backingContextDidChange:(id)arg1;
- (void)_invalidateFilteredIndexes;
- (id)_prettyDescription;
- (id)_typeDescription;
- (bool)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned long long)albumsCount;
- (id /* block */)albumsSortingComparator;
- (id)backingAlbumList;
- (id)cachedIndexMapState;
- (bool)canEditAlbums;
- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (unsigned long long)countOfFilteredAlbums;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (id)description;
- (void)enumerateDerivedAlbumLists:(id /* block */)arg1;
- (int)filter;
- (id)filteredAlbumsAtIndexes:(id)arg1;
- (id)filteredIndexes;
- (void)getFilteredAlbums:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasAtLeastOneAlbum;
- (id)identifier;
- (unsigned long long)indexInFilteredAlbumsOfObject:(id)arg1;
- (id)indexMapper;
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned long long)arg2;
- (bool)isEmpty;
- (bool)isFolder;
- (id)managedObjectContext;
- (bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (bool)needsReordering;
- (id)objectInFilteredAlbumsAtIndex:(unsigned long long)arg1;
- (id)photoLibrary;
- (id)predicate;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)registerDerivedAlbumList:(struct NSObject { Class x1; }*)arg1;
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)arg1;
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setBackingAlbumList:(id)arg1;
- (void)setFilter:(int)arg1;
- (void)setNeedsReordering;
- (void)setPredicate:(id)arg1;
- (void)set_albums:(id)arg1;
- (bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)unreadAlbumsCount;
- (void)unregisterAllDerivedAlbums;
- (void)updateAlbumsOrderIfNeeded;

@end
