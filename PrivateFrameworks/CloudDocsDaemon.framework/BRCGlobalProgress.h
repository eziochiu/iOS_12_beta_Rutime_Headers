/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCGlobalProgress : NSObject <BRCReachabilityDelegate> {
    NSMutableSet * _appLibrariesNotLive;
    _BRCDownloadInfo * _downloads;
    BRCProgress * _globalProgress;
    bool  _lazyInitDone;
    bool  _networkReachable;
    NSObject<OS_dispatch_source> * _operationTimer;
    unsigned int  _operationTimerSuspendCount;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    bool  _showExtendedInfo;
    br_pacer * _updatePacer;
    _BRCUploadInfo * _uploads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;

+ (id)_keyPathsToObserve;

- (void).cxx_destruct;
- (void)_cancelDownloadForDocumentID:(id)arg1;
- (void)_cancelDownloadForDocumentID:(id)arg1 destroyIfLast:(bool)arg2 willRetryTransfer:(bool)arg3;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2 willRetryTransfer:(bool)arg3;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2 willRetryTransfer:(bool)arg3 pendingQuota:(bool)arg4;
- (void)_createDownloadMetadataWithCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_createNewGlobalProgressInGroup:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3;
- (void)_createNewIndeterminateGlobalProgress;
- (void)_createUploadMetadataWithCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_deleteDocument:(id)arg1 reason:(BOOL)arg2;
- (void)_destroyDownloadWithReason:(BOOL)arg1;
- (void)_destroyProgressInGroup:(id)arg1 reason:(BOOL)arg2;
- (void)_destroyUploadWithReason:(BOOL)arg1;
- (void)_resumeProgressForAnotherOperationIfNeeded;
- (void)_startObservingProgress:(id)arg1;
- (void)_stopObservingProgress:(id)arg1;
- (id)_t_globalProgressInfo;
- (void)_updateAppLibraryID:(id)arg1;
- (void)_updateDocument:(id)arg1;
- (void)_updateGlobalProgress;
- (void)addProgress:(id)arg1 forDocument:(id)arg2 inGroup:(BOOL)arg3;
- (void)clearOutOfQuotaState;
- (void)dealloc;
- (void)didDeleteDocument:(id)arg1;
- (void)didUpdateClientZone:(id)arg1;
- (void)didUpdateDocument:(id)arg1;
- (void)dumpDictionary:(id)arg1 withMaxCount:(unsigned long long)arg2 toContext:(id)arg3;
- (void)dumpToContext:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)networkReachabilityChanged:(bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)resumeProgressForZones:(id)arg1;
- (id)session;
- (void)stopPublishingProgress;
- (void)updateDownloadThrottleForDocument:(id)arg1 toState:(int)arg2;
- (void)updateUploadThrottleForDocument:(id)arg1 toState:(int)arg2;
- (void)willScheduleDocumentForDownload:(id)arg1;

@end
