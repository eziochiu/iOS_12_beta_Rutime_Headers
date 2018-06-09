/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwitchiOS6VisualElement : UISwitchVisualElement {
    bool  _animating;
    CALayer * _backgroundLayer;
    UIImage * _colorMask;
    UIImageView * _colorView;
    UIImageView * _idleImageView;
    UIView * _interactiveView;
    UIImageView * _labelView;
    UIImage * _offImage;
    bool  _on;
    UIImage * _onImage;
    UIColor * _onTintColor;
    UIPanGestureRecognizer * _panGesture;
    double  _position;
    bool  _pressed;
    bool  _sendAction;
    UIImage * _shapeMask;
    UIImage * _shapeShadow;
    UITapGestureRecognizer * _tapGesture;
    UIImage * _thumb;
    UIImage * _thumbPressed;
    UIColor * _thumbTintColor;
    UIImageView * _thumbView;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIImage *offImage;
@property (nonatomic) bool on;
@property (nonatomic, retain) UIImage *onImage;
@property (nonatomic, retain) UIColor *onTintColor;
@property (nonatomic, retain) UIPanGestureRecognizer *panGesture;
@property (nonatomic, retain) UITapGestureRecognizer *tapGesture;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)_defaultOnTintColor;
+ (struct CGSize { double x1; double x2; })_preferredContentSizeForLinkedOnVersion:(unsigned int)arg1;
+ (struct CGSize { double x1; double x2; })preferredContentSize;

- (void).cxx_destruct;
- (void)_buildControl;
- (void)_cleanUpAfterAnimating;
- (id)_colorImage;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (id)_labelImage;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_prepareForInteraction;
- (void)_prepareGestureRecognizers;
- (void)_sendActions;
- (void)_setOn:(bool)arg1 animated:(bool)arg2 force:(bool)arg3;
- (void)_setOnTintColor:(id)arg1;
- (void)_setPressed:(bool)arg1;
- (void)_setPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setProgress:(double)arg1;
- (void)_setProgress:(double)arg1 animated:(bool)arg2 withDuration:(double)arg3 force:(bool)arg4 sendAction:(bool)arg5;
- (void)_setupBackgroundLayer;
- (void)_setupThumbImages;
- (id)_snapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)offImage;
- (bool)on;
- (id)onImage;
- (id)onTintColor;
- (id)panGesture;
- (void)setAlpha:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tapGesture;
- (id)thumbTintColor;
- (id)tintColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
