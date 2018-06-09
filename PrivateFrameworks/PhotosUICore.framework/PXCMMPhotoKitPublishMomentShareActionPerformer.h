/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPhotoKitPublishMomentShareActionPerformer : PXCMMPublishActionPerformer {
    NSDate * _creationRequestStartDate;
    NSDate * _finishedDate;
    NSDate * _initialStartDate;
    int  _previewRequestID;
    NSDate * _previewRequestStartDate;
    NSDate * _publishStartDate;
    PXSharingProgressController * _sharingProgressController;
    int  _thumbnailRequestID;
}

- (void).cxx_destruct;
- (void)_acceptSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_budgetOverridePromptForMomentShare:(id)arg1 completedWithOutcome:(bool)arg2 error:(id)arg3;
- (void)_createMomentShare;
- (void)_createMomentShareWithCompletionHandler:(id /* block */)arg1;
- (void)_creatingMomentShareDidCompleteWithMomentShare:(id)arg1 error:(id)arg2;
- (id)_creationRequestForMomentShareParticipant:(id)arg1;
- (void)_handleSharingProgressCancellation;
- (id)_keyAssetForMomentShareCreationWithAssets:(id)arg1;
- (void)_presentBudgetOverridePromptForMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentInternalSharingAlert;
- (void)_publishMomentShare:(id)arg1;
- (void)_publishMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_publishingMomentShareDidCompleteWithShareURL:(id)arg1 error:(id)arg2;
- (void)_requestPreviewImagesForAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_setupSharingProgressController;
- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)performUserInteractionTask;

@end
