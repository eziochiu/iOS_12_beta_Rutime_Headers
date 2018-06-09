/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetActionManager : NSObject {
    <PUAssetActionManagerDelegate> * _delegate;
}

@property (nonatomic) <PUAssetActionManagerDelegate> *delegate;
@property (nonatomic, readonly) PXSectionedSelectionManager *px_selectionManager;

+ (id /* block */)_unlockDeviceHandler;
+ (id)actionManagerLog;
+ (void)setUnlockDeviceHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_assetsByAssetCollectionForAssetReferences:(id)arg1;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)actionPerformerForSettingFavoriteTo:(bool)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (bool)canPerformAction:(unsigned long long)arg1 onAllAssetReferences:(id)arg2;
- (bool)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)delegate;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (id)px_selectionManager;
- (void)setDelegate:(id)arg1;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;

@end
