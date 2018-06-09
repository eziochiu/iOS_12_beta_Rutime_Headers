/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUSlideViewAnimator : NSObject {
    bool  _animating;
    NUAnimationFactory * _animationFactory;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _duration;
    CAMediaTimingFunction * _mediaTimingFunction;
    double  _translateBoundsPadding;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, retain) NUAnimationFactory *animationFactory;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double duration;
@property (nonatomic, retain) CAMediaTimingFunction *mediaTimingFunction;
@property (nonatomic) double translateBoundsPadding;

- (void).cxx_destruct;
- (id)animationFactory;
- (unsigned long long)animationOptionsForAnimationFactory:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)duration;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })fromViewTransformForDirection:(unsigned long long)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (id)mediaTimingFunction;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationFactory:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDuration:(double)arg1;
- (void)setMediaTimingFunction:(id)arg1;
- (void)setTranslateBoundsPadding:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })toViewTransformForDirection:(unsigned long long)arg1;
- (double)translateBoundsPadding;
- (void)translateFromView:(id)arg1 toView:(id)arg2 direction:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end
