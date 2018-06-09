/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITouchForceGestureRecognizer : UIGestureRecognizer {
    double  _allowableMovement;
    double  _automaticTouchForce;
    double  _automaticTouchForceDuration;
    bool  _automaticallyIncreaseTouchForce;
    id /* block */  _configurationBlock;
    CADisplayLink * _continuousEvaluationDisplayLink;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentCentroidOfTouches;
    double  _currentTouchForce;
    NSMutableSet * _currentTouches;
    unsigned long long  _eventTouchCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCentroidOfTouches;
    unsigned long long  _maximumNumberOfTouches;
    double  _minimumRequiredTouchForce;
    bool  _steady;
    double  _touchForce;
    double  _touchesBeganTimestamp;
    double  _velocity;
    _UIVelocityIntegrator * _velocityIntegrator;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic) double automaticTouchForce;
@property (nonatomic) double automaticTouchForceDuration;
@property (nonatomic, copy) id /* block */ configurationBlock;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) double minimumRequiredTouchForce;
@property (getter=isSteady, nonatomic) bool steady;
@property (nonatomic) double touchForce;
@property (nonatomic) double velocity;

+ (bool)_supportsTouchContinuation;

- (void).cxx_destruct;
- (void)_beginForContinuousEvaluationForTouches:(id)arg1;
- (void)_endContinuousEvaluation;
- (void)_endIfNeeded:(bool)arg1;
- (double)_evaluateAutomaticTouchForceForTimeInterval:(double)arg1 actualTouchForce:(double)arg2;
- (void)_evaluateTouches:(id)arg1 withEvent:(id)arg2;
- (void)_evaluateWithTouchForce:(double)arg1 centroidAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_hasExceededAllowableMovement;
- (bool)_hasExceededMaximumNumberOfTouches;
- (bool)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_updateTouchForce:(double)arg1;
- (bool)_validateHysteresis;
- (double)allowableMovement;
- (double)automaticTouchForce;
- (double)automaticTouchForceDuration;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id /* block */)configurationBlock;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isSteady;
- (unsigned long long)maximumNumberOfTouches;
- (double)minimumRequiredTouchForce;
- (void)reset;
- (void)setAllowableMovement:(double)arg1;
- (void)setAutomaticTouchForce:(double)arg1;
- (void)setAutomaticTouchForceDuration:(double)arg1;
- (void)setConfigurationBlock:(id /* block */)arg1;
- (void)setMaximumNumberOfTouches:(unsigned long long)arg1;
- (void)setMinimumRequiredTouchForce:(double)arg1;
- (void)setSteady:(bool)arg1;
- (void)setTouchForce:(double)arg1;
- (void)setVelocity:(double)arg1;
- (void)setView:(id)arg1;
- (double)touchForce;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)velocity;

@end
