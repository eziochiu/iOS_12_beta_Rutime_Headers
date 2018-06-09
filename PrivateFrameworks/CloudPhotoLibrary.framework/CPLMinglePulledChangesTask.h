/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask {
    NSString * _clientCacheIdentifier;
    unsigned long long  _countOfNotifiedBatchesInPullQueue;
    bool  _hasPreparedForMingling;
    NSObject<OS_dispatch_queue> * _lock;
}

+ (bool)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(bool*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_launch;
- (void)_processNextBatch;
- (void)_taskDidFinishWithError:(id)arg1;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
