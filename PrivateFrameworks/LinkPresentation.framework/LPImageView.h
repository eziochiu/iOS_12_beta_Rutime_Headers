/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPImageView : LPComponentView {
    LPImage * _image;
    UIView * _imageView;
    UIView * _overlayView;
    LPImageViewStyle * _style;
}

- (void).cxx_destruct;
- (id)_createImageViewWithImage:(id)arg1;
- (id)_createOverlayViewWithOpacity:(double)arg1;
- (void)componentViewDidMoveToWindow;
- (struct CGSize { double x1; double x2; })imageSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithImage:(id)arg1 style:(id)arg2;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
