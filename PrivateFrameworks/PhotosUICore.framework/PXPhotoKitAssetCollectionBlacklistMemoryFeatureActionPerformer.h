/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer {
    NSString * _userResponse;
}

@property (nonatomic, retain) NSString *userResponse;

+ (bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createPreviewActionGroupForAssetCollection:(id)arg1 mutableActionTypeToPreviewActionMap:(id)arg2 withHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_memoryFeatureFromMemory:(id)arg1 forActionType:(id)arg2;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)arg1;
- (void)applyBlacklistFeatureWithActionType:(id)arg1;
- (void)confirmBlacklistingUserAction:(id)arg1 viewSpec:(id)arg2;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setUserResponse:(id)arg1;
- (id)userResponse;

@end
