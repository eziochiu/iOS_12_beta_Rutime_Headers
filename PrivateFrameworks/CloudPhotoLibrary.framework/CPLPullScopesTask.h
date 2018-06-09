/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullScopesTask : CPLEngineSyncTask {
    NSError * _badError;
    NSString * _clientCacheIdentifier;
    unsigned long long  _deletedScopeCount;
    <CPLEngineTransportFetchScopeListChangesTask> * _fetchChangesTask;
    bool  _ignoreNewChanges;
    unsigned long long  _modifiedScopeCount;
    unsigned long long  _newScopeCount;
    CPLEngineScopeStorage * _scopes;
    CPLEngineStore * _store;
}

- (void).cxx_destruct;
- (bool)_checkShouldHandleBatchInTransaction:(id)arg1;
- (void)_handleChangedOrNewScopes:(id)arg1 deletedScopeIdentifiers:(id)arg2 newScopeListSyncAnchor:(struct NSData { Class x1; }*)arg3;
- (void)_handleFinalScopeListSyncAnchor:(struct NSData { Class x1; }*)arg1 error:(id)arg2;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (id)taskIdentifier;

@end