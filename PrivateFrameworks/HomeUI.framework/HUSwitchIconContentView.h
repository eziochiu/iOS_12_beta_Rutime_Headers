/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSwitchIconContentView : HUPrimaryStateIconContentView {
    HUVisualEffectContainerView * _frameContainerView;
    HUShapeLayerView * _frameView;
    UIViewPropertyAnimator * _switchAnimator;
    UIView * _switchBackgroundView;
    HUVisualEffectContainerView * _switchBottomIndicatorContainerView;
    HUShapeLayerView * _switchBottomIndicatorView;
    HUVisualEffectContainerView * _switchTopIndicatorContainerView;
    HUShapeLayerView * _switchTopIndicatorView;
    UIView * _visibleSwitchView;
}

@property (nonatomic, retain) HUVisualEffectContainerView *frameContainerView;
@property (nonatomic, retain) HUShapeLayerView *frameView;
@property (nonatomic, retain) UIViewPropertyAnimator *switchAnimator;
@property (nonatomic, retain) UIView *switchBackgroundView;
@property (nonatomic, retain) HUVisualEffectContainerView *switchBottomIndicatorContainerView;
@property (nonatomic, retain) HUShapeLayerView *switchBottomIndicatorView;
@property (nonatomic, retain) HUVisualEffectContainerView *switchTopIndicatorContainerView;
@property (nonatomic, retain) HUShapeLayerView *switchTopIndicatorView;
@property (nonatomic, retain) UIView *visibleSwitchView;

- (void).cxx_destruct;
- (void)_setIconState:(long long)arg1 animated:(bool)arg2;
- (id)frameContainerView;
- (id)frameView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)managedVisualEffectViews;
- (void)setFrameContainerView:(id)arg1;
- (void)setFrameView:(id)arg1;
- (void)setSwitchAnimator:(id)arg1;
- (void)setSwitchBackgroundView:(id)arg1;
- (void)setSwitchBottomIndicatorContainerView:(id)arg1;
- (void)setSwitchBottomIndicatorView:(id)arg1;
- (void)setSwitchTopIndicatorContainerView:(id)arg1;
- (void)setSwitchTopIndicatorView:(id)arg1;
- (void)setVisibleSwitchView:(id)arg1;
- (id)switchAnimator;
- (id)switchBackgroundView;
- (id)switchBottomIndicatorContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })switchBottomIndicatorFrameForVisibleSwitchBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 switchOn:(bool)arg2;
- (id)switchBottomIndicatorView;
- (id)switchTopIndicatorContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })switchTopIndicatorFrameForVisibleSwitchBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 switchOn:(bool)arg2;
- (id)switchTopIndicatorView;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(bool)arg3;
- (id)visibleSwitchView;
- (bool)wantsManagedVibrancyEffect;

@end
