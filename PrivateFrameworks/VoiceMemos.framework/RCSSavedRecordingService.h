/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol> {
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSSet * _compositionAVURLsBeingExported;
    int  _compositionAVURLsBeingExportedDistributedNotificationToken;
    NSSet * _compositionAVURLsBeingModified;
    int  _compositionAVURLsBeingModifiedDistributedNotificationToken;
    NSMutableDictionary * _pendingServiceCompletionHandlers;
    NSObject<OS_dispatch_queue> * _serialQueue;
    <RCSSavedRecordingServiceProtocol> * _serviceProxy;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, retain) NSSet *compositionAVURLsBeingExported;
@property (nonatomic, retain) NSSet *compositionAVURLsBeingModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)changeToken;
+ (bool)isRunningInSavedRecordingDaemon;
+ (void)setChangeToken:(id)arg1;
+ (id)sharedService;

- (void).cxx_destruct;
- (oneway void)__fetchAllAccessTokens:(id /* block */)arg1;
- (oneway void)_fetchAllAccessTokens:(id /* block */)arg1;
- (void)_handleCompositionAVURLsBeingExportedDidChange;
- (void)_handleCompositionAVURLsBeingModifiedDidChange;
- (struct NSNumber { Class x1; }*)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(id /* block */)arg1;
- (void)_onQueueCloseServiceConnection;
- (void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg1 withError:(id)arg2;
- (void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1;
- (void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(struct NSNumber { Class x1; }*)arg1;
- (void)_sendServiceMessage:(SEL)arg1 accessRequestReplyBlock:(id /* block */)arg2 messagingBlock:(id /* block */)arg3;
- (void)_sendServiceMessage:(SEL)arg1 connectionFailureReplyInfo:(id)arg2 infoAndErrorReplyHandler:(id /* block */)arg3 messagingBlock:(id /* block */)arg4;
- (void)_sendServiceMessage:(SEL)arg1 importRequestReplyBlock:(id /* block */)arg2 messagingBlock:(id /* block */)arg3;
- (void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(id /* block */)arg2 messagingBlock:(id /* block */)arg3;
- (void)checkRecordingAvailability:(id /* block */)arg1;
- (oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(id /* block */)arg1;
- (void)closeServiceConnection;
- (id)completionQueue;
- (id)compositionAVURLsBeingExported;
- (id)compositionAVURLsBeingModified;
- (void)dealloc;
- (oneway void)disableCloudRecordingsSaveLocalCopies:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (oneway void)disableOrphanHandlingWithCompletionBlock:(id /* block */)arg1;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (oneway void)enableCloudRecordingsWithCompletionBlock:(id /* block */)arg1;
- (oneway void)enableOrphanHandlingWithCompletionBlock:(id /* block */)arg1;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
- (oneway void)endAccessSessionWithToken:(id)arg1 completionBlock:(id /* block */)arg2;
- (oneway void)exportRecordingsToCloud:(id /* block */)arg1;
- (oneway void)expungeRecordingsFromCloud:(id /* block */)arg1;
- (oneway void)fetchCompositionAVURLsBeingExported:(id /* block */)arg1;
- (oneway void)fetchCompositionAVURLsBeingModified:(id /* block */)arg1;
- (oneway void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 importCompletionBlock:(id /* block */)arg4;
- (oneway void)importRecordingsFromCloud:(id /* block */)arg1;
- (id)init;
- (void)openServiceConnection;
- (oneway void)performDatabaseMigrationWithCompletionBlock:(id /* block */)arg1;
- (oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(id /* block */)arg2;
- (oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(bool)arg2 accessRequestHandler:(id /* block */)arg3;
- (oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(id /* block */)arg2;
- (oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(id /* block */)arg2;
- (oneway void)reloadExistingSearchMetadataWithCompletionBlock:(id /* block */)arg1;
- (oneway void)removeAllUserDataWithCompletion:(id /* block */)arg1;
- (id)serviceProxy;
- (void)setCompletionQueue:(id)arg1;
- (void)setCompositionAVURLsBeingExported:(id)arg1;
- (void)setCompositionAVURLsBeingModified:(id)arg1;
- (oneway void)updateSearchMetadataWithRecordingURIsToInsert:(id)arg1 recordingURIsToUpdate:(id)arg2 recordingURIsToDelete:(id)arg3 completionBlock:(id /* block */)arg4;

@end
