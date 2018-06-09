/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDMessageHistoryCKChatSyncTask : NSObject <IMDMessageHistorySyncTask> {
    IMDCKSyncController * _ckSyncController;
    id /* block */  _syncTaskCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ syncTaskCompletionBlock;

- (void)_startICloudSync;
- (void)dealloc;
- (id)initWithCKSyncController:(id)arg1;
- (void)setSyncTaskCompletionBlock:(id /* block */)arg1;
- (void)startSyncTask:(id /* block */)arg1;
- (id /* block */)syncTaskCompletionBlock;
- (unsigned long long)syncTaskType;

@end
