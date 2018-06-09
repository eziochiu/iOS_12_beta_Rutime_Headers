/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaLibraryFetchControllerQueue : NSObject {
    VUIMediaLibraryFetchControllerQueueOperation * _contentsChangeFetchOperation;
    VUIDelayOperation * _delayContentsChangeOperation;
    <VUIMediaLibraryFetchControllerQueueDelegate> * _delegate;
    VUIMediaLibrary * _mediaLibrary;
    unsigned long long  _mediaLibraryRevision;
    NSMutableArray * _mutableFetchControllers;
    NSOperationQueue * _serialFetchOperationQueue;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
}

@property (nonatomic, retain) VUIMediaLibraryFetchControllerQueueOperation *contentsChangeFetchOperation;
@property (nonatomic, retain) VUIDelayOperation *delayContentsChangeOperation;
@property (nonatomic) <VUIMediaLibraryFetchControllerQueueDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *fetchControllers;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic) unsigned long long mediaLibraryRevision;
@property (nonatomic, retain) NSMutableArray *mutableFetchControllers;
@property (nonatomic, retain) NSOperationQueue *serialFetchOperationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;

+ (id)defaultQueueWithMediaLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_addStateObserverForFetchControllers:(id)arg1;
- (void)_delayContentsChangeOperationDidComplete;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_enqueueControllerFetchOperationWithReason:(long long)arg1;
- (void)_enqueueProcessingQueueBlock:(id /* block */)arg1 synchronous:(bool)arg2;
- (void)_enqueueSyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_handleMediaLibraryContentsChange;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_notifyDelegateFetchDidComplete;
- (void)_queueOperationDidComplete:(id)arg1;
- (void)_removeStateObserverForFetchControllers:(id)arg1;
- (void)addFetchController:(id)arg1;
- (void)addFetchControllers:(id)arg1;
- (id)contentsChangeFetchOperation;
- (void)dealloc;
- (id)delayContentsChangeOperation;
- (id)delegate;
- (id)fetchControllers;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1;
- (id)mediaLibrary;
- (unsigned long long)mediaLibraryRevision;
- (id)mutableFetchControllers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeFetchController:(id)arg1;
- (void)removeFetchControllers:(id)arg1;
- (id)serialFetchOperationQueue;
- (id)serialProcessingDispatchQueue;
- (void)setContentsChangeFetchOperation:(id)arg1;
- (void)setDelayContentsChangeOperation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setMediaLibraryRevision:(unsigned long long)arg1;
- (void)setMutableFetchControllers:(id)arg1;
- (void)setSerialFetchOperationQueue:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;

@end
