/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseShutterRingView : UIView {
    CALayer * __largeTickLayer;
    CAReplicatorLayer * __largeTickReplicatorLayer;
    CALayer * __smallTickLayer;
    CAReplicatorLayer * __smallTickReplicatorLayer;
    CALayer * __timerHandLayer;
    CALayer * __timerHandParentLayer;
    bool  _animating;
    long long  _layoutStyle;
}

@property (nonatomic, readonly) CALayer *_largeTickLayer;
@property (nonatomic, readonly) CAReplicatorLayer *_largeTickReplicatorLayer;
@property (nonatomic, readonly) CALayer *_smallTickLayer;
@property (nonatomic, readonly) CAReplicatorLayer *_smallTickReplicatorLayer;
@property (nonatomic, readonly) CALayer *_timerHandLayer;
@property (nonatomic, readonly) CALayer *_timerHandParentLayer;
@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, readonly) long long layoutStyle;

- (void).cxx_destruct;
- (void)_addStartAnimations;
- (void)_addStopAnimations;
- (void)_commonCAMTimelapseShutterRingViewInitializationWithLayoutStyle:(long long)arg1;
- (id)_largeTickLayer;
- (id)_largeTickReplicatorLayer;
- (struct CGSize { double x1; double x2; })_largeTickSizeForLayoutStyle:(long long)arg1;
- (void)_removeStartAnimations;
- (void)_removeStopAnimations;
- (double)_rotationZFromTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (bool)_shouldUseAnimations;
- (id)_smallTickLayer;
- (id)_smallTickReplicatorLayer;
- (struct CGSize { double x1; double x2; })_smallTickSizeForLayoutStyle:(long long)arg1;
- (void)_startAnimating;
- (void)_stopAnimating;
- (double)_tickRadiusForTickSize:(struct CGSize { double x1; double x2; })arg1 ringSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_timerHandLayer;
- (id)_timerHandParentLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (bool)isAnimating;
- (long long)layoutStyle;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setAnimating:(bool)arg1;

@end
