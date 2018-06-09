/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetHidingHelper : NSObject <PXPhotoLibraryUIChangeObserver> {
    PHManualFetchResult * __assetsFetchResults;
    bool  _areAllAssetsHidden;
    bool  _canToogleAssetsVisibility;
    bool  _didCheckAllAssetHidden;
    bool  _didCheckCanToogleAssetsVisibility;
}

@property (setter=_setAssetsFetchResult:, nonatomic, retain) PHManualFetchResult *_assetsFetchResults;
@property (nonatomic, copy) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHiding;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_areAllAssetsHidden;
- (id)_assetsFetchResults;
- (void)_prepareAssetsVisibilityValueIfNeeded;
- (void)_setAssetsFetchResult:(id)arg1;
- (id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(id /* block */)arg1;
- (void)applyHiddenState:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)assets;
- (id)attemptTogglingAssetsVisibilityFromViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 completionHandler:(id /* block */)arg4;
- (bool)canToggleAssetsVisibility;
- (void)dealloc;
- (id)init;
- (bool)isHiding;
- (id)menuItemTitleForTogglingAssetsVisibility;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setAssets:(id)arg1;

@end
