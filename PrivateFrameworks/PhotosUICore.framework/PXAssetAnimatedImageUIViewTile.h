/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetAnimatedImageUIViewTile : PXAssetUIImageViewTile {
    PHAnimatedImage * __animatedImage;
    long long  _animatedImageRequestID;
    ISAnimatedImageView * _animatedImageView;
    unsigned long long  _requestCount;
}

@property (setter=_setAnimatedImage:, nonatomic, retain) PHAnimatedImage *_animatedImage;

- (void).cxx_destruct;
- (id)_animatedImage;
- (void)_handleAnimatedImageResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3;
- (void)_requestAnimatedImageIfNeeded;
- (void)_setAnimatedImage:(id)arg1;
- (void)_updateAnimatedImageView;
- (void)becomeReusable;
- (void)setImageRequester:(id)arg1;
- (id)view;

@end
