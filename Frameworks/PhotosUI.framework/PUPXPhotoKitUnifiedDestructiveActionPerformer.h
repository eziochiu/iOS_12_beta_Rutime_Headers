/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)_containedPerformerClasses;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;

- (void)_handleActionPick:(id)arg1 forPerformerClass:(Class)arg2;
- (void)performUserInteractionTask;

@end
