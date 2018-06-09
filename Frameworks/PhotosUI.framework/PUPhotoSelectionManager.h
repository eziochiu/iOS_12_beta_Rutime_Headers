/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoSelectionManager : NSObject <NSCopying> {
    NSHashTable * _changeObservers;
    <PHAssetCollectionDataSource> * _dataSource;
    long long  _options;
    long long  _selectionChangeCount;
    NSMapTable * _selectionEntriesByAssetCollection;
    NSMutableSet * _uniqueAssetSelection;
}

@property (nonatomic) <PHAssetCollectionDataSource> *dataSource;
@property (nonatomic, readonly) bool isAnyAssetSelected;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) NSOrderedSet *orderedSelectedAssets;
@property (nonatomic, readonly) NSSet *selectedAssets;
@property (nonatomic, readonly) NSDictionary *selectedAssetsByAssetCollection;
@property (nonatomic, readonly) PXSelectionSnapshot *selectionSnapshot;

- (void).cxx_destruct;
- (void)_beginSelectionChange;
- (void)_endSelectionChange;
- (id)_selectionEntryForAssetCollection:(id)arg1 createIfNeeded:(bool)arg2;
- (bool)_shouldUniqueAssets;
- (bool)areAllAssetsSelectedInAssetCollection:(id)arg1;
- (bool)areAllAssetsSelectedInAssetCollections:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (void)deselectAllAssets;
- (void)deselectAllAssetsInAssetCollections:(id)arg1;
- (void)deselectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (void)deselectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2;
- (void)enumerateSelectedAssetsWithAssetCollectionOrdering:(id)arg1 block:(id /* block */)arg2;
- (void)handlePhotoLibraryChange:(id)arg1;
- (id)init;
- (id)initWithOptions:(long long)arg1;
- (void)invalidateAllAssetIndexes;
- (bool)isAnyAssetSelected;
- (bool)isAnyAssetSelectedInAssetCollection:(id)arg1;
- (bool)isAnyAssetSelectedInAssetCollections:(id)arg1;
- (bool)isAssetAtIndexSelected:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (id)localizedSelectionString;
- (long long)options;
- (id)orderedSelectedAssets;
- (void)registerChangeObserver:(id)arg1;
- (void)selectAllAssetsInAssetCollections:(id)arg1;
- (void)selectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2;
- (void)selectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2;
- (id)selectedAssetIndexesWithAssetCollectionOrdering:(id)arg1;
- (id)selectedAssets;
- (id)selectedAssetsByAssetCollection;
- (id)selectedAssetsWithAssetCollectionOrdering:(id)arg1;
- (id)selectionSnapshot;
- (void)setDataSource:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end
