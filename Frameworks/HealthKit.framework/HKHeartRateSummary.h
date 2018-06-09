/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRateSummary : NSObject <NSSecureCoding> {
    long long  _activityCacheIndex;
    HKHeartRateSummaryStatistics * _allDayStatistics;
    NSArray * _breatheStatistics;
    NSDateInterval * _heartRateDateInterval;
    HKQuantity * _restingHeartRate;
    HKQuantity * _walkingAverageHeartRate;
    NSArray * _workoutRecoveryStatistics;
    NSArray * _workoutStatistics;
}

@property (nonatomic) long long activityCacheIndex;
@property (nonatomic, retain) HKHeartRateSummaryStatistics *allDayStatistics;
@property (nonatomic, retain) NSArray *breatheStatistics;
@property (nonatomic, retain) NSDateInterval *heartRateDateInterval;
@property (nonatomic, retain) HKQuantity *restingHeartRate;
@property (nonatomic, retain) HKQuantity *walkingAverageHeartRate;
@property (nonatomic, retain) NSArray *workoutRecoveryStatistics;
@property (nonatomic, retain) NSArray *workoutStatistics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activityCacheIndex;
- (id)allDayStatistics;
- (id)breatheStatistics;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)heartRateDateInterval;
- (id)initWithActivityCacheIndex:(long long)arg1 heartRateDateInterval:(id)arg2 restingHeartRate:(id)arg3 walkingAverageHeartRate:(id)arg4 allDayStatistics:(id)arg5 workoutStatistics:(id)arg6 workoutRecoveryStatistics:(id)arg7 breatheStatistics:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)restingHeartRate;
- (void)setActivityCacheIndex:(long long)arg1;
- (void)setAllDayStatistics:(id)arg1;
- (void)setBreatheStatistics:(id)arg1;
- (void)setHeartRateDateInterval:(id)arg1;
- (void)setRestingHeartRate:(id)arg1;
- (void)setWalkingAverageHeartRate:(id)arg1;
- (void)setWorkoutRecoveryStatistics:(id)arg1;
- (void)setWorkoutStatistics:(id)arg1;
- (id)walkingAverageHeartRate;
- (id)workoutRecoveryStatistics;
- (id)workoutStatistics;

@end
