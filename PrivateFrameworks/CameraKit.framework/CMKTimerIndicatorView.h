/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimerIndicatorView : UIView {
    CMKAnimationDelegate * __animationDelegate;
    UILabel * __countdownLabel;
    long long  __deferredLabelOrientation;
    UIView * __dimmingView;
    long long  __labelOrientation;
    bool  __performingStyleAnimation;
    long long  __remainingTicks;
    long long  __startingTicks;
    long long  _style;
}

@property (nonatomic, readonly) CMKAnimationDelegate *_animationDelegate;
@property (nonatomic, readonly) UILabel *_countdownLabel;
@property (setter=_setDeferredOrientation:, nonatomic) long long _deferredLabelOrientation;
@property (nonatomic, readonly) UIView *_dimmingView;
@property (setter=_setLabelOrientation:, nonatomic) long long _labelOrientation;
@property (getter=_isPerformingStyleAnimation, setter=_setPerformingStyleAnimation:, nonatomic) bool _performingStyleAnimation;
@property (nonatomic, readonly) long long _remainingTicks;
@property (nonatomic, readonly) long long _startingTicks;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_addDecrementAnimationForTick:(long long)arg1;
- (void)_addDimmingAnimationForTick:(long long)arg1;
- (id)_animationDelegate;
- (void)_commonCMKTimerIndicatorViewInitialization;
- (id)_countdownLabel;
- (id)_decrementAnimationForTick:(long long)arg1;
- (long long)_deferredLabelOrientation;
- (id)_dimmingAnimationForTick:(long long)arg1;
- (id)_dimmingView;
- (id)_finalDimmingAnimation;
- (id)_fontForStyle:(long long)arg1;
- (void)_handleOrientationChange:(long long)arg1;
- (bool)_isPerformingStyleAnimation;
- (long long)_labelOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_landscapeSwapBoundsCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_layoutCountdownLabelForLargeStyle;
- (void)_layoutCountdownLabelForSmallStyle;
- (void)_layoutCountdownLabelForStyle:(long long)arg1;
- (long long)_remainingTicks;
- (void)_setDeferredOrientation:(long long)arg1;
- (void)_setLabelOrientation:(long long)arg1;
- (void)_setPerformingStyleAnimation:(bool)arg1;
- (long long)_startingTicks;
- (void)_transitionDimmingViewFromStyle:(long long)arg1;
- (void)_updateCountdownLabelWithTicksRemaining;
- (void)_updateFromChangeToStyle:(long long)arg1 animated:(bool)arg2;
- (void)cam_rotateWithDeviceOrientation:(long long)arg1 animated:(bool)arg2;
- (void)decrement;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetWithNumberOfTicks:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (void)startCountdownWithAnimationDelegate:(id)arg1;
- (void)stopCountdown;
- (long long)style;

@end
