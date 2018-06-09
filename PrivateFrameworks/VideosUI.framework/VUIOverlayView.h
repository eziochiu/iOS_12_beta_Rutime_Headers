/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIOverlayView : UIView <VUIOverlayViewProtocol> {
    TVViewElement * _appImageElement;
    _TVImageView * _appImageView;
    UIImage * _backgroundImageForMaterialRendering;
    VUIOverlayLayout * _overlayLayout;
    _TVProgressView * _progressView;
    TVViewElement * _progressViewElement;
    TVViewElement * _viewElement;
}

@property (nonatomic, retain) TVViewElement *appImageElement;
@property (nonatomic, retain) _TVImageView *appImageView;
@property (nonatomic, retain) UIImage *backgroundImageForMaterialRendering;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIOverlayLayout *overlayLayout;
@property (nonatomic, retain) _TVProgressView *progressView;
@property (nonatomic, retain) TVViewElement *progressViewElement;
@property (readonly) Class superclass;
@property (nonatomic, retain) TVViewElement *viewElement;

+ (id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;

- (void).cxx_destruct;
- (id)appImageElement;
- (id)appImageView;
- (id)backgroundImageForMaterialRendering;
- (void)backgroundImageSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)overlayLayout;
- (id)progressView;
- (id)progressViewElement;
- (void)reset;
- (void)setAppImageElement:(id)arg1;
- (void)setAppImageView:(id)arg1;
- (void)setBackgroundImageForMaterialRendering:(id)arg1;
- (void)setOverlayLayout:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setProgressViewElement:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)viewElement;

@end
