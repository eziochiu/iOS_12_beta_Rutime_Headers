/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaItemAssetController : NSObject <MPStoreDownloadManagerObserver, VUIMPMediaItemDownloadControllerObserver, VUIMediaEntityAssetController> {
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    <VUIMediaEntityAssetControllerDelegate> * _delegate;
    VUIMPMediaItemDownloadController * _downloadController;
    double  _downloadProgress;
    NSObject<VUIMediaEntityIdentifier> * _mediaEntityIdentifier;
    MPMediaItem * _mediaItem;
    bool  _requestingPermissionToDownload;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    unsigned long long  _state;
    NSNumber * _storeID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <VUIMediaEntityAssetControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIMPMediaItemDownloadController *downloadController;
@property (getter=isDownloadInProgress, nonatomic, readonly) bool downloadInProgress;
@property (nonatomic) double downloadProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (nonatomic, readonly, copy) VUIMediaEntityType *mediaEntityType;
@property (nonatomic, retain) MPMediaItem *mediaItem;
@property (getter=isRequestingPermissionToDownload, nonatomic) bool requestingPermissionToDownload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic) unsigned long long state;
@property (nonatomic) NSNumber *storeID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCancellation;
@property (nonatomic, readonly) bool supportsPausing;
@property (nonatomic, readonly) bool supportsStartingDownload;

+ (unsigned long long)_assetControllerStateFromDownloadController:(id)arg1 downloadProgress:(double*)arg2;
+ (unsigned long long)_assetControllerStateFromDownloadControllerState:(unsigned long long)arg1 downloadSucceeded:(bool)arg2;

- (void).cxx_destruct;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)arg1;
- (void)_enqueueCompletionQueueBlock:(id /* block */)arg1;
- (void)_enqueueSyncProcessingQueueStrongSelfBlock:(id /* block */)arg1;
- (bool)_isDownloadInProgress;
- (bool)_isDownloaded;
- (void)_notifyDelegateStateDidChange:(unsigned long long)arg1 downloadProgress:(double)arg2;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_onProcessingQueue_removeDownloadWithCompletion:(id /* block */)arg1;
- (void)_onProcessingQueue_setDownloadController:(id)arg1;
- (void)_onProcessingQueue_setState:(unsigned long long)arg1 andDownloadProgress:(double)arg2;
- (void)_onProcessingQueue_startDownloadWithCompletion:(id /* block */)arg1;
- (void)_onProcessingQueue_startMonitoringDownload;
- (void)cancelDownload;
- (id)completionDispatchQueue;
- (void)dealloc;
- (id)delegate;
- (id)downloadController;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (double)downloadProgress;
- (id)init;
- (id)initWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2;
- (void)invalidate;
- (bool)isDownloadInProgress;
- (bool)isRequestingPermissionToDownload;
- (id)mediaEntityIdentifier;
- (id)mediaEntityType;
- (id)mediaItem;
- (void)mediaItemDownloadController:(id)arg1 downloadDidFinishWithSuccess:(bool)arg2;
- (void)mediaItemDownloadController:(id)arg1 stateDidChange:(unsigned long long)arg2 downloadProgress:(double)arg3;
- (void)pauseDownload;
- (void)removeDownloadWithCompletion:(id /* block */)arg1;
- (void)resumeDownload;
- (id)serialProcessingDispatchQueue;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadController:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setMediaEntityIdentifier:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setRequestingPermissionToDownload:(bool)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStoreID:(id)arg1;
- (void)startDownloadWithCompletion:(id /* block */)arg1;
- (unsigned long long)state;
- (id)storeID;
- (bool)supportsCancellation;
- (bool)supportsPausing;
- (bool)supportsStartingDownload;

@end
