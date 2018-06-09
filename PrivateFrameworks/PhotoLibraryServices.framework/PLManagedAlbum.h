/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAlbum : _PLManagedAlbum <PLCloudDeletable, PLSearchableAssetCollection, PLUserEditableAlbumProtocol> {
    bool  _albumShouldBeAutomaticallyDeleted;
    bool  _needsPersistenceUpdate;
}

@property (nonatomic) bool albumShouldBeAutomaticallyDeleted;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, retain) NSSet *assetOrders;
@property (nonatomic, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly) bool canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSURL *groupURL;
@property (nonatomic) bool hasUnseenContentBoolValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, readonly) bool isCameraAlbum;
@property (nonatomic, readonly) bool isCloudSharedAlbum;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) bool isInTrash;
@property (nonatomic, readonly) bool isLibrary;
@property (nonatomic, readonly) bool isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) bool isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) bool isPanoramasAlbum;
@property (nonatomic, readonly) bool isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) bool isPhotoStreamAlbum;
@property (nonatomic, readonly) bool isRecentlyAddedAlbum;
@property (nonatomic, readonly) bool isStandInAlbum;
@property (nonatomic, readonly) bool isUserLibraryAlbum;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly) NSDate *keyAssetCreationDate;
@property (nonatomic, readonly) NSString *keyAssetUUID;
@property (nonatomic, readonly, retain) NSNumber *kind;
@property (nonatomic, readonly) int kindValue;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *mutableAssets;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) bool needsPersistenceUpdate;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly, retain) UIImage *posterImage;
@property (nonatomic, readonly) NSDate *searchableEndDate;
@property (nonatomic, readonly) NSDate *searchableStartDate;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) bool shouldDeleteWhenEmpty;
@property (nonatomic, retain) NSDictionary *slideshowSettings;
@property (nonatomic, readonly, copy) id /* block */ sortingComparator;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *userEditableAssets;
@property (nonatomic, readonly, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long videosCount;

+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)assetOrderByAbumUUIDs;
+ (id)baseSearchIndexPredicate;
+ (id)childKeyForOrdering;
+ (void)clearAssetOrderByAbumUUIDs;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)pathToAssetAlbumOrderStructure;
+ (id)searchIndexAllowedPredicate;
+ (id)validKindsForPersistence;

- (unsigned long long)_albumStandInCount;
- (id)_assetOrderByAssetUUID;
- (id)_expectedKeyAssets:(id)arg1;
- (id)_keysToBeObserved;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (bool)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (void)_updateKeyAssetsIfNeeded:(id)arg1;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (bool)albumShouldBeAutomaticallyDeleted;
- (unsigned long long)approximateCount;
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)childKeyForOrdering;
- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (unsigned long long)countOfInternalUserEditableAssets;
- (id)descriptionOfAssetOrderValues;
- (void)didSave;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)getInternalUserEditableAssets:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (bool)isEmpty;
- (bool)isValidKindForPersistence;
- (id)keyAssetCreationDate;
- (id)keyAssetUUID;
- (id)mutableAssets;
- (bool)needsPersistenceUpdate;
- (unsigned long long)numberOfAssets;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)persistMetadataToFileSystem;
- (unsigned long long)photosCount;
- (void)prepareForDeletion;
- (void)recalculateCachedCounts;
- (void)refreshAssets;
- (void)registerForChanges;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)removePersistedFileSystemData;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (unsigned long long)searchIndexCategory;
- (id)searchIndexContents;
- (id)searchableEndDate;
- (id)searchableStartDate;
- (void)setAlbumShouldBeAutomaticallyDeleted:(bool)arg1;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (id)subtitle;
- (bool)supportsAssetOrderKeys;
- (void)unregisterForChanges;
- (void)updateKeyAssetsIfNeeded;
- (id)userEditableAssets;
- (unsigned long long)videosCount;
- (void)willSave;

@end
