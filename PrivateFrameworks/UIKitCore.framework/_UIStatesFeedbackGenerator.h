/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatesFeedbackGenerator : UIFeedbackGenerator {
    bool  _approachActivated;
    NSString * _currentState;
    _UIFeedback<_UIFeedbackContinuousPlayable> * _playingContinuousFeedback;
}

@property (getter=_approachActivated, setter=_setApproachActivated:, nonatomic) bool approachActivated;
@property (nonatomic, retain) NSString *currentState;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;
@property (getter=_statesConfiguration, nonatomic, readonly) _UIStatesFeedbackGeneratorConfiguration *statesConfiguration;

+ (Class)_configurationClass;

- (void).cxx_destruct;
- (bool)_approachActivated;
- (id)_configurationFromState:(id)arg1 toState:(id)arg2;
- (void)_setApproachActivated:(bool)arg1;
- (id)_statesConfiguration;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (id)currentState;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (id)playingContinuousFeedback;
- (void)setCurrentState:(id)arg1;
- (void)setPlayingContinuousFeedback:(id)arg1;
- (void)transitionToState:(id)arg1 ended:(bool)arg2;
- (void)transitionToState:(id)arg1 updated:(double)arg2;

@end
