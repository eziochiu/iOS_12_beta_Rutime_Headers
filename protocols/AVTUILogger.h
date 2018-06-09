/* made by EzioChiu.
 */

@protocol AVTUILogger <NSObject>

@required

- (void)logAVTViewCancelingRenderingAvatar:(NSString *)arg1;
- (void)logAVTViewDidRenderAvatar:(NSString *)arg1 currentAvatar:(NSString *)arg2;
- (void)logAVTViewDidRenderCurrentAvatar:(NSString *)arg1;
- (void)logAVTViewSetAvatar:(NSString *)arg1;
- (void)logAvatarPreloadBeginForIdentifier:(NSString *)arg1;
- (void)logAvatarPreloadEnd;
- (void)logBackendVersionMismatch:(NSString *)arg1 actual:(NSString *)arg2;
- (void)logCancelTransition:(NSString *)arg1;
- (void)logCancelingPreLoadingTask:(NSString *)arg1;
- (void)logCarouselAddsTransitionToCoordinator:(NSString *)arg1;
- (void)logCarouselCellStartUsingLiveView:(NSString *)arg1 associatedTransition:(NSString *)arg2;
- (void)logCarouselCellStopUsingLiveView:(NSString *)arg1 associatedTransition:(NSString *)arg2;
- (void)logCarouselChangesCenterItemTo:(NSString *)arg1 withCell:(NSString *)arg2;
- (void)logCarouselChangingToMultiMode;
- (void)logCarouselChangingToSingleMode;
- (void)logCarouselSnapshotForIndex:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)logCarouselStopsFocusingOnCenterItem:(NSString *)arg1 withCell:(NSString *)arg2;
- (void)logCreatingBackendDBAtPath:(NSString *)arg1;
- (void)logCreatingBackendFolderAtPath:(NSString *)arg1;
- (void)logCreatingImageStoreForPath:(NSString *)arg1;
- (void)logCreatingStoreForPath:(NSString *)arg1;
- (void)logDeletingRecordWithIdentifier:(NSString *)arg1;
- (void)logDidFinishEditingWithError:(NSString *)arg1;
- (void)logDidFinishEditingWithSuccess;
- (void)logDonePreLoadingPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logDonePreLoadingThumbnailForPreLoadingTask:(NSString *)arg1;
- (void)logDroppingUnsupportedAvatarRecord:(NSString *)arg1;
- (void)logDuplicatingRecordWithIdentifier:(NSString *)arg1;
- (void)logErrorCreatingBackendContent:(NSString *)arg1;
- (void)logErrorDeletingThumbnailsForIdentifier:(NSString *)arg1 error:(NSString *)arg2;
- (void)logErrorFetchingRecords:(NSString *)arg1;
- (void)logErrorLoadingTemplates:(NSString *)arg1;
- (void)logErrorUpdatingVersion:(NSString *)arg1;
- (void)logErrorWhileMigratingBackend:(NSString *)arg1;
- (void)logFileSystemError:(NSString *)arg1;
- (void)logGeneratingImageError:(NSString *)arg1;
- (void)logGeneratingImageForRecord:(NSString *)arg1 scope:(NSString *)arg2 type:(long long)arg3;
- (void)logImageStoreBeginSavingImageForPath:(NSString *)arg1;
- (void)logImageStoreCacheHitForItemDescription:(NSString *)arg1 sizeCost:(unsigned long long)arg2;
- (void)logImageStoreCacheMiss:(NSString *)arg1;
- (void)logImageStoreDoneSavingImageForPath:(NSString *)arg1;
- (void)logImageStoreSavingError:(NSString *)arg1;
- (void)logInMemoryCacheEvictsResource:(NSString *)arg1;
- (void)logInMemoryCacheHitForResource:(NSString *)arg1;
- (void)logInMemoryCacheStorageForResource:(NSString *)arg1;
- (void)logLookingUpPreLoadedPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logNoAvatarPreset:(NSString *)arg1;
- (void)logParsingMetadataDefinitions;
- (void)logParsingMetadataDefinitionsError:(NSString *)arg1;
- (void)logPerformTransition:(NSString *)arg1;
- (void)logPreLoadingNeededForIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)logPreLoadingPreset:(NSString *)arg1 task:(NSString *)arg2;
- (void)logReadingBackend;
- (void)logReadingError:(NSString *)arg1;
- (void)logRenderingConfiguration:(NSString *)arg1;
- (void)logRenderingModelColor:(NSString *)arg1;
- (void)logRenderingModelPreset:(NSString *)arg1;
- (void)logRenderingRecord:(NSString *)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)logRequestingPreLoadingTask:(NSString *)arg1 forIndex:(unsigned long long)arg2 section:(unsigned long long)arg3;
- (void)logRequestingThumbnailForIndex:(unsigned long long)arg1 section:(NSString *)arg2;
- (void)logSavingBackend;
- (void)logSavingError:(NSString *)arg1;
- (void)logSetupHandlerCompletedForTransition:(NSString *)arg1 state:(long long)arg2 finished:(bool)arg3;
- (void)logSingleModeControllerStartUsingLiveView:(NSString *)arg1;
- (void)logSingleModeControllerStopUsingLiveView:(NSString *)arg1;
- (void)logSnapshotReturnedImage:(NSString *)arg1;
- (void)logStartTransition:(NSString *)arg1 state:(long long)arg2;
- (void)logStartingPreLoadingTask:(NSString *)arg1;
- (void)logThrottlingAVTView;
- (void)logToLivePoseTransitionBegins:(NSString *)arg1;
- (void)logToLivePoseTransitionEnds:(NSString *)arg1;
- (void)logTransition:(NSString *)arg1 state:(unsigned long long)arg2 reachedStage:(unsigned long long)arg3;
- (void)logUnthrottlingAVTView;
- (void)logUpdatingLiveAvatarWithConfiguration:(NSString *)arg1;

@end
