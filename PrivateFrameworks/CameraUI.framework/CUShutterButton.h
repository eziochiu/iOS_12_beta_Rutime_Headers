/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CUShutterButton : UIButton {
    UIView * __innerView;
    UIImageView * __outerImageView;
    CAMShutterButtonRingView * __outerView;
    UIImageView * __spinnerView;
    UIView * __stopModeBackground;
    CAMTimelapseShutterRingView * __timelapseOuterView;
    UIColor * _contentColor;
    <CAMShutterButtonDelegate> * _delegate;
    long long  _layoutStyle;
    long long  _mode;
    bool  _showDisabled;
    struct CAMShutterButtonSpec { 
        double outerRingDiameter; 
        double outerRingStrokeWidth; 
        double stopSquareSideLength; 
        double stopSquareCornerRadius; 
        double interRingSpacing; 
    }  _spec;
    bool  _spinning;
    UIColor * _stopModeBackgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIView *_innerView;
@property (nonatomic, readonly) UIImageView *_outerImageView;
@property (nonatomic, readonly) CAMShutterButtonRingView *_outerView;
@property (nonatomic, retain) UIImageView *_spinnerView;
@property (nonatomic, retain) UIView *_stopModeBackground;
@property (nonatomic, readonly) CAMTimelapseShutterRingView *_timelapseOuterView;
@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic) <CAMShutterButtonDelegate> *delegate;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long mode;
@property (nonatomic) bool showDisabled;
@property (nonatomic) struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; } spec;
@property (getter=isSpinning, nonatomic) bool spinning;
@property (nonatomic, retain) UIColor *stopModeBackgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

+ (id)shutterButton;
+ (id)shutterButtonWithLayoutStyle:(long long)arg1;
+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })arg1;
+ (id)smallShutterButton;
+ (id)smallShutterButtonWithLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_commonCAMShutterButtonInitializationWithLayoutStyle:(long long)arg1 spec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })arg2;
- (id)_contentColor;
- (double)_cornerRadiusForMode:(long long)arg1;
- (id)_innerCircleColorForMode:(long long)arg1 spinning:(bool)arg2;
- (double)_innerCircleDiameter;
- (id)_innerView;
- (bool)_isSpinningSupportedForLayoutStyle:(long long)arg1;
- (bool)_isStopMode:(long long)arg1;
- (id)_outerImageForMode:(long long)arg1 layoutStyle:(long long)arg2;
- (id)_outerImageView;
- (id)_outerView;
- (void)_performHighlightAnimation;
- (void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(bool)arg3;
- (bool)_shouldShowBackgroundViewForMode:(long long)arg1;
- (bool)_shouldShowContrastBorderForMode:(long long)arg1 layoutStyle:(long long)arg2;
- (bool)_shouldUseImageViewForMode:(long long)arg1;
- (bool)_shouldUseTimelapseOuterViewForMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })_sizeForMode:(long long)arg1;
- (id)_spinnerView;
- (id)_stopModeBackground;
- (id)_timelapseOuterView;
- (void)_updateOuterAndInnerLayers;
- (void)_updateSpinningAnimations;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)contentColor;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutStyle:(long long)arg2 spec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSpinning;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)mode;
- (void)setContentColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setMode:(long long)arg1 animated:(bool)arg2;
- (void)setShowDisabled:(bool)arg1;
- (void)setSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })arg1;
- (void)setSpinning:(bool)arg1;
- (void)setStopModeBackgroundColor:(id)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)set_spinnerView:(id)arg1;
- (void)set_stopModeBackground:(id)arg1;
- (bool)showDisabled;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })spec;
- (id)stopModeBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end
