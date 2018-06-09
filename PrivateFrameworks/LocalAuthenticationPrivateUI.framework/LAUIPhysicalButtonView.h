/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUIPhysicalButtonView : UIView {
    bool  _animating;
    double  _animationLength;
    UIView * _buttonView;
    UIView * _containerView;
    <UICoordinateSpace> * _coordinateSpace;
    unsigned int  _edge;
    <UICoordinateSpace> * _fixedCoordinateSpace;
    NSString * _instruction;
    UILabel * _instructionLabel;
    bool  _onScreen;
    NSString * _periodicAnimationKey;
    long long  _style;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, copy) NSString *instruction;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (void)_animateWithLength:(double)arg1;
- (void)_animateWithLength:(double)arg1 delay:(double)arg2;
- (void)_beginAnimationIfNecessary;
- (void)_beginAnimationIfNecessaryWithDelay:(double)arg1;
- (void)_endAnimationIfNecessary;
- (void)_removePeriodicAnimationForKey:(id)arg1 fromLayer:(id)arg2;
- (void)_setOnScreen:(bool)arg1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (id)instruction;
- (bool)isAnimating;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAnimating:(bool)arg1;
- (void)setInstruction:(id)arg1;
- (long long)style;
- (void)updateFrame;

@end
