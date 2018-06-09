/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSourceChange : NSObject {
    NSDictionary * _assetCollectionChangeDetails;
    NSDictionary * _assetCollectionToSectionCache;
    NSArray * _changedIndexPaths;
    NSIndexSet * _changedSections;
    bool  _changesAreNoOp;
    PHFetchResultChangeDetails * _collectionListChangeDetails;
    NSArray * _contentChangedIndexPaths;
    NSArray * _deletedIndexPaths;
    NSIndexSet * _deletedSections;
    NSArray * _favoriteChangedIndexPaths;
    NSArray * _insertedIndexPaths;
    NSIndexSet * _insertedSections;
    PHChange * _originatingPhotoLibraryChange;
    bool  _prepared;
    long long  _previousCollectionsCount;
    PXSectionedDataSourceChangeDetails * _sectionedDataSourceChangeDetails;
    NSIndexSet * _sectionsWithKeyAssetChanges;
}

@property (readonly, copy) NSArray *changedIndexPaths;
@property (readonly, copy) NSIndexSet *changedSections;
@property (readonly) bool changesAreNoOp;
@property (readonly, copy) NSArray *contentChangedIndexPaths;
@property (readonly, copy) NSArray *deletedIndexPaths;
@property (readonly, copy) NSIndexSet *deletedSections;
@property (readonly, copy) NSArray *favoriteChangedIndexPaths;
@property (readonly) bool hasIncrementalChanges;
@property (readonly, copy) NSArray *insertedIndexPaths;
@property (readonly, copy) NSIndexSet *insertedSections;
@property (readonly) PHChange *originatingPhotoLibraryChange;
@property (readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails;
@property (nonatomic, readonly) NSIndexSet *sectionsWithKeyAssetChanges;

- (void).cxx_destruct;
- (void)_prepareIncrementalDetails;
- (bool)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (bool)affectsSectionsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)changedIndexPaths;
- (id)changedSections;
- (bool)changesAreNoOp;
- (id)contentChangedIndexPaths;
- (id)deletedIndexPaths;
- (id)deletedSections;
- (id)description;
- (id)favoriteChangedIndexPaths;
- (bool)hasIncrementalChanges;
- (id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg1;
- (id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg1;
- (id)initWithFromIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2;
- (id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 sectionsWithKeyAssetChanges:(id)arg3 previousCollectionsCount:(long long)arg4 assetCollectionToSectionCache:(id)arg5 originatingPhotoLibraryChange:(id)arg6 fromIdentifier:(unsigned long long)arg7 toIdentifier:(unsigned long long)arg8;
- (id)insertedIndexPaths;
- (id)insertedSections;
- (id)originatingPhotoLibraryChange;
- (void)prepareIfNeeded;
- (id)sectionedDataSourceChangeDetails;
- (id)sectionsWithKeyAssetChanges;

@end
