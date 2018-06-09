/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwitchModernVisualElement : UISwitchVisualElement <UIGestureRecognizerDelegate, UISwitchMVEGestureTrackingSessionElement> {
    UISwitchMVEGestureTrackingSession * _gestureTrackingSession;
    bool  _isAlwaysAccessible;
    UIImageView * _knobView;
    UIView * _leftSwitchWellContainerView;
    UIView * _leftSwitchWellView;
    UILongPressGestureRecognizer * _longPress;
    UIImage * _offImage;
    bool  _on;
    UIImage * _onImage;
    UIColor * _onTintColor;
    UIPanGestureRecognizer * _pan;
    bool  _pressed;
    bool  _showsOnOffLabel;
    UIView * _switchWellContainerView;
    UIView * _switchWellImageViewContainer;
    UIImageView * _switchWellOffImageView;
    UIImageView * _switchWellOnImageView;
    UIView * _switchWellView;
    UIColor * _thumbTintColor;
    UIColor * _tintColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UISwitchMVEGestureTrackingSession *gestureTrackingSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPress;
@property (nonatomic, retain) UIImage *offImage;
@property (nonatomic) bool on;
@property (nonatomic, retain) UIImage *onImage;
@property (nonatomic, retain) UIPanGestureRecognizer *pan;
@property (nonatomic) bool pressed;
@property (nonatomic) bool showsOnOffLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *thumbTintColor;

+ (struct CGSize { double x1; double x2; })preferredContentSize;

- (void).cxx_destruct;
- (id)_accessibleOffImage;
- (id)_accessibleOnImage;
- (id)_defaultOnTintColor;
- (id)_effectiveOffImage;
- (id)_effectiveOffImageTintColor;
- (id)_effectiveOffTextColor;
- (id)_effectiveOnImage;
- (id)_effectiveOnImageTintColor;
- (id)_effectiveOnTintColor;
- (id)_effectiveThumbImage;
- (id)_effectiveTintColor;
- (bool)_feedbackEnabled;
- (void)_handleLongPress:(id)arg1;
- (void)_handleLongPressWithGestureLocationInBounds:(struct CGPoint { double x1; double x2; })arg1 gestureState:(long long)arg2;
- (void)_handlePan:(id)arg1;
- (void)_handlePanWithGestureLocationInBounds:(struct CGPoint { double x1; double x2; })arg1 horizontalTranslation:(double)arg2 gestureState:(long long)arg3 resetPanTranslationBlock:(id /* block */)arg4;
- (void)_invalidateControl;
- (void)_invalidateKnob;
- (void)_invalidateOnOffImages;
- (void)_invalidateWell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_knobBoundsPressed:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_knobPositionOn:(bool)arg1 pressed:(bool)arg2 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_labelOpacityAnimation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftSwitchWellContainerBoundsOn:(bool)arg1 pressed:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_leftSwitchWellContainerPositionOn:(bool)arg1 pressed:(bool)arg2;
- (id)_maskLayerForImageViews;
- (struct CGPoint { double x1; double x2; })_offImagePosition;
- (struct CGPoint { double x1; double x2; })_onImagePosition;
- (void)_orderSubviews;
- (void)_setPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3 shouldAnimateLabels:(bool)arg4 completion:(id /* block */)arg5;
- (id)_settings;
- (bool)_shouldUseLightTintOverColor:(id)arg1;
- (id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(bool)arg4;
- (id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(bool)arg3;
- (id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_switchWellContainerBoundsOn:(bool)arg1 pressed:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_switchWellContainerPositionOn:(bool)arg1 pressed:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_switchWellPositionOn:(bool)arg1 pressed:(bool)arg2;
- (void)_transitionImagesToPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3;
- (void)_transitionKnobToOn:(bool)arg1 animated:(bool)arg2;
- (void)_transitionKnobToPressed:(bool)arg1 animated:(bool)arg2;
- (void)_transitionKnobToPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3;
- (void)_transitionWellViewToOn:(bool)arg1 animated:(bool)arg2;
- (void)_transitionWellViewToPressed:(bool)arg1 animated:(bool)arg2;
- (void)_updateDisplayAnimated:(bool)arg1;
- (double)_wellBorderWidthPressed:(bool)arg1 on:(bool)arg2;
- (struct CGColor { }*)_wellColorOn:(bool)arg1;
- (bool)displayedOn;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureTrackingSession;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interactiveChangeToDisplayedOn:(bool)arg1;
- (id)longPress;
- (id)offImage;
- (bool)on;
- (id)onImage;
- (id)pan;
- (void)performStateChangeFeedback;
- (bool)pressed;
- (void)sendStateChangeActions;
- (void)setGestureTrackingSession:(id)arg1;
- (void)setLongPress:(id)arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setPan:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowsOnOffLabel:(bool)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (bool)showsOnOffLabel;
- (id)thumbTintColor;

@end
