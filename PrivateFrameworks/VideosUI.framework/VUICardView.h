/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUICardView : UIView {
    TVImageElement * _appImageElement;
    _TVImageView * _appImageView;
    NSString * _debugString;
    bool  _hasAppImage;
    TVImageElement * _imageElement;
    _TVImageView * _imageView;
    NSArray * _labelViews;
    VUICardViewLayoutFactory * _layoutFactory;
    UIView<VUIOverlayViewProtocol> * _overlayView;
}

@property (nonatomic, retain) TVImageElement *appImageElement;
@property (nonatomic, retain) _TVImageView *appImageView;
@property (nonatomic, copy) NSString *debugString;
@property (nonatomic) bool hasAppImage;
@property (nonatomic, retain) TVImageElement *imageElement;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, copy) NSArray *labelViews;
@property (nonatomic, readonly) VUICardViewLayoutFactory *layoutFactory;
@property (nonatomic, retain) UIView<VUIOverlayViewProtocol> *overlayView;

- (void).cxx_destruct;
- (void)_mainImageLoaded;
- (double)_textOffset;
- (id)appImageElement;
- (id)appImageView;
- (void)dealloc;
- (id)debugString;
- (bool)hasAppImage;
- (id)imageElement;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutFactory:(id)arg2;
- (id)labelViews;
- (id)layoutFactory;
- (void)layoutSubviews;
- (id)overlayView;
- (void)prepareForCellReuse;
- (void)setAppImageElement:(id)arg1;
- (void)setAppImageView:(id)arg1;
- (void)setDebugString:(id)arg1;
- (void)setHasAppImage:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageElement:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabelViews:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
