/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDReplayController : NSObject {
    id /* block */  _automationCompletionBlock;
    IMDReplayStorageIterationContext * _heldDeletionContext;
    bool  _isRecordingReplayDB;
    IMDReplayStorageController * _storageController;
    IMDReplayStorageController * _suspendedStorageController;
    NSDictionary * _syncTaskByServiceName;
}

@property (nonatomic, copy) id /* block */ automationCompletionBlock;
@property (nonatomic, retain) IMDReplayStorageIterationContext *heldDeletionContext;
@property (nonatomic, readonly) bool isRecordingReplayDB;
@property (nonatomic, retain) NSDictionary *syncTaskByServiceName;

+ (long long)batchSize;
+ (id)sharedInstance;

- (void)_fetchNexBatchOfMessagesAndReplay;
- (void)_processBatch:(id)arg1;
- (id /* block */)automationCompletionBlock;
- (void)dealloc;
- (void)deleteReplayDBIfNotUnderFirstUnlock;
- (void)endRecordingReplayDatabase;
- (id)heldDeletionContext;
- (id)init;
- (id)initWithStorageController:(id)arg1;
- (bool)isRecordingReplayDB;
- (void)overrideStorageControllerWithDatabaseFromPath:(id)arg1;
- (void)replayMessages;
- (void)replayMessagesWithCompletion:(id /* block */)arg1;
- (void)restoreDefaultStoreControllerInstance;
- (void)scheduleSyncTaskForServices:(id)arg1;
- (void)setAutomationCompletionBlock:(id /* block */)arg1;
- (void)setHeldDeletionContext:(id)arg1;
- (void)setSyncTaskByServiceName:(id)arg1;
- (void)startRecordingReplayDatabase;
- (bool)storeMessage:(id)arg1 type:(unsigned char)arg2 error:(id*)arg3;
- (id)syncTaskByServiceName;

@end
