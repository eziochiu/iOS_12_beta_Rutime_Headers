/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaItemDownloadController : NSObject {
    double  _bytesDownloaded;
    double  _bytesToDownload;
    double  _downloadProgress;
    bool  _downloadSucceeded;
    MPMediaItem * _mediaItem;
    NSObject<OS_dispatch_queue> * _observerDispatchQueue;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    unsigned long long  _state;
}

@property (nonatomic, readonly) double bytesDownloaded;
@property (nonatomic, readonly) double bytesToDownload;
@property (getter=isDownloadInProgress, nonatomic, readonly) bool downloadInProgress;
@property (nonatomic) double downloadProgress;
@property (nonatomic) bool downloadSucceeded;
@property (nonatomic, retain) MPMediaItem *mediaItem;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerDispatchQueue;
@property (nonatomic, retain) NSMutableArray *observers;
@property (getter=isRestoreDownload, nonatomic, readonly) bool restoreDownload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) bool supportsCancellation;
@property (nonatomic, readonly) bool supportsPausing;

+ (id)mediaItemDownloadControllerWithMediaItem:(id)arg1;

- (void).cxx_destruct;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(id /* block */)arg1;
- (void)_enqueueObserverQueueBlock:(id /* block */)arg1;
- (void)_enqueueSyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_enqueueSyncStrongSelfProcessingQueueBlock:(id /* block */)arg1;
- (void)_notifyObservers:(id)arg1 downloadDidFinishWithSuccess:(bool)arg2;
- (void)_notifyObservers:(id)arg1 stateDidChange:(unsigned long long)arg2 downloadProgress:(double)arg3;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_setState:(unsigned long long)arg1 downloadProgress:(double)arg2 downloadSucceeded:(bool)arg3;
- (void)_setState:(unsigned long long)arg1 downloadProgress:(double)arg2 downloadSucceeded:(bool)arg3;
- (void)addObserver:(id)arg1;
- (double)bytesDownloaded;
- (double)bytesToDownload;
- (void)cancelDownload;
- (double)downloadProgress;
- (bool)downloadSucceeded;
- (id)init;
- (id)initWithMediaItem:(id)arg1 state:(unsigned long long)arg2 downloadProgress:(double)arg3 downloadSucceeded:(bool)arg4;
- (void)invalidate;
- (bool)isDownloadInProgress;
- (bool)isRestoreDownload;
- (id)mediaItem;
- (id)observerDispatchQueue;
- (id)observers;
- (void)pauseDownload;
- (void)removeObserver:(id)arg1;
- (void)resumeDownload;
- (id)serialProcessingDispatchQueue;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloadSucceeded:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setObserverDispatchQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (bool)supportsCancellation;
- (bool)supportsPausing;

@end
