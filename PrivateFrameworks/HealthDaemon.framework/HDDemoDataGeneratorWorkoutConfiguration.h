/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataGeneratorWorkoutConfiguration : NSObject <NSSecureCoding> {
    unsigned long long  _activityType;
    bool  _createdFromNSKeyedUnarchiver;
    double  _distanceCyclingRateInMiles;
    double  _distanceSwimmingRateInYards;
    double  _distanceSwimmingSegmentInYards;
    double  _distanceWalkingRateInMiles;
    double  _endTime;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    bool  _indoor;
    double  _kcalRate;
    long long  _numSwimmingSegments;
    double  _startTime;
    long long  _swimmingNumLapsPerSegment;
    double  _swimmingRestSegmentTime;
    long long  _swimmingStrokeStyle;
    double  _swimmingSwimSegmentTime;
}

@property (nonatomic) unsigned long long activityType;
@property (nonatomic) double distanceCyclingRateInMiles;
@property (nonatomic) double distanceSwimmingRateInYards;
@property (nonatomic) double distanceSwimmingSegmentInYards;
@property (nonatomic) double distanceWalkingRateInMiles;
@property (nonatomic) double endTime;
@property (nonatomic, retain) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (nonatomic) bool indoor;
@property (nonatomic) double kcalRate;
@property (nonatomic) long long numSwimmingSegments;
@property (nonatomic) double startTime;
@property (nonatomic) long long swimmingNumLapsPerSegment;
@property (nonatomic) double swimmingRestSegmentTime;
@property (nonatomic) long long swimmingStrokeStyle;
@property (nonatomic) double swimmingSwimSegmentTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityType;
- (bool)createdFromNSKeyedUnarchiver;
- (double)distanceCyclingRateInMiles;
- (double)distanceSwimmingRateInYards;
- (double)distanceSwimmingSegmentInYards;
- (double)distanceWalkingRateInMiles;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)goal;
- (unsigned long long)goalType;
- (bool)indoor;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrototype:(id)arg1 currentDemoDataTime:(double)arg2;
- (double)kcalRate;
- (long long)numSwimmingSegments;
- (void)setActivityType:(unsigned long long)arg1;
- (void)setDistanceCyclingRateInMiles:(double)arg1;
- (void)setDistanceSwimmingRateInYards:(double)arg1;
- (void)setDistanceSwimmingSegmentInYards:(double)arg1;
- (void)setDistanceWalkingRateInMiles:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setGoal:(id)arg1;
- (void)setGoalType:(unsigned long long)arg1;
- (void)setIndoor:(bool)arg1;
- (void)setKcalRate:(double)arg1;
- (void)setNumSwimmingSegments:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSwimmingNumLapsPerSegment:(long long)arg1;
- (void)setSwimmingRestSegmentTime:(double)arg1;
- (void)setSwimmingStrokeStyle:(long long)arg1;
- (void)setSwimmingSwimSegmentTime:(double)arg1;
- (double)startTime;
- (long long)swimmingNumLapsPerSegment;
- (double)swimmingRestSegmentTime;
- (long long)swimmingStrokeStyle;
- (double)swimmingSwimSegmentTime;

@end
