/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKAbstractSyncController : NSObject {
    bool  _isSyncing;
}

@property (nonatomic) bool isSyncing;
@property (nonatomic, readonly) bool isUsingStingRay;
@property (nonatomic, readonly) IMDCKSyncState *syncState;

- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)ckUtilities;
- (bool)isSyncing;
- (bool)isUsingStingRay;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToUploading;
- (void)setIsSyncing:(bool)arg1;
- (long long)syncControllerRecordType;
- (id)syncState;
- (id)syncStateDebuggingInfo:(id)arg1;

@end
