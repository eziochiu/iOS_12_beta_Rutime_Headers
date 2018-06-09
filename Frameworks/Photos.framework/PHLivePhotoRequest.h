/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLivePhotoRequest : PHImageManagerRequest {
    PHAsset * __asset;
    AVAsset * __avAsset;
    bool  __avAssetRequestCompleted;
    bool  __avAssetRequestFailed;
    long long  __contentMode;
    bool  __didFinishStart;
    NSError * __error;
    UIImage * __image;
    PHImageManager * __imageManager;
    bool  __imageRequestCompleted;
    bool  __imageRequestFailed;
    bool  __isCancelled;
    bool  __isImageDegraded;
    bool  __isInCloud;
    bool  __isInProgress;
    NSRecursiveLock * __isolationLock;
    bool  __needsUpdateResult;
    PHLivePhotoRequestOptions * __options;
    id /* block */  __resultHandler;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __stillDisplayTime;
    struct CGSize { 
        double width; 
        double height; 
    }  __targetSize;
}

@property (nonatomic, readonly) PHAsset *_asset;
@property (setter=_setAVAsset:, nonatomic, retain) AVAsset *_avAsset;
@property (setter=_setAVAssetRequestCompleted:, nonatomic) bool _avAssetRequestCompleted;
@property (setter=_setAVAssetRequestFailed:, nonatomic) bool _avAssetRequestFailed;
@property (nonatomic, readonly) long long _contentMode;
@property (setter=_setDidFinishStart:, nonatomic) bool _didFinishStart;
@property (setter=_setError:, nonatomic, retain) NSError *_error;
@property (setter=_setImage:, nonatomic, retain) UIImage *_image;
@property (nonatomic, readonly) PHImageManager *_imageManager;
@property (setter=_setImageRequestCompleted:, nonatomic) bool _imageRequestCompleted;
@property (setter=_setImageRequestFailed:, nonatomic) bool _imageRequestFailed;
@property (setter=_setCancelled:, nonatomic) bool _isCancelled;
@property (setter=_setImageDegraded:, nonatomic) bool _isImageDegraded;
@property (setter=_setInCloud:, nonatomic) bool _isInCloud;
@property (setter=_setInProgress:, nonatomic) bool _isInProgress;
@property (nonatomic, readonly) NSRecursiveLock *_isolationLock;
@property (setter=_setNeedsUpdateResult:, nonatomic) bool _needsUpdateResult;
@property (nonatomic, readonly) PHLivePhotoRequestOptions *_options;
@property (nonatomic, readonly) id /* block */ _resultHandler;
@property (setter=_setStillDisplayTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _stillDisplayTime;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _targetSize;

- (void).cxx_destruct;
- (id)_asset;
- (id)_avAsset;
- (bool)_avAssetRequestCompleted;
- (bool)_avAssetRequestFailed;
- (long long)_contentMode;
- (bool)_didFinishStart;
- (id)_error;
- (void)_handleImageResultHandlerWithImage:(id)arg1 info:(id)arg2;
- (void)_handleVideoResultHandlerWithAVAsset:(id)arg1 info:(id)arg2;
- (id)_image;
- (id)_imageManager;
- (bool)_imageRequestCompleted;
- (bool)_imageRequestFailed;
- (void)_invalidateResult;
- (bool)_isCancelled;
- (bool)_isImageDegraded;
- (bool)_isInCloud;
- (bool)_isInProgress;
- (id)_isolationLock;
- (bool)_needsUpdateResult;
- (id)_options;
- (id /* block */)_resultHandler;
- (void)_setAVAsset:(id)arg1;
- (void)_setAVAssetRequestCompleted:(bool)arg1;
- (void)_setAVAssetRequestFailed:(bool)arg1;
- (void)_setCancelled:(bool)arg1;
- (void)_setDidFinishStart:(bool)arg1;
- (void)_setError:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageDegraded:(bool)arg1;
- (void)_setImageRequestCompleted:(bool)arg1;
- (void)_setImageRequestFailed:(bool)arg1;
- (void)_setInCloud:(bool)arg1;
- (void)_setInProgress:(bool)arg1;
- (void)_setNeedsUpdateResult:(bool)arg1;
- (void)_setStillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_stillDisplayTime;
- (struct CGSize { double x1; double x2; })_targetSize;
- (void)_update;
- (void)_updateInProgress;
- (void)_updateResultIfNeeded;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 imageManager:(id)arg5 resultHandler:(id /* block */)arg6;
- (void)start;

@end
