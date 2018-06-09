/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStageLightAnimator : NSObject {
    unsigned long long  __appearingAnimationCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _circleBaseFrame;
    CALayer * _circleLayer;
    CAGradientLayer * _gradientLayer;
    unsigned long long  _state;
}

@property (getter=_isAppearing, nonatomic, readonly) bool _appearing;
@property (setter=_setAppearingAnimationCount:, nonatomic) unsigned long long _appearingAnimationCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } circleBaseFrame;
@property (nonatomic, readonly) CALayer *circleLayer;
@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_animateAppearing;
- (void)_animateBounceIfNeeded;
- (void)_animateCircleFromGeometry:(struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg1 toGeometry:(struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3 timing:(id)arg4 repeats:(bool)arg5 completion:(id /* block */)arg6;
- (void)_animateCircleGeometry:(struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(bool)arg5 completion:(id /* block */)arg6;
- (void)_animateCircleToGeometry:(struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg1 duration:(double)arg2 timing:(id)arg3 completion:(id /* block */)arg4;
- (void)_animateGradientFromProperties:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 toProperties:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg2 duration:(double)arg3 timing:(id)arg4 repeats:(bool)arg5;
- (void)_animateGradientProperties:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; }*)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(bool)arg5;
- (void)_animateGradientToProperties:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 duration:(double)arg2 timing:(id)arg3;
- (void)_animateHidden;
- (void)_animateSearchingIfNeededFromState:(unsigned long long)arg1;
- (unsigned long long)_appearingAnimationCount;
- (struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })_circleGeometryForState:(unsigned long long)arg1;
- (double)_circleLineWidth;
- (struct { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })_currentCircleGeometry;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; })_currentGradientProperties;
- (void)_didFinishAppearing;
- (struct { double x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })_gradientGeometryForState:(unsigned long long)arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; })_gradientPropertiesForGeometry:(struct { double x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (bool)_isAppearing;
- (void)_setAppearingAnimationCount:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circleBaseFrame;
- (id)circleLayer;
- (id)gradientLayer;
- (id)initWithGradientLayer:(id)arg1 circleLayer:(id)arg2;
- (void)setCircleBaseFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCircleBaseFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
