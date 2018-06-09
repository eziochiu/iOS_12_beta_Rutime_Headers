/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {
    unsigned long long  _activeTransferTaskCount;
    NSError * _badError;
    unsigned long long  _failedDownloadedResourcesCount;
    bool  _hasResetQueue;
    NSObject<OS_dispatch_queue> * _lock;
    bool  _shouldStop;
    NSError * _stopError;
    unsigned long long  _successfullyDownloadedResourcesCount;
    unsigned long long  _total;
    unsigned long long  _transportTaskCount;
    NSMutableArray * _transportTasks;
}

- (void).cxx_destruct;
- (void)_completeBackgroundDownloadForResource:(id)arg1 error:(id)arg2 withTransaction:(id)arg3;
- (void)_downloadTask:(id)arg1 didFinishWithErrorLocked:(id)arg2;
- (void)_enqueueTasksLocked;
- (void)_finishTaskLocked;
- (bool)_isErrorCountingForARetry:(id)arg1;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1;
- (void)_transportTaskDidFinish:(id)arg1;
- (void)_updateActiveDownloadTaskCount;
- (void)cancel;
- (id)description;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
