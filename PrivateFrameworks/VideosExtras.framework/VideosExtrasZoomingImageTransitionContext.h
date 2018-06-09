/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasZoomingImageTransitionContext : NSObject {
    unsigned long long  _appearState;
    bool  _interactive;
    unsigned long long  _itemIndex;
    VideosExtrasBorderedImageView * _zoomingImageView;
}

@property (nonatomic) unsigned long long appearState;
@property (getter=isInteractive, nonatomic) bool interactive;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic, retain) VideosExtrasBorderedImageView *zoomingImageView;

- (void).cxx_destruct;
- (unsigned long long)appearState;
- (id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned long long)arg2 appearState:(unsigned long long)arg3 isInteractive:(bool)arg4;
- (bool)isInteractive;
- (unsigned long long)itemIndex;
- (void)setAppearState:(unsigned long long)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setZoomingImageView:(id)arg1;
- (id)zoomingImageView;

@end
