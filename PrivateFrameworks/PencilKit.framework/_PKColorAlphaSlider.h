/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKColorAlphaSlider : UIControl {
    _PKCheckerGridView * _alphaGridView;
    CAGradientLayer * _alphaGridViewMaskLayer;
    UIColor * _color;
    double  _colorAlpha;
    UIView * _colorView;
    CAGradientLayer * _colorViewMaskLayer;
    <_PKColorAlphaSliderDelegate> * _delegate;
    double  _maxAlpha;
    double  _minAlpha;
    _PKSliderKnobView * _sliderKnobView;
}

@property (nonatomic, retain) _PKCheckerGridView *alphaGridView;
@property (nonatomic, retain) CAGradientLayer *alphaGridViewMaskLayer;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double colorAlpha;
@property (nonatomic, retain) UIView *colorView;
@property (nonatomic, retain) CAGradientLayer *colorViewMaskLayer;
@property (nonatomic) <_PKColorAlphaSliderDelegate> *delegate;
@property (nonatomic) double maxAlpha;
@property (nonatomic) double minAlpha;
@property (nonatomic, retain) _PKSliderKnobView *sliderKnobView;

+ (void)_layoutGradientMaskLayer:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isReversed:(bool)arg3;
+ (id)rgbaColorFromColorIfPossible:(id)arg1;

- (void).cxx_destruct;
- (double)_sliderKnobViewWidth;
- (id)alphaGridView;
- (id)alphaGridViewMaskLayer;
- (id)color;
- (double)colorAlpha;
- (double)colorAlphaForSliderKnobXPosition:(double)arg1;
- (id)colorView;
- (id)colorViewMaskLayer;
- (id)delegate;
- (void)didPanSliderKnob:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRTLLanguage;
- (void)layoutSubviews;
- (double)maxAlpha;
- (double)minAlpha;
- (void)setAlphaGridView:(id)arg1;
- (void)setAlphaGridViewMaskLayer:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorAlpha:(double)arg1;
- (void)setColorView:(id)arg1;
- (void)setColorViewMaskLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxAlpha:(double)arg1;
- (void)setMinAlpha:(double)arg1;
- (void)setSliderKnobView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sliderKnobView;
- (double)sliderKnobXPositionForColorAlpha:(double)arg1;

@end
