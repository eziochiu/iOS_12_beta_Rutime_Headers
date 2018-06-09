/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFigPreheatItem : PLPreheatItem {
    UIImage * _cachedImage;
    bool  _cachedImageCancelled;
    unsigned int  _cancelled;
    struct FigPhotoDecompressionContainer { } * _container;
    bool  _dataIsLoading;
    unsigned int  _hasCachedImage;
    NSString * _imagePath;
    unsigned int  _loadingOptions;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _requestGroup;
    unsigned long long  _requestID;
    NSObject<OS_dispatch_group> * _waitGroup;
}

@property (setter=_setHasCachedImage:) bool _hasCachedImage;
@property (nonatomic, readonly, copy) NSString *imagePath;
@property (nonatomic, readonly) unsigned int options;

- (void)_cacheImage;
- (void)_cancel;
- (bool)_hasCachedImage;
- (void)_leaveWaitGroupIfNeeded;
- (void)_loadPreheatDataWithHandler:(id /* block */)arg1;
- (void)_setHasCachedImage:(bool)arg1;
- (void)_uncancel;
- (bool)addImageHandler:(id /* block */)arg1;
- (id)cachedImage:(bool*)arg1;
- (id)cachedImageIfAvailable:(bool*)arg1;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)decodeSessionOptions;
- (id)imagePath;
- (id)initWithImagePath:(id)arg1 format:(int)arg2 imageType:(long long)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 options:(unsigned int)arg5;
- (id)initialDecodeSessionOptions;
- (bool)isCancelled;
- (unsigned int)options;
- (id)preheatData;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)arg1;

@end
