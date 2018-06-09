/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, CPLLibraryManagerImplementation, NSXPCConnectionDelegate> {
    NSXPCConnection * _connection;
    bool  _diagnosticsEnabled;
    unsigned long long  _disablingMinglingCount;
    NSCountedSet * _disablingReasons;
    NSMutableDictionary * _downloadTasks;
    unsigned long long  _foregroundCalls;
    NSMutableDictionary * _inMemoryDownloadTasks;
    int  _notifyToken;
    int  _openingStatus;
    NSMutableDictionary * _outstandingInvocations;
    unsigned long long  _outstandingInvocationsCount;
    NSMutableArray * _pendingBlocksAfterOpening;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _significantWorkCalls;
    NSMutableDictionary * _uploadTasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)clientProtocolInterface;
+ (id)daemonProtocolInterface;

- (void).cxx_destruct;
- (void)_dispatchBlockWhenOpen:(id /* block */)arg1;
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(bool)arg2 withError:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_dispatchFailedInMemoryDownloadTaskForResource:(id)arg1 withError:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_reallyOpenWithCompletionHandler:(id /* block */)arg1;
- (bool)_setStatusFromDictionary:(id)arg1;
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)acceptMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)addInfoToLog:(id)arg1;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(bool)arg2;
- (void)backgroundDownloadDidFailForResource:(id)arg1;
- (void)backgroundDownloadDidFinishForResource:(id)arg1;
- (void)barrier;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(bool)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)blockEngineElement:(id)arg1;
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelTask:(id)arg1;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)compactFileCacheWithCompletionHandler:(id /* block */)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)deactivateWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)diagnosticsEnabled;
- (void)disableMainScopeWithCompletionHandler:(id /* block */)arg1;
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)dispatchBlockWhenLibraryIsOpen:(id /* block */)arg1;
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)downloadDidStartForResourceTransferTask:(id)arg1;
- (void)enableMainScopeWithCompletionHandler:(id /* block */)arg1;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getChangedStatusesWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg1;
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3;
- (id)initWithAbstractObject:(id)arg1;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
- (void)libraryManagerHasChangesToPull;
- (void)libraryManagerHasStatusChanges;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)proxyWithErrorHandler:(id /* block */)arg1;
- (void)publishMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)publishResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)reportMiscInformation:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetStatus;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)startSyncSession;
- (void)unblockEngineElement:(id)arg1;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;

@end
