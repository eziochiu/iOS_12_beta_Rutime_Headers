/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver> {
    PXPhotosDataSource * _photosDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPhotosDataSource *photosDataSource;
@property (readonly) Class superclass;

+ (id)dataSourceManagerWithAsset:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPhotosDataSource:(id)arg1;
- (id)photosDataSource;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (id)photosDataSourceInterestingAssetReferences:(id)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2;

@end
