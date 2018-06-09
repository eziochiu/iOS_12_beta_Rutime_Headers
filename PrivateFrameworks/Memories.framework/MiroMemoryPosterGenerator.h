/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryPosterGenerator : NSObject {
    MiroPosterEffectPool * _posterEffectPool;
    NSOperationQueue * _posterSchedulingManager;
    NSMutableArray * _requests;
    NSLock * _requestsLock;
    MiroPosterGenerationStats * _runningAverage;
    NSMutableArray * _stats;
    NSLock * _statsLock;
}

+ (struct CGSize { double x1; double x2; })defaultPosterSize;
+ (id)localImageRequestOptions;
+ (id)networkImageRequestOptions;
+ (id)stringForState:(int)arg1;

- (void).cxx_destruct;
- (void)_addCompletedStats:(id)arg1;
- (bool)_addNewRequestToQueue:(id)arg1;
- (void)_clearCaches;
- (id)_croppedSourceImage:(id)arg1 forKeyAsset:(id)arg2;
- (id)_encodePosterImageToJPEG:(id)arg1 timeToEncode:(double*)arg2;
- (void)_handlePosterGenerationWithImage:(id)arg1 posterRequest:(id)arg2 miroSchedulingRequest:(id)arg3 miroSchedulingCompletionHandler:(id /* block */)arg4 posterGenerationCompletionHandler:(id /* block */)arg5 posterGenerationInfo:(id)arg6 posterStats:(id)arg7 startPosterRequestTime:(unsigned long long)arg8 startGetQualityImageTime:(unsigned long long)arg9;
- (id)_newprepInputImageForPoster:(id)arg1 keyAsset:(id)arg2;
- (id)_prepInputImageForPoster:(id)arg1 keyAsset:(id)arg2;
- (void)_removeRequestFromQueue:(id)arg1;
- (id)_resizedAndNormalizedImage:(id)arg1;
- (id)_scaleAndCropSourceImageForPosterTitle:(id)arg1;
- (void)_scheduleLocalImageRequestAndRender:(id)arg1 schedulingPriority:(long long)arg2 posterGenerationCompletionHandler:(id /* block */)arg3;
- (void)_scheduleNetworkImageDownloadAndRender:(id)arg1 schedulingPriority:(long long)arg2 posterGenerationCompletionHandler:(id /* block */)arg3 localSchedulingRequest:(id)arg4 posterStats:(id)arg5 startPosterRequestTime:(double)arg6;
- (void)_scheduleOverrideKeyAssetImageRender:(id)arg1 schedulingPriority:(long long)arg2 posterGenerationCompletionHandler:(id /* block */)arg3;
- (id)_titleEffectForPosterRequest:(id)arg1 stats:(id)arg2;
- (id)_titleEffectForTitleDefinition:(id)arg1;
- (void)cancelMemoryPosterRequest:(id)arg1 forAllRequests:(bool)arg2;
- (void)cancelPendingRequests;
- (void)cleanCaches;
- (void)dealloc;
- (void)didEnterBackgroundNotification:(id)arg1;
- (id)encodePosterImageToJPEG:(id)arg1;
- (void)generatePosterForMemory:(id)arg1 options:(id)arg2 priority:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)init;
- (void)memoryWarningNotification:(id)arg1;
- (void)posterImageForTitle:(id)arg1 subtitle:(id)arg2 effectID:(id)arg3 parametersDictionary:(id)arg4 moodID:(id)arg5 inputImage:(id)arg6 outputSize:(struct CGSize { double x1; double x2; })arg7 withCompletionHandler:(id /* block */)arg8;
- (void)preloadPooledEffects:(id)arg1;
- (id)prepPosterInputForKeyAsset:(id)arg1;
- (void)printStatsAndClear:(bool)arg1;
- (unsigned long long)requestsCount;
- (void)resumeBackgroundTasksNotification:(id)arg1;
- (void)resumePosterGeneration;
- (void)suspendBackgroundTasksNotification:(id)arg1;
- (void)suspendPosterGeneration;
- (void)willEnterForegroundNotification:(id)arg1;
- (void)willTerminateNotification:(id)arg1;

@end
