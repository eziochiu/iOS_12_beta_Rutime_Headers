/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaItemCollectionAssetController : NSObject <VUIMediaEntityAssetController, VUIMediaEntityAssetControllerDelegate> {
    NSArray * _assetControllers;
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    <VUIMediaEntityAssetControllerDelegate> * _delegate;
    NSMutableDictionary * _downloadControllerForIdentifier;
    double  _downloadProgress;
    NSObject<VUIMediaEntityIdentifier> * _mediaEntityIdentifier;
    MPMediaItemCollection * _mediaItemCollection;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSArray *assetControllers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <VUIMediaEntityAssetControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *downloadControllerForIdentifier;
@property (getter=isDownloadInProgress, nonatomic, readonly) bool downloadInProgress;
@property (nonatomic) double downloadProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (nonatomic, readonly, copy) VUIMediaEntityType *mediaEntityType;
@property (nonatomic, retain) MPMediaItemCollection *mediaItemCollection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCancellation;
@property (nonatomic, readonly) bool supportsPausing;
@property (nonatomic, readonly) bool supportsStartingDownload;

- (void).cxx_destruct;
- (bool)_allAssetsDownloaded;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)arg1;
- (void)_enqueueCompletionQueueBlock:(id /* block */)arg1;
- (void)_enqueueSyncProcessingQueueStrongSelfBlock:(id /* block */)arg1;
- (void)_notifyDelegateStateDidChange:(unsigned long long)arg1 downloadProgress:(double)arg2;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_removeDownloadWithCompletion:(id /* block */)arg1;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_setState:(unsigned long long)arg1 downloadProgress:(double)arg2 notifyDelegate:(bool)arg3;
- (void)_onProcessingQueue_startDownloadWithCompletion:(id /* block */)arg1;
- (unsigned long long)_onProcessingQueue_stateFromDownloadControllersAndDownloadProgress:(double*)arg1;
- (void)_onProcessingQueue_updateStateAndNotifyDelegate:(bool)arg1;
- (id)assetControllers;
- (void)cancelDownload;
- (id)completionDispatchQueue;
- (id)delegate;
- (id)downloadControllerForIdentifier;
- (double)downloadProgress;
- (id)init;
- (id)initWithMediaItemCollection:(id)arg1 mediaEntityIdentifier:(id)arg2;
- (void)invalidate;
- (bool)isDownloadInProgress;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(unsigned long long)arg2 downloadProgress:(double)arg3;
- (id)mediaEntityIdentifier;
- (id)mediaEntityType;
- (id)mediaItemCollection;
- (void)pauseDownload;
- (void)removeDownloadWithCompletion:(id /* block */)arg1;
- (void)resumeDownload;
- (id)serialProcessingDispatchQueue;
- (void)setAssetControllers:(id)arg1;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadControllerForIdentifier:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setMediaEntityIdentifier:(id)arg1;
- (void)setMediaItemCollection:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)startDownloadWithCompletion:(id /* block */)arg1;
- (unsigned long long)state;
- (bool)supportsCancellation;
- (bool)supportsPausing;
- (bool)supportsStartingDownload;

@end
