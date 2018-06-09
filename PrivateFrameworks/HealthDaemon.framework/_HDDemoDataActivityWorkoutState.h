/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding> {
    NSMutableData * _associatedObjectUUIDs;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    NSDate * _startDate;
    long long  _swimmingStrokeStyle;
    double  _totalDistanceCyclingInMeters;
    double  _totalDistanceSwimmingInYards;
    double  _totalDistanceWalkingInMeters;
    double  _totalEnergyBurnedInKilocalories;
    double  _totalSwimmingStrokes;
    unsigned long long  _workoutActivityType;
    NSMutableArray * _workoutEvents;
}

@property (nonatomic, retain) NSMutableData *associatedObjectUUIDs;
@property (nonatomic, retain) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) long long swimmingStrokeStyle;
@property (nonatomic) double totalDistanceCyclingInMeters;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double totalDistanceWalkingInMeters;
@property (nonatomic) double totalEnergyBurnedInKilocalories;
@property (nonatomic) double totalSwimmingStrokes;
@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic, retain) NSMutableArray *workoutEvents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAssociatedObjectUUID:(id)arg1;
- (void)addWorkoutEvent:(id)arg1;
- (void)addWorkoutRouteFromFilePath:(id)arg1 profile:(id)arg2 provenance:(id)arg3;
- (id)associatedObjectUUIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)generateWorkoutWithEndDate:(id)arg1 profile:(id)arg2 provenance:(id)arg3;
- (id)goal;
- (unsigned long long)goalType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)lapCount;
- (void)setAssociatedObjectUUIDs:(id)arg1;
- (void)setGoal:(id)arg1;
- (void)setGoalType:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSwimmingStrokeStyle:(long long)arg1;
- (void)setTotalDistanceCyclingInMeters:(double)arg1;
- (void)setTotalDistanceSwimmingInYards:(double)arg1;
- (void)setTotalDistanceWalkingInMeters:(double)arg1;
- (void)setTotalEnergyBurnedInKilocalories:(double)arg1;
- (void)setTotalSwimmingStrokes:(double)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (void)setWorkoutEvents:(id)arg1;
- (id)startDate;
- (long long)swimmingStrokeStyle;
- (double)totalDistanceCyclingInMeters;
- (double)totalDistanceSwimmingInYards;
- (double)totalDistanceWalkingInMeters;
- (double)totalEnergyBurnedInKilocalories;
- (double)totalSwimmingStrokes;
- (unsigned long long)workoutActivityType;
- (id)workoutEvents;

@end
