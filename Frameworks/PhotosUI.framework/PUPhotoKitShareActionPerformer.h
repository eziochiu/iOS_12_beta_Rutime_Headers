/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer {
    PUPhotosSharingViewController * _preheatedSharingViewController;
}

@property (nonatomic, retain) PUPhotosSharingViewController *preheatedSharingViewController;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;
- (id)_createSharingViewControllerFromCurrentSelection;
- (void)performUserInteractionTask;
- (void)preheatUserInteractionTask;
- (id)preheatedSharingViewController;
- (void)setPreheatedSharingViewController:(id)arg1;

@end
