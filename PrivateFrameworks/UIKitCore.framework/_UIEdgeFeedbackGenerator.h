/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIEdgeFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {
    long long  _axis;
    bool  _closeToEdge;
    double  _closeToEdgeUpdateTime;
    double  _distance;
    double  _extentBeyondDistance;
    _UIFeedbackEngine * _feedbackEngine;
    long long  _lastState;
    double  _lastValueUpdateTime;
    bool  _playedOvershotThresholdFeedback;
    _UIFeedback<_UIFeedbackContinuousPlayable> * _playingContinuousFeedback;
    double  _previousValue;
    double  _previousValueUpdateTime;
    long long  _state;
    double  _value;
    double  _velocity;
}

@property (nonatomic) long long axis;
@property (getter=_isCloseToEdge, setter=_setCloseToEdge:, nonatomic) bool closeToEdge;
@property (getter=_closeToEdgeUpdateTime, setter=_setCloseToEdgeUpdateTime:, nonatomic) double closeToEdgeUpdateTime;
@property (nonatomic) double distance;
@property (getter=_edgeConfiguration, nonatomic, readonly) _UIEdgeFeedbackGeneratorConfiguration *edgeConfiguration;
@property (getter=_effectiveDistance, nonatomic, readonly) double effectiveDistance;
@property (nonatomic) double extentBeyondDistance;
@property (getter=_lastState, setter=_setLastState:, nonatomic) long long lastState;
@property (getter=_lastValueUpdateTime, setter=_setLastValueUpdateTime:, nonatomic) double lastValueUpdateTime;
@property (getter=_isOvershot, nonatomic, readonly) bool overshot;
@property (getter=_percentBeyondDistance, nonatomic, readonly) float percentBeyondDistance;
@property (getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:, nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;
@property (getter=_previousValue, setter=_setPreviousValue:, nonatomic) double previousValue;
@property (getter=_previousValueUpdateTime, setter=_setPreviousValueUpdateTime:, nonatomic) double previousValueUpdateTime;
@property (getter=_state, setter=_setState:, nonatomic) long long state;
@property (getter=_value, setter=_setValue:, nonatomic) double value;
@property (getter=_velocity, setter=_setVelocity:, nonatomic) double velocity;

+ (Class)_configurationClass;

- (void).cxx_destruct;
- (void)_animationEnded;
- (void)_animationStarted;
- (void)_animationStartedUsingTimeout:(bool)arg1;
- (void)_cancelStopAnimatingTimeout;
- (double)_closeToEdgeUpdateTime;
- (void)_deactivate;
- (id)_edgeConfiguration;
- (double)_effectiveDistance;
- (bool)_isCloseToEdge;
- (bool)_isOvershot;
- (long long)_lastState;
- (double)_lastValueUpdateTime;
- (float)_percentBeyondDistance;
- (id)_playingContinuousFeedback;
- (void)_positionUpdated:(double)arg1 withVelocity:(double)arg2;
- (double)_previousValue;
- (double)_previousValueUpdateTime;
- (void)_setCloseToEdge:(bool)arg1;
- (void)_setCloseToEdgeUpdateTime:(double)arg1;
- (void)_setLastState:(long long)arg1;
- (void)_setLastValueUpdateTime:(double)arg1;
- (void)_setPlayingContinuousFeedback:(id)arg1;
- (void)_setPreviousValue:(double)arg1;
- (void)_setPreviousValueUpdateTime:(double)arg1;
- (void)_setState:(long long)arg1;
- (void)_setValue:(double)arg1;
- (void)_setVelocity:(double)arg1;
- (long long)_state;
- (id)_stats_key;
- (void)_stopAnimatingWithTimeout:(double)arg1;
- (void)_updateCloseToEdge;
- (double)_value;
- (bool)_valueIsOvershot:(double)arg1;
- (double)_velocity;
- (long long)axis;
- (double)distance;
- (double)extentBeyondDistance;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (void)positionUpdated:(double)arg1;
- (void)setAxis:(long long)arg1;
- (void)setDistance:(double)arg1;
- (void)setExtentBeyondDistance:(double)arg1;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end
