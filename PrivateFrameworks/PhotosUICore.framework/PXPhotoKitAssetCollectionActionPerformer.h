/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer

+ (bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createAlertActionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)createBarButtonItemForAssetCollection:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)createPreviewActionForAssetCollection:(id)arg1 withHandler:(id /* block */)arg2;
+ (id)createPreviewActionGroupForAssetCollection:(id)arg1 mutableActionTypeToPreviewActionMap:(id)arg2 withHandler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;

- (id)_confirmationAlertTitleForBlacklistingAction:(id)arg1 viewSpec:(id)arg2;
- (id)_warningMessageForBlacklistingAction:(id)arg1 viewSpec:(id)arg2;
- (void)promptBlacklistingConfirmatonForUserAction:(id)arg1 viewSpec:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)promptDeleteMemoryConfirmatonWithCompletionHandler:(id /* block */)arg1;

@end
