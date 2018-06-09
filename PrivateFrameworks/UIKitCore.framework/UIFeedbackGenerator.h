/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIFeedbackGenerator : NSObject {
    bool  _activated;
    long long  _activationCount;
    NSObject<OS_dispatch_source> * _autoDeactivateTimer;
    long long  _autoDeactivationCount;
    _UIFeedbackGeneratorConfiguration * _configuration;
    <UICoordinateSpace> * _coordinateSpace;
    double  _currentDelay;
    NSSet * _engines;
    long long  _externalActivationCount;
    id /* block */  _feedbackWarmingBlock;
    NSMutableDictionary * _preparationTimers;
    long long  _styleActivationCount;
    NSSet * _usedFeedbacks;
    bool  _usesCustomActivation;
}

@property (nonatomic, readonly) NSString *_stats_key;
@property (nonatomic) long long activationCount;
@property (getter=_isAutoDeactivated, nonatomic, readonly) bool autoDeactivated;
@property (getter=_autoDeactivationTimeout, nonatomic, readonly) double autoDeactivationTimeout;
@property (getter=_configuration, setter=_setConfiguration:, nonatomic, retain) _UIFeedbackGeneratorConfiguration *configuration;
@property (nonatomic) <UICoordinateSpace> *coordinateSpace;
@property (getter=_effectiveCoordinateSpace, nonatomic, readonly) <UICoordinateSpace> *effectiveCoordinateSpace;
@property (getter=_isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSSet *engines;
@property (nonatomic) long long externalActivationCount;
@property (getter=_isMuted, setter=_setMuted:, nonatomic) bool muted;
@property (nonatomic) bool usesCustomActivation;

+ (Class)_configurationClass;
+ (id)_defaultCoordinateSpace;
+ (void)_resetAutoDeactivateTimeout;
+ (void)_resetPreparationTimeouts;
+ (void)_setAutoDeactivateTimeout:(double)arg1;
+ (void)_setPreparationTimeout:(double)arg1 forStyle:(long long)arg2;
+ (void)_setRunningTests:(bool)arg1;
+ (id)behaviorWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
+ (id)behaviorWithCoordinateSpace:(id)arg1;

- (void).cxx_destruct;
- (void)__activateWithStyle:(long long)arg1 forFeedback:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)__deactivateWithStyle:(long long)arg1;
- (void)_activateWithStyle:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)_activated;
- (id)_activationCountStatistics;
- (id)_activationDurationStatistics;
- (id)_activationTimeOutCountStatistics;
- (void)_autoDeactivate;
- (double)_autoDeactivationTimeout;
- (void)_clientDidUpdateGeneratorWithSelector:(SEL)arg1;
- (id)_configuration;
- (void)_deactivateWithStyle:(long long)arg1;
- (void)_deactivated;
- (id)_effectiveCoordinateSpace;
- (void)_forceDeactivationForStyle:(long long)arg1;
- (bool)_isAutoDeactivated;
- (bool)_isEnabled;
- (bool)_isMuted;
- (long long)_outputMode;
- (id)_playCountStatistics;
- (void)_playFeedback:(id)arg1;
- (void)_playFeedback:(id)arg1 withMinimumIntervalPassed:(double)arg2 since:(double*)arg3 prefersRegularPace:(bool)arg4;
- (id)_preparationCountStatistics;
- (double)_preparationTimeoutForStyle:(long long)arg1;
- (id)_preparationTimerForStyle:(long long)arg1;
- (void)_prepareWithStyle:(long long)arg1;
- (void)_resetAutoDeactivationTimeout;
- (void)_scheduleFeedbackWarming;
- (void)_setConfiguration:(id)arg1;
- (void)_setMuted:(bool)arg1;
- (void)_setOutputMode:(long long)arg1;
- (void)_setPreparationTimer:(id)arg1 forStyle:(long long)arg2;
- (void)_setupAutoDeactivateTimer;
- (void)_setupEnginesIfNeededForFeedback:(id)arg1;
- (void)_setupForFeedback:(id)arg1;
- (void)_startFeedbackWarming;
- (id)_statsSuffix;
- (void)_stats_activationDidChangeTo:(bool)arg1;
- (void)_stats_activationTimedOut;
- (id)_stats_key;
- (void)_stats_playedFeedback;
- (void)_stats_prepared;
- (void)_stopAutoDeactivateTimer;
- (void)_stopFeedback:(id)arg1;
- (void)_stopFeedbackWarming;
- (void)_stopPreparationForAllStyles;
- (void)_stopPreparationForStyle:(long long)arg1;
- (void)_updatePreparationTimer:(id)arg1 withTimeout:(double)arg2;
- (void)activateWithCompletionBlock:(id /* block */)arg1;
- (long long)activationCount;
- (id)coordinateSpace;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)engines;
- (long long)externalActivationCount;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (id)initWithCoordinateSpace:(id)arg1;
- (bool)isActive;
- (void)performFeedbackWithDelay:(double)arg1 insideBlock:(id /* block */)arg2;
- (void)prepare;
- (void)setActivationCount:(long long)arg1;
- (void)setCoordinateSpace:(id)arg1;
- (void)setExternalActivationCount:(long long)arg1;
- (void)setUsesCustomActivation:(bool)arg1;
- (bool)usesCustomActivation;

@end
