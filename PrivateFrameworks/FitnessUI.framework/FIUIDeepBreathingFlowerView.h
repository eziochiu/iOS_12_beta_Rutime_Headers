/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIDeepBreathingFlowerView : UIView <FIUIDeepBreathingPetalRingGLViewDelegate> {
    UIImageView * _arrowImageView;
    double  _breathsPerMinute;
    UILabel * _congratulationsLabel;
    NSString * _congratulationsText;
    FIUIDeepBreathingPetalRingGLView * _currentPetalRing;
    long long  _numberOfVisiblePetals;
    double  _petalCountOverride;
    NSMutableDictionary * _petalRingsByNumberOfPetals;
    double  _sessionDuration;
    bool  _showBlurTrails;
    long long  _state;
    double  _stateEndTime;
    double  _stateStartTime;
    NSMutableArray * _trailAlphaKeyFrames;
    NSMutableArray * _trailAlphaKeyValues;
    NSMutableArray * _unwindArrowImages;
    NSMutableArray * _windFromSummaryArrowImages;
    NSMutableArray * _windFromWelcomeArrowImages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createCongratulationsLabelIfNeeded;
- (id)_currentPetalRing;
- (double)_curveEaseInValue:(double)arg1;
- (float)_interpolateWithKeyFrames:(id)arg1 keyValues:(id)arg2 value:(float)arg3;
- (struct CGPoint { double x1; double x2; })_originalRingCenterForWindType:(long long)arg1;
- (double)_petalCountForMinutesRemaining:(double)arg1;
- (id)_petalRingWithNumberOfShaderPetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)_ppt_setPetalCountOverride:(long long)arg1;
- (void)_preloadPetalRings;
- (void)_setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)_setState:(long long)arg1;
- (void)_setWindFraction:(double)arg1 largeRadius:(double)arg2 windType:(long long)arg3 showBlurTrails:(bool)arg4;
- (id)_unwindArrowImages;
- (void)_updateArrowImageForWindFraction:(double)arg1 windType:(long long)arg2 firstPetalCenter:(struct CGPoint { double x1; double x2; })arg3;
- (void)_updateForBreathWithPetalCount:(long long)arg1 petalRadius:(double)arg2 inhaleDuration:(double)arg3 exhaleDuration:(double)arg4 timeInCurrentBreath:(double)arg5 showBlurTrails:(bool)arg6 shouldSpin:(bool)arg7;
- (void)_updateForCongratulationsWithTimeInState:(double)arg1 fractionComplete:(double)arg2;
- (void)_updateForGuidingWithTimeInState:(double)arg1;
- (void)_updateForOnRampWithTimeInState:(double)arg1;
- (void)_updateForShrinkToOnRampWithFractionComplete:(double)arg1;
- (void)_updateForUnwindToCompletedWithFractionComplete:(double)arg1;
- (void)_updateForWindToConfigurationWithFractionComplete:(double)arg1;
- (void)_updatePetalsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 radius:(double)arg2 radialDistance:(double)arg3 angleOffset:(double)arg4 clockwise:(bool)arg5 alpha:(float)arg6;
- (void)_updateShaderForNumberOfPetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (id)_windFromSummaryArrowImages;
- (id)_windFromWelcomeArrowImages;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 congratulationsText:(id)arg2;
- (void)petalRingGLViewDisplayLinkDidFire:(id)arg1;
- (void)setNumberOfConfigurationPetals:(double)arg1;
- (void)setWelcomeWindFraction:(double)arg1;
- (void)startGuidingAtDate:(id)arg1 breathsPerMinute:(double)arg2;
- (void)startOnRampAtDate:(id)arg1 sessionDuration:(double)arg2;
- (void)transitionToCompletedWithDuration:(double)arg1;
- (void)transitionToConfigurationAnimated:(bool)arg1;
- (void)transitionToCongratulations;

@end
