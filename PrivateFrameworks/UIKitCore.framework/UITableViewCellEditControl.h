/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITableViewCellEditControl : UIControl {
    UITableViewCell * _cell;
    double  _focalHeight;
    double  _focalY;
    UIImageView * _imageView;
    _UITableViewCellEditControlMinusView * _minusView;
    unsigned int  _reserved;
    unsigned int  _rotated;
    unsigned int  _rotating;
    UIImageView * _shadowView;
    unsigned int  _style;
}

@property (getter=isRotated, nonatomic) bool rotated;
@property (nonatomic, readonly) bool wantsImageShadow;
@property (nonatomic, readonly) bool wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_currentImage;
- (id)_deleteImage:(double)arg1;
- (id)_deleteImageBackground:(double)arg1;
- (id)_imageView;
- (id)_insertImage:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_minusRect;
- (id)_minusView;
- (id)_multiSelectHighlightedImage;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_multiselectColorChanged;
- (id)_shadowImage;
- (void)_toggleRotate;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(bool)arg2;
- (void)_updateImageView;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })defaultSize;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (bool)isRotated;
- (bool)isRotating;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRotated:(bool)arg1;
- (void)setRotated:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (bool)wantsImageShadow;
- (bool)wantsMaskingWhileAnimatingDisabled;

@end
