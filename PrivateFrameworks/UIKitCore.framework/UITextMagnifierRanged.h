/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextMagnifierRanged : UITextMagnifier {
    struct CGPoint { 
        double x; 
        double y; 
    }  _delayedAnimationPoint;
    long long  _delayedAnimationType;
    bool  _isAnimating;
    bool  _isHorizontal;
    double  _magnifierOffsetFromTouch;
    double  _touchOffsetFromMagnificationPoint;
}

@property (nonatomic) bool isHorizontal;

+ (id)activeRangedMagnifier;
+ (id)sharedRangedMagnifier;

- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4 animated:(bool)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectClosestToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })clipPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (int)horizontalMovement;
- (int)horizontalMovementAtTime:(double)arg1;
- (id)initWithFrame;
- (bool)isHorizontal;
- (double)offsetFromMagnificationPoint;
- (void)remove;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setIsHorizontal:(bool)arg1;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })snappedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopMagnifying:(bool)arg1;
- (bool)terminalPointPlacedCarefully;
- (void)updateFrame;
- (bool)wasPlacedCarefullyAtTime:(double)arg1;
- (void)zoomDownAnimation;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;

@end
