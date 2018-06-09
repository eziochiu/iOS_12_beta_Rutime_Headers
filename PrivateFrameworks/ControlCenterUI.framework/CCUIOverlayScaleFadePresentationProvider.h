/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIOverlayScaleFadePresentationProvider : NSObject <CCUIOverlayPresentationProvider> {
    <CCUIOverlayMetricsProvider> * _metricsProvider;
    <CCUIOverlayViewProvider> * _viewProvider;
}

@property (nonatomic, readonly) bool allowHotPocketDuringTransition;
@property (nonatomic, readonly) unsigned long long backgroundMaterialOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) <CCUIOverlayFlickGestureBehavior> *flickGestureBehavior;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerMode;
@property (nonatomic) <CCUIOverlayMetricsProvider> *metricsProvider;
@property (getter=isPanDismissalAvailable, nonatomic, readonly) bool panDismissalAvailable;
@property (readonly) Class superclass;
@property (nonatomic) <CCUIOverlayViewProvider> *viewProvider;

+ (id)_baseC2AnimationParametersForTransitionState:(id)arg1;

- (void).cxx_destruct;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addContainerAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addContainerTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentedViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusLabelViewFrame;
- (bool)allowHotPocketDuringTransition;
- (id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (bool)backdropViewShouldUseAlphaTransformer;
- (unsigned long long)backgroundMaterialOptions;
- (id /* block */)customBackdropScaleAdjustment;
- (unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(struct CGPoint { double x1; double x2; })arg2 gestureVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (bool)isPanDismissalAvailable;
- (void)layoutViews;
- (id)metricsProvider;
- (void)setMetricsProvider:(id)arg1;
- (void)setViewProvider:(id)arg1;
- (bool)tapAllowsDismissalForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)transitionStateForType:(unsigned long long)arg1 interactive:(bool)arg2 translation:(struct CGPoint { double x1; double x2; })arg3;
- (id)viewProvider;

@end
