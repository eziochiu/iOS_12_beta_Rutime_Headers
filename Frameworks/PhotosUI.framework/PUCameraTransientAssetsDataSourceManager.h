/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraTransientAssetsDataSourceManager : PUAssetsDataSourceManager <PUTransientDataSourceChangeObserver> {
    <PUDisplayAssetCollection> * __containingAssetCollection;
    <PUTransientDataSource> * __transientDataSource;
}

@property (nonatomic, readonly) <PUDisplayAssetCollection> *_containingAssetCollection;
@property (nonatomic, readonly) <PUTransientDataSource> *_transientDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_containingAssetCollection;
- (id)_transientDataSource;
- (void)_updateWithTransientDataSource:(id)arg1;
- (id)init;
- (id)initWithTransientDataSource:(id)arg1;
- (void)transientDataSourceDidChange:(id)arg1;

@end
