/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushToTransportScopeTask : CPLEngineScopedTask {
    NSMutableDictionary * _additionalTransportScopes;
    CPLChangeBatch * _batchToCommit;
    <CPLEngineTransportCheckRecordsExistenceTask> * _checkExistenceTask;
    unsigned long long  _countOfPushedChanges;
    CPLBatchExtractionStrategy * _currentStrategy;
    NSString * _currentTaskKey;
    bool  _deferredCancel;
    unsigned long long  _estimatedCount;
    unsigned long long  _estimatedSize;
    CPLExtractedBatch * _extractedBatch;
    bool  _generatingSomeDerivatives;
    bool  _hasCachedShouldCheckResourcesAhead;
    bool  _hasDroppedSomeResources;
    bool  _hasPushedSomeChanges;
    bool  _highPriority;
    bool  _isUsingOverQuotaStrategy;
    unsigned long long  _lastReportedProgress;
    double  _latestApproximativeUploadRate;
    NSObject<OS_dispatch_queue> * _lock;
    bool  _mightPushSomeResources;
    NSError * _preparationError;
    CPLEnginePushRepository * _pushRepository;
    unsigned long long  _recordCount;
    NSMutableDictionary * _recordsCopyingDerivativesFromSource;
    NSMutableSet * _recordsNeedingToBeFullyFetched;
    NSMutableDictionary * _recordsToCheckForExistence;
    NSMutableDictionary * _recordsWithForwardCompatibilityCheck;
    NSDictionary * _recordsWithGeneratedResources;
    NSMutableDictionary * _recordsWithResourcesToLookAhead;
    NSMutableDictionary * _recordsWithSparseResources;
    NSMutableDictionary * _recordsWithUntrustedCloudCache;
    bool  _resetStrategy;
    CPLEngineScheduler * _scheduler;
    CPLEngineScopeStorage * _scopes;
    bool  _shouldCheckResourcesAhead;
    bool  _shouldResetExceedingQuotaOnSuccess;
    bool  _shouldSetupEstimatedSize;
    double  _startOfDerivativesGeneration;
    double  _startOfIteration;
    long long  _taskItem;
    NSDate * _taskStartDate;
    CPLEngineTransport * _transport;
    <CPLEngineTransportGroup> * _transportGroup;
    CPLChangeBatch * _uploadBatch;
    NSArray * _uploadResourceTasks;
    <CPLEngineTransportUploadBatchTask> * _uploadTask;
}

@property (nonatomic) bool highPriority;

- (void).cxx_destruct;
- (void)_checkForRecordExistence;
- (void)_clearUploadBatch;
- (void)_deleteGeneratedResourcesAfterError:(id)arg1;
- (void)_detectUpdatesNeedingExistenceCheck:(id)arg1;
- (void)_didFinishTaskWithKey:(id)arg1 error:(bool)arg2;
- (void)_didStartTaskWithKey:(id)arg1 recordCount:(unsigned long long)arg2;
- (bool)_discardUploadedExtractedBatchWithError:(id*)arg1;
- (void)_doOneIteration;
- (void)_generateDerivativesForNextRecord:(id)arg1;
- (void)_generateNeededDerivatives;
- (bool)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id*)arg2;
- (void)_popNextBatchAndContinue;
- (bool)_prepareResourcesToUploadInBatch:(id)arg1 error:(id*)arg2;
- (void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2;
- (void)_pushTaskDidFinishWithError:(id)arg1;
- (bool)_reenqueueExtractedBatchWithRejectedRecords:(id)arg1 error:(id*)arg2;
- (void)_requireExistenceCheckForRecords:(id)arg1;
- (bool)_shouldCheckResourcesAheadForChange:(id)arg1;
- (void)_updateChangeProperties:(id)arg1 withBaseChange:(id)arg2 withCopyProperty:(id /* block */)arg3;
- (void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg1;
- (void)_uploadBatch;
- (void)cancel;
- (void)cancel:(bool)arg1;
- (bool)highPriority;
- (id)initWithEngineLibrary:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4;
- (void)launch;
- (void)setHighPriority:(bool)arg1;
- (id)taskIdentifier;

@end
