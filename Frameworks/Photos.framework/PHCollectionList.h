/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollectionList : PHCollection <PXDisplayCollectionList> {
    id /* block */  _childCollectionsSortingComparator;
    long long  _collectionListSubtype;
    long long  _collectionListType;
    NSArray * _collections;
    NSDate * _endDate;
    unsigned long long  _estimatedChildCollectionCount;
    NSArray * _localizedLocationNames;
    NSString * _localizedTitle;
    int  _plAlbumKind;
    PHQuery * _query;
    NSDate * _startDate;
    NSString * _transientIdentifier;
    unsigned long long  _unreadAssetCollectionsCount;
}

@property (nonatomic, readonly, copy) id /* block */ childCollectionsSortingComparator;
@property (nonatomic, readonly) long long collectionListSubtype;
@property (nonatomic, readonly) long long collectionListType;
@property (nonatomic, readonly) NSArray *collections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedChildCollectionCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keyCollectionsAtEnd;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) bool px_isAllPhotosSmartAlbum;
@property (nonatomic, readonly) bool px_isFavoriteMemoriesSmartFolder;
@property (nonatomic, readonly) bool px_isFavoritesSmartAlbum;
@property (nonatomic, readonly) bool px_isFolder;
@property (nonatomic, readonly) bool px_isHiddenSmartAlbum;
@property (nonatomic, readonly) bool px_isImportedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedEventsFolder;
@property (nonatomic, readonly) bool px_isMacSyncedFacesFolder;
@property (nonatomic, readonly) bool px_isMediaTypeSmartAlbum;
@property (nonatomic, readonly) bool px_isMemoriesVirtualCollection;
@property (nonatomic, readonly) bool px_isMemoriesVirtualCollectionList;
@property (nonatomic, readonly) bool px_isMyPhotoStreamAlbum;
@property (nonatomic, readonly) bool px_isOwnedSharedAlbum;
@property (nonatomic, readonly) bool px_isPeopleVirtualCollection;
@property (nonatomic, readonly) bool px_isPeopleVirtualCollectionList;
@property (nonatomic, readonly) bool px_isPlacesVirtualCollection;
@property (nonatomic, readonly) bool px_isRecentlyAddedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentlyDeletedSmartAlbum;
@property (nonatomic, readonly) bool px_isSharedAlbum;
@property (nonatomic, readonly) bool px_isSmartAlbum;
@property (nonatomic, readonly) bool px_isSmartFolder;
@property (nonatomic, readonly) bool px_isStandInAlbum;
@property (nonatomic, readonly) bool px_isVirtualCollection;
@property (nonatomic, readonly) PHQuery *query;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transientIdentifier;
@property (nonatomic, readonly) unsigned long long unreadAssetCollectionsCount;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3;
+ (id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (bool)canContainCollections;
- (bool)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (id /* block */)childCollectionsSortingComparator;
- (unsigned long long)collectionFixedOrderPriority;
- (bool)collectionHasFixedOrder;
- (long long)collectionListSubtype;
- (long long)collectionListType;
- (id)collections;
- (id)description;
- (id)endDate;
- (unsigned long long)estimatedChildCollectionCount;
- (bool)hasLocationInfo;
- (id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)keyCollectionsAtEnd;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)pl_assetContainerList;
- (id)query;
- (id)startDate;
- (id)transientIdentifier;
- (unsigned long long)unreadAssetCollectionsCount;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_assetCollectionsWithAlbumSubtypes:(id)arg1;
+ (id)px_importHistoryCollectionList;
+ (id)px_mediaTypesCollectionList;
+ (id)px_memoriesVirtualCollectionList;
+ (id)px_otherAlbumsCollectionList;
+ (id)px_peopleVirtualCollectionList;
+ (id)px_rootAlbumCollectionList;
+ (id)px_sharedAlbumsCollectionList;
+ (id)px_testingCollectionListWithCollectionTitles:(id)arg1;
+ (id)px_testingCollectionListWithCollections:(id)arg1 title:(id)arg2;
+ (id)px_testingTransientIdentifier;

- (bool)px_isFavoriteMemoriesSmartFolder;
- (bool)px_isFolder;
- (bool)px_isMacSyncedEventsFolder;
- (bool)px_isMacSyncedFacesFolder;
- (bool)px_isMemoriesVirtualCollection;
- (bool)px_isMemoriesVirtualCollectionList;
- (bool)px_isPeopleVirtualCollection;
- (bool)px_isPeopleVirtualCollectionList;
- (bool)px_isSmartFolder;
- (bool)px_isUserCreated;

@end
