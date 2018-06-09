/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXPhotoKitAdjustedUIImageRequest : _PXPhotoKitAdjustedUIMediaRequest {
    long long  _contentMode;
    int  _currentVersionRequestID;
    bool  _hasReturnedAdjustedResult;
    PHImageRequestOptions * _options;
    PLPhotoEditRenderer * _renderer;
    id /* block */  _resultHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    NSString * _uniqueContentIdentifier;
}

@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly) PHImageRequestOptions *options;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (id)_cachedImageURL;
- (id)_cachedLowResImageURL;
- (bool)_deliverCachedImageIfPossible;
- (bool)_deliverCachedUnscaledImageIfPossible;
- (id)_existingCachedImageURL;
- (void)_handleCurrentVersionImageResult:(id)arg1 info:(id)arg2;
- (void)_handleImageWasCached;
- (void)_handleRenderedImage:(id)arg1 error:(id)arg2;
- (void)_renderIfNeeded;
- (id)_unscaledCachedImageURL;
- (void)cancel;
- (long long)contentMode;
- (void)editSourceDidChange;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(long long)arg4 options:(id)arg5 resultHandler:(id /* block */)arg6;
- (id)options;
- (void)progressDidChange;
- (id /* block */)resultHandler;
- (void)start;
- (struct CGSize { double x1; double x2; })targetSize;

@end
