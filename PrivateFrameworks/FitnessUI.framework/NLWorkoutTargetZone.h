/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLWorkoutTargetZone : NSObject {
    double  _currentValue;
    double  _max;
    double  _min;
    long long  _type;
}

@property (nonatomic, readonly) double currentValue;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) long long type;

+ (id)mapTargetZoneTypeEnumToString:(long long)arg1;
+ (long long)mapTargetZoneTypeStringToEnum:(id)arg1;
+ (id)overrideMaxSpeedToZero:(id)arg1;
+ (id)readTargetZoneForActivityType:(id)arg1;
+ (id)restoreFromDictionary:(id)arg1;
+ (id)restoreFromDictionary:(id)arg1 activityType:(id)arg2;
+ (void)saveTargetZone:(id)arg1 forActivityType:(id)arg2;
+ (id)serializeTargetZone:(id)arg1;
+ (unsigned long long)stateForZone:(id)arg1 distanceUnit:(id)arg2;

- (double)currentValue;
- (id)description;
- (bool)enabled;
- (id)initWithType:(long long)arg1 min:(double)arg2 max:(double)arg3 currentValue:(double)arg4;
- (bool)isSingleThreshold;
- (double)max;
- (double)min;
- (long long)type;

@end
