/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetCollectionMomentShareActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXCMMWorkflowCoordinatorDelegate> {
    PXCMMWorkflowCoordinator * _workflowCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
+ (id)createAlertActionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;

- (void).cxx_destruct;
- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)performUserInteractionTask;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishWithActivityState:(unsigned long long)arg3;

@end
