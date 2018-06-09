/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask {
    CPLLibraryInfo * _currentLibraryInfo;
    Class  _currentQueryClass;
    <CPLEngineTransportDownloadBatchTask> * _downloadTask;
    <CPLEngineTransportGetLibraryInfoTask> * _getLibraryInfoTask;
    bool  _hasCachedTotalAssetCountForScope;
    bool  _ignoreNewBatches;
    struct NSData { Class x1; } * _initialSyncAnchor;
    struct NSData { Class x1; } * _lastKnownSyncAnchor;
    <CPLEngineTransportQueryTask> * _queryTask;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _rewindFeatureVersion;
    struct NSData { Class x1; } * _rewindSyncAnchor;
    long long  _taskItem;
    unsigned long long  _totalAssetCountForScope;
    CPLEngineTransport * _transport;
    <CPLEngineTransportGroup> * _transportGroup;
    bool  _useCourtesyMingling;
    CPLFeatureVersionHistory * _versionHistory;
}

- (void).cxx_destruct;
- (void)_cancelAllTasks;
- (void)_checkServerFeatureVersionWithCompletionHandler:(id /* block */)arg1;
- (void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(struct NSData { Class x1; }*)arg2 inTransaction:(id)arg3;
- (void)_handleNewBatchFromChanges:(id)arg1 updatedLibraryInfo:(id)arg2 updatedLibraryState:(id)arg3 newSyncAnchor:(struct NSData { Class x1; }*)arg4;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3;
- (void)_launch;
- (void)_launchFetchChangesFromSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (void)_launchNextQueryTask;
- (void)_launchPullTasksAndDisableQueries:(bool)arg1;
- (void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2;
- (unsigned long long)_totalAssetCountForScope;
- (void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (void)cancel;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4;
- (void)launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
