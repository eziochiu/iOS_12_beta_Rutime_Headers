/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoSelectionEntry : NSObject <NSCopying> {
    PHAssetCollection * _assetCollection;
    PHFetchResult * _fetchResult;
    bool  _hasValidAssetIndexes;
    NSMutableSet * _selectedAssets;
    NSMutableIndexSet * _selectedIndexes;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) NSArray *selectedAssets;
@property (nonatomic, readonly) NSIndexSet *selectedIndexes;

- (void).cxx_destruct;
- (void)_ensureValidAssetIndexes;
- (id)assetCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deselectAssetsAtIndexes:(id)arg1;
- (void)enumerateSelectedAssetsWithBlock:(id /* block */)arg1;
- (id)fetchResult;
- (void)handlePhotoLibraryChange:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 fetchResult:(id)arg2 uniqueSelectedAssets:(id)arg3;
- (void)invalidateAllAssetIndexes;
- (bool)isIndexSelected:(unsigned long long)arg1;
- (void)selectAssetsAtIndexes:(id)arg1;
- (id)selectedAssets;
- (id)selectedIndexes;
- (void)setSelectedAssetsSet:(id)arg1;

@end
