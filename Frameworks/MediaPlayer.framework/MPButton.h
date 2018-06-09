/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitRectInsets;
    bool  _hitTestDebugEnabled;
    UIView * _hitTestDebugView;
    double  _holdDelayInterval;
    unsigned int  _holding;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (nonatomic) bool hitTestDebugEnabled;
@property (nonatomic) double holdDelayInterval;
@property (getter=isHolding, nonatomic, readonly) bool holding;

+ (id)easyTouchButtonWithType:(long long)arg1;
+ (double)easyTouchDefaultCharge;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })easyTouchDefaultHitRectInsets;

- (void).cxx_destruct;
- (void)_delayedTriggerHold;
- (void)_handleTouchCancel;
- (void)_handleTouchDown;
- (void)_handleTouchUp;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (bool)hitTestDebugEnabled;
- (double)holdDelayInterval;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHolding;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHitRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHitTestDebugEnabled:(bool)arg1;
- (void)setHoldDelayInterval:(double)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
