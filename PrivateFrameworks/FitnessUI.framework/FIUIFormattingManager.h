/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIFormattingManager : NSObject {
    FIUIUnitManager * _unitManager;
}

@property (nonatomic, readonly) FIUIUnitManager *unitManager;

+ (id)localizedShortCadenceUnitString;
+ (id)localizedShortPowerUnitString;
+ (id)percentStringWithNumber:(id)arg1;
+ (id)stringWithNumber:(id)arg1 decimalPrecision:(unsigned long long)arg2;
+ (id)stringWithNumber:(id)arg1 decimalPrecision:(unsigned long long)arg2 roundingMode:(unsigned long long)arg3;

- (void).cxx_destruct;
- (unsigned long long)_effectiveGoalTypeForWorkout:(id)arg1;
- (id)_energyBurnedUnitStringForUnit:(id)arg1 useShortString:(bool)arg2;
- (id)_localizedKeyMetricCyclingStringWithWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2;
- (id)_localizedKeyMetricDistanceStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2;
- (id)_localizedKeyMetricDurationStringWithWorkout:(id)arg1;
- (id)_localizedKeyMetricEnergyBurnedStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2;
- (id)_localizedOpenGoalKeyMetricStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2;
- (id)_localizedStringWithDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 unitStyle:(long long)arg3 decimalPrecision:(unsigned long long)arg4;
- (unsigned long long)_naturalScaleUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2;
- (id)_stringByReplacingThirtyThreeAndAThirdIfNeeded:(id)arg1 distanceInMeters:(double)arg2 distanceUnit:(unsigned long long)arg3;
- (bool)_workoutSupportsDistanceMetricForGoalDisplay:(id)arg1;
- (id)applyTextCase:(unsigned long long)arg1 toString:(id)arg2;
- (double)caloriesForEnergyBurnedInUserUnit:(double)arg1;
- (id)decimalSeparator;
- (double)energyBurnedInUserUnitForCalories:(double)arg1;
- (id)initWithUnitManager:(id)arg1;
- (id)localizationKeyForDistanceBaseKey:(id)arg1 distanceType:(unsigned long long)arg2;
- (id)localizationKeyForEnergyBaseKey:(id)arg1;
- (id)localizedDistanceByStrokeStyle:(id)arg1 isPoolSwim:(bool)arg2;
- (id)localizedDistinguishingPaceUnitStringWithMetricType:(unsigned long long)arg1 distanceType:(unsigned long long)arg2 distanceUnit:(unsigned long long)arg3 paceFormat:(long long)arg4;
- (id)localizedGoalDescriptionForGoalType:(unsigned long long)arg1 goalValue:(double)arg2 activityType:(id)arg3;
- (id)localizedGoalDescriptionForWorkout:(id)arg1 withValue:(id*)arg2 appendActivityType:(bool)arg3;
- (id)localizedHeartRateUnitString;
- (id)localizedInSessionDescriptionForElevation:(unsigned long long)arg1;
- (id)localizedKeyMetricStringForWorkout:(id)arg1 unitStyle:(unsigned long long)arg2;
- (id)localizedLongActiveEnergyUnitString;
- (id)localizedLongActiveEnergyUnitStringWithTextCase:(unsigned long long)arg1;
- (id)localizedLongUnitStringForDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2;
- (id)localizedLongUnitStringForDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 textCase:(unsigned long long)arg3;
- (id)localizedNaturalScaleStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 usedUnit:(unsigned long long*)arg4;
- (id)localizedPaceAndUnitStringForSpeed:(double)arg1 activityType:(id)arg2;
- (id)localizedPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (id)localizedPaceUnitStringWithDistanceType:(unsigned long long)arg1 distanceUnit:(unsigned long long)arg2;
- (id)localizedPaceValueForSplit:(id)arg1 activityType:(id)arg2;
- (id)localizedPowerUnitStringForPower:(double)arg1;
- (id)localizedShareTextWithWorkout:(id)arg1 shareValue:(id)arg2;
- (id)localizedShortActiveEnergyUnitString;
- (id)localizedShortTypeDistinguishingUnitStringForEnergyType:(unsigned long long)arg1;
- (id)localizedShortTypeDistinguishingUnitStringForPowerType:(unsigned long long)arg1 unitString:(id)arg2;
- (id)localizedShortUnitStringForDistanceType:(unsigned long long)arg1;
- (id)localizedShortUnitStringForDistanceUnit:(unsigned long long)arg1;
- (id)localizedShortUnitStringForDistanceUnit:(unsigned long long)arg1 textCase:(unsigned long long)arg2;
- (id)localizedSpeedUnitString;
- (id)localizedStringWithActiveEnergy:(id)arg1;
- (id)localizedStringWithActiveEnergy:(id)arg1 unitStyle:(unsigned long long)arg2;
- (id)localizedStringWithBeatsPerMinute:(double)arg1;
- (id)localizedStringWithBeatsPerMinute:(double)arg1 requirePositiveValue:(bool)arg2;
- (id)localizedStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3;
- (id)localizedStringWithDistanceInMeters:(double)arg1 distanceUnit:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 decimalPrecision:(unsigned long long)arg4;
- (id)localizedStringWithEnergy:(id)arg1 energyType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3;
- (id)localizedStringWithEnergyInCalories:(double)arg1 energyType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3;
- (id)localizedStringWithHeartRate:(id)arg1;
- (id)localizedStringWithHeartRate:(id)arg1 unitStyle:(unsigned long long)arg2;
- (id)localizedStringWithHeartRate:(id)arg1 unitStyle:(unsigned long long)arg2 requirePositiveValue:(bool)arg3;
- (id)localizedStringWithPersonHeight:(id)arg1 unitStyle:(long long)arg2;
- (id)localizedStrokeCountStringWithCount:(long long)arg1 overDistance:(id)arg2 paceFormat:(long long)arg3;
- (id)localizedSwimmingPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (id)localizedTitleForSplit:(id)arg1 unit:(id)arg2 lapIndex:(long long)arg3 useShortFormat:(bool)arg4;
- (double)roundedDailyMoveGoalForCalories:(double)arg1;
- (double)speedPerHourWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (id)stringWithDuration:(double)arg1 durationFormat:(unsigned long long)arg2;
- (id)unitManager;
- (unsigned long long)userDistanceUnitForSwimmingLapLength;

@end
