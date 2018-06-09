/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataFoodSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _bloodGlucoseCarbohydrateGlycemicRate;
    double  _bloodGlucoseDecreaseRateDueToInsulin;
    double  _carbohydratesLeftToDigest;
    HDDemoDataFoodDatabase * _foodDatabase;
    double  _lastBloodGlucose;
    NSArray * _lastMeal;
    double  _lastMealTime;
    double  _nextBloodGlucoseFingerStickSampleTime;
    double  _nextBloodGlucoseMealTime;
    double  _nextBloodGlucoseSampleTime;
    double  _nextBreakfastTime;
    double  _nextDinnerTime;
    double  _nextInsulinPumpBasalSampleTime;
    double  _nextLunchTime;
    double  _nextMealTime;
    double  _nextSnackTime;
    double  _nextWaterConsumedSampleTime;
}

@property (nonatomic) double bloodGlucoseCarbohydrateGlycemicRate;
@property (nonatomic) double bloodGlucoseDecreaseRateDueToInsulin;
@property (nonatomic) double carbohydratesLeftToDigest;
@property (nonatomic, retain) HDDemoDataFoodDatabase *foodDatabase;
@property (nonatomic) double lastBloodGlucose;
@property (nonatomic, copy) NSArray *lastMeal;
@property (nonatomic) double lastMealTime;
@property (nonatomic) double nextBloodGlucoseFingerStickSampleTime;
@property (nonatomic) double nextBloodGlucoseMealTime;
@property (nonatomic) double nextBloodGlucoseSampleTime;
@property (nonatomic) double nextBreakfastTime;
@property (nonatomic) double nextDinnerTime;
@property (nonatomic) double nextInsulinPumpBasalSampleTime;
@property (nonatomic) double nextLunchTime;
@property (nonatomic) double nextMealTime;
@property (nonatomic) double nextSnackTime;
@property (nonatomic) double nextWaterConsumedSampleTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_computeBloodGlucoseForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3;
- (double)_computeMealTimeForDemoPerson:(id)arg1 fromTime:(double)arg2 mealTimeType:(long long)arg3 timeMean:(double)arg4 stdDev:(double)arg5;
- (double)_computeNutrientForDemoPerson:(id)arg1 atTime:(double)arg2 mealItem:(id)arg3 quantityType:(id)arg4;
- (void)_generateRandomLastMeal;
- (bool)_isDemoPersonConsumingCaffeine:(id)arg1 atTime:(double)arg2;
- (bool)_isTypicalNutritionTrackingQuantityType:(id)arg1;
- (id)_lastMeal;
- (id)_mealForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_nextMealTimeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)basalInsulinDeliveryForTotalDailyInsulinInUnits:(double)arg1 timeInterval:(double)arg2;
- (id)basalInsulinInjectionForDemoPerson:(id)arg1 quantityType:(id)arg2 totalDailyInsulinInUnits:(double)arg3 sampleDate:(id)arg4;
- (id)basalInsulinPumpDeliveryForDemoPerson:(id)arg1 quantityType:(id)arg2 totalDailyInsulinInUnits:(double)arg3 currentTime:(double)arg4 sampleDate:(id)arg5;
- (double)bloodGlucoseCarbohydrateGlycemicRate;
- (double)bloodGlucoseDecreaseRateDueToInsulin;
- (id)bloodGlucoseForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)bolusInsulinDeliveryForFoodItems:(id)arg1 totalDailyInsulinInUnits:(double)arg2;
- (double)carbohydratesLeftToDigest;
- (void)encodeWithCoder:(id)arg1;
- (id)foodDatabase;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)lastBloodGlucose;
- (id)lastMeal;
- (double)lastMealTime;
- (long long)mealTypeForTime:(double)arg1;
- (double)nextBloodGlucoseFingerStickSampleTime;
- (double)nextBloodGlucoseMealTime;
- (double)nextBloodGlucoseSampleTime;
- (double)nextBreakfastTime;
- (double)nextDinnerTime;
- (double)nextInsulinPumpBasalSampleTime;
- (double)nextLunchTime;
- (double)nextMealTime;
- (double)nextSnackTime;
- (double)nextWaterConsumedSampleTime;
- (void)setBloodGlucoseCarbohydrateGlycemicRate:(double)arg1;
- (void)setBloodGlucoseDecreaseRateDueToInsulin:(double)arg1;
- (void)setCarbohydratesLeftToDigest:(double)arg1;
- (void)setFoodDatabase:(id)arg1;
- (void)setLastBloodGlucose:(double)arg1;
- (void)setLastMeal:(id)arg1;
- (void)setLastMealTime:(double)arg1;
- (void)setNextBloodGlucoseFingerStickSampleTime:(double)arg1;
- (void)setNextBloodGlucoseMealTime:(double)arg1;
- (void)setNextBloodGlucoseSampleTime:(double)arg1;
- (void)setNextBreakfastTime:(double)arg1;
- (void)setNextDinnerTime:(double)arg1;
- (void)setNextInsulinPumpBasalSampleTime:(double)arg1;
- (void)setNextLunchTime:(double)arg1;
- (void)setNextMealTime:(double)arg1;
- (void)setNextSnackTime:(double)arg1;
- (void)setNextWaterConsumedSampleTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (double)totalDailyInsulinTherapyRequirementForDemoPerson:(id)arg1;
- (id)waterConsumedForDemoPerson:(id)arg1 atTime:(double)arg2;

@end
