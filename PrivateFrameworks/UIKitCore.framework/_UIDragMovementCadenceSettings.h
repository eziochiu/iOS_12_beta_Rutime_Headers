/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragMovementCadenceSettings : NSObject {
    double  _dwellTimeThreshold;
    double  _velocityMagnitudeThreshold;
}

@property (nonatomic) double dwellTimeThreshold;
@property (nonatomic) double velocityMagnitudeThreshold;

+ (id)defaultSettingsForMovementPhase:(long long)arg1 cadence:(long long)arg2;

- (void)_applyDragPlaceholderInitialPhaseDefaultsForCadence:(long long)arg1;
- (void)_applyDragPlaceholderSubsequentPhaseDefaultsForCadence:(long long)arg1;
- (void)_applyImmediateSettings;
- (void)_applyInteractiveReorderInitialPhaseDefaultsForCadence:(long long)arg1;
- (void)_applyInteractiveReorderSubsequentPhaseDefaultsForCadence:(long long)arg1;
- (double)dwellTimeThreshold;
- (id)initWithMovementPhase:(long long)arg1 cadence:(long long)arg2;
- (id)initWithVelocityMagnitudeThreshold:(double)arg1 dwellTimeThreshold:(double)arg2;
- (void)setDwellTimeThreshold:(double)arg1;
- (void)setVelocityMagnitudeThreshold:(double)arg1;
- (double)velocityMagnitudeThreshold;

@end
