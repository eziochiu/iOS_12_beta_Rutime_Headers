/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingTransitionContext : NSObject {
    <PHAssetCollectionDataSource> * _assetCollectionsDataSource;
    NSIndexPath * _keyAssetIndexPath;
}

@property (nonatomic, retain) <PHAssetCollectionDataSource> *assetCollectionsDataSource;
@property (nonatomic, retain) NSIndexPath *keyAssetIndexPath;

- (void).cxx_destruct;
- (id)assetCollectionsDataSource;
- (id)keyAssetIndexPath;
- (void)setAssetCollectionsDataSource:(id)arg1;
- (void)setKeyAssetIndexPath:(id)arg1;

@end
