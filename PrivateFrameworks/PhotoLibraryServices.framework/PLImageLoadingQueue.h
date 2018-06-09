/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageLoadingQueue : NSObject {
    PLImageCache * _cache;
    <PLImageLoadingQueueDelegate> * _delegate;
    NSLock * _lock;
}

@property (nonatomic) <PLImageLoadingQueueDelegate> *delegate;

- (void)cancelLoadFromSource:(id)arg1 forAsset:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)imageIsAvailable:(id)arg1 forAsset:(id)arg2 fromSource:(id)arg3 completionBlocks:(id)arg4;
- (id)initWithImageCache:(id)arg1;
- (void)invalidateImageFromSource:(id)arg1 forAsset:(id)arg2;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 completion:(id /* block */)arg4;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 loadIfNeeded:(bool)arg4;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4;
- (id)loadImageSynchronously:(bool)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 completion:(id /* block */)arg5;
- (void)pauseLoading;
- (void)resumeLoading;
- (void)setDelegate:(id)arg1;
- (void)stopLoading;

@end
