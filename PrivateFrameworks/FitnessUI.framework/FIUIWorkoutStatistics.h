/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutStatistics : NSObject {
    HKQuantity * _averageActiveEnergyBurn;
    HKQuantity * _averageCyclingDistance;
    HKQuantity * _averageWalkRunDistance;
    double  _averageWorkoutDuration;
    bool  _isAllOutdoorCycling;
    bool  _isAllRunning;
    long long  _numberOfCyclingWorkouts;
    long long  _numberOfWalkRunWorkouts;
    NSDate * _startOfMonth;
    HKQuantity * _totalActiveEnergyBurn;
    HKQuantity * _totalCyclingDistance;
    double  _totalCyclingDuration;
    HKQuantity * _totalWalkRunDistance;
    double  _totalWalkRunDuration;
    double  _totalWorkoutDuration;
    NSArray * _workouts;
}

@property (nonatomic, readonly) HKQuantity *averageActiveEnergyBurn;
@property (nonatomic, readonly) HKQuantity *averageCyclingDistance;
@property (nonatomic, readonly) HKQuantity *averageWalkRunDistance;
@property (nonatomic, readonly) double averageWorkoutDuration;
@property (nonatomic, readonly) NSDate *startOfMonth;
@property (nonatomic, readonly) HKQuantity *totalActiveEnergyBurn;
@property (nonatomic, readonly) HKQuantity *totalCyclingDistance;
@property (nonatomic, readonly) double totalCyclingDuration;
@property (nonatomic, readonly) HKQuantity *totalWalkRunDistance;
@property (nonatomic, readonly) double totalWalkRunDuration;
@property (nonatomic, readonly) double totalWorkoutDuration;
@property (nonatomic, readonly) unsigned long long workoutCount;

+ (id)_monthFormatter;

- (void).cxx_destruct;
- (void)_calculateAverages;
- (void)_calculateStats;
- (id)_formattedCyclingDistance:(id)arg1 formattingManager:(id)arg2;
- (id)_formattedDuration:(double)arg1 formattingManager:(id)arg2;
- (id)_formattedEnergyBurn:(id)arg1 formattingManager:(id)arg2;
- (id)_formattedWalkRunDistance:(id)arg1 formattingManager:(id)arg2;
- (id)averageActiveEnergyBurn;
- (id)averageCyclingDistance;
- (id)averageWalkRunDistance;
- (double)averageWorkoutDuration;
- (id)formattedActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)formattedAverageActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)formattedAverageCyclingDistanceWithFormattingManager:(id)arg1;
- (id)formattedAverageWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)formattedAverageWorkoutDurationWithFormattingManager:(id)arg1;
- (id)formattedCyclingDistanceWithFormattingManager:(id)arg1;
- (id)formattedMonth;
- (id)formattedPaceWithFormattingManager:(id)arg1;
- (id)formattedSpeedWithFormattingManager:(id)arg1;
- (id)formattedTotalActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)formattedTotalCyclingDistanceWithFormattingManager:(id)arg1;
- (id)formattedTotalWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)formattedTotalWorkoutDurationWithFormattingManager:(id)arg1;
- (id)formattedWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)formattedWorkoutCount;
- (id)formattedWorkoutDurationWithFormattingManager:(id)arg1;
- (id)init;
- (id)initWithWorkouts:(id)arg1;
- (id)simpleWorkoutCount;
- (id)startOfMonth;
- (id)totalActiveEnergyBurn;
- (id)totalCyclingDistance;
- (double)totalCyclingDuration;
- (id)totalWalkRunDistance;
- (double)totalWalkRunDuration;
- (double)totalWorkoutDuration;
- (unsigned long long)workoutCount;

@end
