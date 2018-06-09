/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollection : PHObject <PXDisplayCollection> {
    NSDate * _creationDate;
    bool  _customSortAscending;
    int  _customSortKey;
    unsigned long long  _estimatedPhotosCount;
    unsigned long long  _estimatedVideosCount;
    NSString * _localizedSubtitle;
}

@property (nonatomic, readonly) bool canContainAssets;
@property (nonatomic, readonly) bool canContainCollections;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) bool customSortAscending;
@property (nonatomic, readonly) int customSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long estimatedPhotosCount;
@property (nonatomic, readonly) unsigned long long estimatedVideosCount;
@property (nonatomic, readonly) bool hasLocalizedTitle;
@property (nonatomic, readonly) bool hasLocationInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) bool px_allowsAssetsDrop;
@property (nonatomic, readonly) bool px_allowsSpringLoading;
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
@property (nonatomic, readonly) bool px_isMyPhotoStreamAlbum;
@property (nonatomic, readonly) bool px_isOwnedSharedAlbum;
@property (nonatomic, readonly) bool px_isPeopleVirtualCollection;
@property (nonatomic, readonly) bool px_isPlacesVirtualCollection;
@property (nonatomic, readonly) bool px_isRecentlyAddedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentlyDeletedSmartAlbum;
@property (nonatomic, readonly) bool px_isSharedAlbum;
@property (nonatomic, readonly) bool px_isSmartAlbum;
@property (nonatomic, readonly) bool px_isSmartFolder;
@property (nonatomic, readonly) bool px_isStandInAlbum;
@property (nonatomic, readonly) bool px_isUserCreated;
@property (nonatomic, readonly) bool px_isVirtualCollection;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (bool)canContainAssets;
- (bool)canContainCollections;
- (bool)canPerformEditOperation:(long long)arg1;
- (unsigned long long)collectionFixedOrderPriority;
- (bool)collectionHasFixedOrder;
- (id)creationDate;
- (bool)customSortAscending;
- (int)customSortKey;
- (id)description;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (bool)hasLocalizedTitle;
- (bool)hasLocationInfo;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localizedSubtitle;
- (id)localizedTitle;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_collectionWithNavigationListSystemItem:(long long)arg1;

- (bool)px_allowsAssetsDrop;
- (bool)px_allowsSpringLoading;
- (bool)px_isAllPhotosSmartAlbum;
- (bool)px_isFavoriteMemoriesSmartFolder;
- (bool)px_isFavoritesSmartAlbum;
- (bool)px_isFolder;
- (bool)px_isHiddenSmartAlbum;
- (bool)px_isImportedAlbum;
- (bool)px_isMacSyncedAlbum;
- (bool)px_isMacSyncedEventsFolder;
- (bool)px_isMacSyncedFacesFolder;
- (bool)px_isMediaTypeSmartAlbum;
- (bool)px_isMemoriesVirtualCollection;
- (bool)px_isMyPhotoStreamAlbum;
- (bool)px_isOwnedSharedAlbum;
- (bool)px_isPeopleVirtualCollection;
- (bool)px_isPlacesVirtualCollection;
- (bool)px_isRecentlyAddedSmartAlbum;
- (bool)px_isRecentlyDeletedSmartAlbum;
- (bool)px_isSharedAlbum;
- (bool)px_isSmartAlbum;
- (bool)px_isSmartFolder;
- (bool)px_isStandInAlbum;
- (bool)px_isUserCreated;
- (bool)px_isVirtualCollection;

@end
