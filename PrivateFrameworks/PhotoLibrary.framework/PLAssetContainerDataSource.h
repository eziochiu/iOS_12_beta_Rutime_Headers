/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAssetContainerDataSource : NSObject <PHAssetCollectionDataSource> {
    unsigned long long  _allAssetsCount;
    PHFetchResult * _assetCollectionsFetchResult;
    NSMutableDictionary * _assetsFetchResultByAssetCollection;
    bool  _cachedValuesNeedUpdate;
    unsigned long long * _containerCounts;
    unsigned long long  _lastAssetCollectionIndex;
}

@property (nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned long long)arg1 wrap:(bool)arg2;
- (unsigned long long)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned long long)arg1 wrap:(bool)arg2;
- (void)_updateCachedCount:(unsigned long long)arg1 forContainerAtContainerIndex:(unsigned long long)arg2;
- (void)_updateCachedValues;
- (unsigned long long)allAssetsCount;
- (id)assetAtGlobalIndex:(unsigned long long)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetContainerAtIndex:(unsigned long long)arg1;
- (id)assetContainerForAsset:(id)arg1;
- (id)assetContainerForAssetGlobalIndex:(unsigned long long)arg1;
- (unsigned long long)assetCountForContainer:(id)arg1;
- (unsigned long long)assetCountForContainerAtIndex:(unsigned long long)arg1;
- (id)assetInAssetContainer:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)assetWithObjectID:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (id)assetsInAssetCollectionAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3;
- (unsigned long long)decrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3;
- (id)description;
- (id)findNearestIndexPath:(id)arg1 preferNext:(bool)arg2;
- (id)firstAssetIndexPath;
- (unsigned long long)globalIndexForIndexPath:(id)arg1;
- (unsigned long long)globalIndexOfAsset:(id)arg1;
- (bool)hasAssetAtIndexPath:(id)arg1;
- (id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3;
- (unsigned long long)incrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3;
- (unsigned long long)indexOfContainer:(id)arg1;
- (unsigned long long)indexOffsetForAssetContainerAtAssetIndex:(unsigned long long)arg1;
- (id)indexPathForGlobalIndex:(unsigned long long)arg1;
- (id)indexPathOfAsset:(id)arg1;
- (id)initWithAssetCollectionsFetchResult:(id)arg1 collectionsAssetsFetchResults:(id)arg2;
- (id)lastAssetIndexPath;
- (id)newAssetsFetchResults;
- (id)pl_fetchAllAssets;
- (void)viewControllerPhotoLibraryDidChange:(id)arg1;

@end
