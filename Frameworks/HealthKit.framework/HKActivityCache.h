/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActivityCache : HKSample <HDCoding, NSCopying> {
    double  _activeHours;
    double  _briskMinutes;
    long long  _cacheIndex;
    NSArray * _dailyBriskMinutesStatistics;
    NSArray * _dailyEnergyBurnedStatistics;
    NSDateComponents * _dateComponents;
    double  _deepBreathingDuration;
    HKQuantity * _energyBurned;
    HKQuantity * _energyBurnedGoal;
    NSDate * _energyBurnedGoalDate;
    long long  _flightsClimbed;
    unsigned long long  _knownFields;
    long long  _pushCount;
    long long  _sequence;
    long long  _stepCount;
    HKQuantity * _walkingAndRunningDistance;
    long long  _wheelchairUse;
}

@property (setter=_setActiveHours:) double activeHours;
@property (readonly) double activeHoursGoal;
@property (readonly) double activeHoursGoalPercentage;
@property (setter=_setBriskMinutes:) double briskMinutes;
@property (readonly) double briskMinutesGoal;
@property (readonly) double briskMinutesGoalPercentage;
@property (setter=_setCacheIndex:) long long cacheIndex;
@property (setter=_setDailyBriskMinutesStatistics:, copy) NSArray *dailyBriskMinutesStatistics;
@property (setter=_setDailyEnergyBurnedStatistics:, copy) NSArray *dailyEnergyBurnedStatistics;
@property (readonly) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (setter=_setDeepBreathingDuration:) double deepBreathingDuration;
@property (readonly, copy) NSString *description;
@property (setter=_setEnergyBurned:, retain) HKQuantity *energyBurned;
@property (setter=_setEnergyBurnedGoal:, retain) HKQuantity *energyBurnedGoal;
@property (readonly) NSDate *energyBurnedGoalDate;
@property (readonly) double energyBurnedGoalPercentage;
@property (setter=_setFlightsClimbed:) long long flightsClimbed;
@property (readonly) bool hasActiveHours;
@property (readonly) bool hasActiveHoursGoal;
@property (readonly) bool hasActiveHoursGoalPercentage;
@property (readonly) bool hasBriskMinutes;
@property (readonly) bool hasBriskMinutesGoal;
@property (readonly) bool hasBriskMinutesGoalPercentage;
@property (readonly) bool hasDailyBriskMinutesStatistics;
@property (readonly) bool hasDailyEnergyBurnedStatistics;
@property (readonly) bool hasDateComponents;
@property (readonly) bool hasDeepBreathingDuration;
@property (readonly) bool hasEnergyBurned;
@property (readonly) bool hasEnergyBurnedGoal;
@property (readonly) bool hasEnergyBurnedGoalPercentage;
@property (readonly) bool hasFlightsClimbed;
@property (readonly) bool hasPushCount;
@property (readonly) bool hasStepCount;
@property (readonly) bool hasWalkingAndRunningDistance;
@property (readonly) bool hasWheelchairUse;
@property (readonly) unsigned long long hash;
@property (setter=_setKnownFields:) unsigned long long knownFields;
@property (setter=_setPushCount:) long long pushCount;
@property (setter=_setSequence:) long long sequence;
@property (setter=_setStepCount:) long long stepCount;
@property (readonly) Class superclass;
@property (setter=_setWalkingAndRunningDistance:, retain) HKQuantity *walkingAndRunningDistance;
@property (setter=_setWheelchairUse:) long long wheelchairUse;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 energyBurned:(id)arg5 energyBurnedGoal:(id)arg6 walkingAndRunningDistance:(id)arg7 metadata:(id)arg8;
+ (id)_activityCacheWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 dateComponents:(id)arg4 sequence:(long long)arg5;
+ (bool)_isConcreteObjectClass;
+ (id)_newActivityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 energyBurned:(id)arg4 energyBurnedGoal:(id)arg5 walkingAndRunningDistance:(id)arg6 metadata:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_energyBurnedGoalInKilocalories;
- (double)_energyBurnedInKilocalories;
- (bool)_isEqualToActivityCache:(id)arg1;
- (void)_setActiveHours:(double)arg1;
- (void)_setBriskMinutes:(double)arg1;
- (void)_setCacheIndex:(long long)arg1;
- (void)_setDailyBriskMinutesStatistics:(id)arg1;
- (void)_setDailyEnergyBurnedStatistics:(id)arg1;
- (void)_setDeepBreathingDuration:(double)arg1;
- (void)_setEnergyBurned:(id)arg1;
- (void)_setEnergyBurnedGoal:(id)arg1;
- (void)_setEnergyBurnedGoal:(id)arg1 date:(id)arg2;
- (void)_setEnergyBurnedGoalDateOnly:(id)arg1;
- (void)_setEnergyBurnedGoalOnly:(id)arg1;
- (void)_setFlightsClimbed:(long long)arg1;
- (void)_setKnownFields:(unsigned long long)arg1;
- (void)_setPushCount:(long long)arg1;
- (void)_setSequence:(long long)arg1;
- (void)_setStepCount:(long long)arg1;
- (void)_setWalkingAndRunningDistance:(id)arg1;
- (void)_setWheelchairUse:(long long)arg1;
- (id)_valueDescription;
- (double)_walkingAndRunningDistanceInMeters;
- (double)activeHours;
- (double)activeHoursGoal;
- (double)activeHoursGoalPercentage;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (double)briskMinutesGoalPercentage;
- (long long)cacheIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dailyBriskMinutesStatistics;
- (id)dailyEnergyBurnedStatistics;
- (id)dateComponents;
- (double)deepBreathingDuration;
- (void)encodeWithCoder:(id)arg1;
- (id)energyBurned;
- (id)energyBurnedGoal;
- (id)energyBurnedGoalDate;
- (double)energyBurnedGoalPercentage;
- (long long)flightsClimbed;
- (bool)hasActiveHours;
- (bool)hasActiveHoursGoal;
- (bool)hasActiveHoursGoalPercentage;
- (bool)hasBriskMinutes;
- (bool)hasBriskMinutesGoal;
- (bool)hasBriskMinutesGoalPercentage;
- (bool)hasDailyBriskMinutesStatistics;
- (bool)hasDailyEnergyBurnedStatistics;
- (bool)hasDateComponents;
- (bool)hasDeepBreathingDuration;
- (bool)hasEnergyBurned;
- (bool)hasEnergyBurnedGoal;
- (bool)hasEnergyBurnedGoalPercentage;
- (bool)hasFlightsClimbed;
- (bool)hasPushCount;
- (bool)hasStepCount;
- (bool)hasWalkingAndRunningDistance;
- (bool)hasWheelchairUse;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)knownFields;
- (long long)pushCount;
- (void)reset;
- (long long)sequence;
- (long long)stepCount;
- (id)walkingAndRunningDistance;
- (long long)wheelchairUse;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (bool)addCodableRepresentationToCollectionForSync:(id)arg1;
- (id)codableRepresentationForJournal;
- (id)codableRepresentationForSync;

@end
