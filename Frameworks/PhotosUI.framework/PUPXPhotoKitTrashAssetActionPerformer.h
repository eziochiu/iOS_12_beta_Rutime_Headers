/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXPhotoKitTrashAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)createPreviewActionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;

- (long long)destructivePhotosAction;

@end
