/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStorePlayWhileDownloadController : NSObject <MPStoreDownloadManagerObserver, SSDownloadHandlerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    SSDownloadHandler * _downloadHandler;
    NSMapTable * _downloadToActiveSessions;
    NSMapTable * _downloadToDownloadTokenPendingCompletionHandlers;
    NSMapTable * _downloadToObservationTransactionCount;
    NSMapTable * _downloadToProcessingDownloadHandlerSessions;
    NSMapTable * _downloadToValidStatePendingCompletionHandlers;
    NSMutableArray * _pausedDownloads;
    NSMutableArray * _prioritizedDownloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long downloadHandlerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_beginDownloadObservationForDownload:(id)arg1;
- (void)_beginPrioritizingDownload:(id)arg1;
- (void)_beginPrioritizingDownloadSession:(id)arg1;
- (void)_endDownloadObservationForDownload:(id)arg1;
- (void)_endPrioritizingDownload:(id)arg1;
- (void)_endPrioritizingDownloadSession:(id)arg1;
- (void)_getDownloadPropertiesForStoreDownload:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_getDownloadTokenForStoreDownload:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleDownloadPrioritization;
- (bool)_isStoreDownloadValidForPlayWhileDownload:(id)arg1;
- (void)_postActiveSessionsDidFinishForStoreDownload:(id)arg1;
- (void)_suspendUntilValidDownloadStateForStoreDownload:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_updateActiveSessionsForDownload:(id)arg1;
- (void)_updateForDownloadStateRefreshWithDownload:(id)arg1;
- (void)_updateForDownloadTokenRefreshWithDownload:(id)arg1;
- (void)acquirePlayWhileDownloadSessionForDownload:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)beginPrioritizingDownloadSession:(id)arg1;
- (void)dealloc;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadHandler:(id)arg1 handleSession:(id)arg2;
- (long long)downloadHandlerIdentifier;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)endPrioritizingDownloadSession:(id)arg1;
- (id)init;
- (void)releasePlayWhileDownloadSession:(id)arg1;

@end
