/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVButtonLockup : UIView {
    long long  _backdropStyle;
    _TVVisualEffectView * _backdropView;
    bool  _disabled;
    _UIFloatingContentView * _floatingView;
    CALayer * _imageMask;
    _TVImageView * _imageView;
    UIView * _overlayView;
    UILabel * _textMask;
    UILabel * _textView;
    UILabel * _titleView;
    long long  _vibrantLabelThemeOverride;
    IKViewElement * _viewElement;
}

@property (nonatomic, readonly) long long backdropStyle;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) UILabel *titleView;
@property (nonatomic) long long vibrantLabelThemeOverride;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (long long)_focusedSound;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)_updateForFocusStateChange;
- (void)_updateImageMask;
- (void)_updateShadowForLabel:(id)arg1 inFocus:(bool)arg2;
- (long long)backdropStyle;
- (bool)canBecomeFocused;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blurEffectStyle:(long long)arg2 groupName:(id)arg3;
- (bool)isDisabled;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setDisabled:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setText:(id)arg1 minimumScale:(double)arg2 maxNumberOfLines:(unsigned long long)arg3;
- (void)setTitleView:(id)arg1;
- (void)setVibrantLabelThemeOverride:(long long)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)vibrantLabelThemeOverride;
- (id)viewElement;

@end
