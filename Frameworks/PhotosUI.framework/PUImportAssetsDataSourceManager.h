/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportAssetsDataSourceManager : PXAssetsDataSourceManager {
    NSMutableArray * _allAssetCollections;
    NSMutableDictionary * _allAssetCollectionsById;
    bool  _alreadyImportedItemsSelectable;
    <PUImportAssetsDataSourceManagerDelegate> * _delegate;
    NSArray * _filteredAssetCollections;
    NSDictionary * _filteredAssetCollectionsById;
    long long  _lastAllItemsThumbnailingIndex;
    long long  _maxAlreadyImportedItems;
    NSObject<OS_dispatch_queue> * _modelQueue;
    bool  _needsFilterUpdate;
    bool  _showAlreadyImportedItems;
    bool  _showNotYetImportedItems;
    PUImportAssetsDataSource * _unfilteredDataSource;
    NSSet * _visibleImportAssetIdentifiers;
}

@property (nonatomic, retain) NSMutableArray *allAssetCollections;
@property (nonatomic, retain) NSMutableDictionary *allAssetCollectionsById;
@property (nonatomic) bool alreadyImportedItemsSelectable;
@property (nonatomic, readonly) PUImportAssetsDataSource *dataSource;
@property (nonatomic) <PUImportAssetsDataSourceManagerDelegate> *delegate;
@property (nonatomic, copy) NSArray *filteredAssetCollections;
@property (nonatomic, copy) NSDictionary *filteredAssetCollectionsById;
@property (nonatomic) long long lastAllItemsThumbnailingIndex;
@property (nonatomic) long long maxAlreadyImportedItems;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *modelQueue;
@property (nonatomic) bool needsFilterUpdate;
@property (nonatomic) bool showAlreadyImportedItems;
@property (nonatomic) bool showNotYetImportedItems;
@property (nonatomic, readonly) PUImportAssetCollection *unfilteredAlreadyImportedAssetCollection;
@property (nonatomic, retain) PUImportAssetsDataSource *unfilteredDataSource;
@property (nonatomic, copy) NSSet *visibleImportAssetIdentifiers;

+ (void)addModels:(id)arg1 toAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
+ (bool)assetCollectionsArray:(id)arg1 isEqualToAssetCollectionsArray:(id)arg2;
+ (void)copyFromAssetCollections:(id)arg1 toAssetCollections:(id*)arg2 assetCollectionsById:(id*)arg3;
+ (void)removeModels:(id)arg1 fromAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
+ (void)sortAssetCollectionsInArray:(id)arg1;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (id)allAssetCollections;
- (id)allAssetCollectionsById;
- (bool)alreadyImportedItemsSelectable;
- (long long)countOfAlreadyImportedAssetCollectionInCollectionsMap:(id)arg1;
- (long long)countOfUnfilteredAlreadyImportedAssetCollection;
- (id)createInitialDataSource;
- (id)delegate;
- (id)dequeueNextThumbnailWorkItem;
- (id)existingModelsFromModels:(id)arg1 inAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
- (id)filteredAssetCollections;
- (id)filteredAssetCollectionsById;
- (id)filteredModelsFromModels:(id)arg1 inAssetCollections:(id)arg2 assetCollectionsById:(id)arg3;
- (id)initWithAssetsFromDataSourceManager:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (long long)lastAllItemsThumbnailingIndex;
- (long long)maxAlreadyImportedItems;
- (id)modelQueue;
- (void)modifyAssetCollectionsWithBlock:(id /* block */)arg1;
- (bool)needsFilterUpdate;
- (void)pruneEmptyAssetCollectionsInCollections:(id)arg1 collectionsById:(id)arg2;
- (void)rebuildAlreadyImportedAssetCollectionInCollections:(id)arg1 collectionsById:(id)arg2;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)removeAssets:(id)arg1;
- (void)setAllAssetCollections:(id)arg1;
- (void)setAllAssetCollectionsById:(id)arg1;
- (void)setAlreadyImportedItemsSelectable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilteredAssetCollections:(id)arg1;
- (void)setFilteredAssetCollectionsById:(id)arg1;
- (void)setLastAllItemsThumbnailingIndex:(long long)arg1;
- (void)setMaxAlreadyImportedItems:(long long)arg1;
- (void)setModelQueue:(id)arg1;
- (void)setNeedsFilterUpdate;
- (void)setNeedsFilterUpdate:(bool)arg1;
- (void)setShowAlreadyImportedItems:(bool)arg1;
- (void)setShowNotYetImportedItems:(bool)arg1;
- (void)setUnfilteredDataSource:(id)arg1;
- (void)setVisibleImportAssetIdentifiers:(id)arg1;
- (bool)showAlreadyImportedItems;
- (bool)showNotYetImportedItems;
- (id)unfilteredAlreadyImportedAssetCollection;
- (id)unfilteredDataSource;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (void)updateAlreadyImportedSelectability;
- (void)updateFilteredAssetsIfNeeded;
- (id)visibleImportAssetIdentifiers;

@end
