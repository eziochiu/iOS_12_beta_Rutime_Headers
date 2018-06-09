/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaItemCloudDownloadController : VUIMPMediaItemDownloadController <MPStoreDownloadManagerObserver> {
    MPStoreDownload * _storeDownload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPStoreDownload *storeDownload;
@property (readonly) Class superclass;

+ (unsigned long long)_stateFromStoreDownload:(id)arg1 downloadProgress:(double*)arg2 downloadSucceeded:(bool*)arg3;
+ (bool)_storeDownloadSucceeded:(id)arg1;

- (void).cxx_destruct;
- (void)_addStoreObserver;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_removeStoreObserver;
- (double)bytesDownloaded;
- (double)bytesToDownload;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithMediaItem:(id)arg1 state:(unsigned long long)arg2 downloadProgress:(double)arg3 downloadSucceeded:(bool)arg4;
- (bool)isRestoreDownload;
- (void)setStoreDownload:(id)arg1;
- (id)storeDownload;
- (bool)supportsPausing;

@end
