/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _lastRestingHeartRate;
    double  _lastWalkingHeartRateAverage;
    double  _nextRestingHeartRateSampleTime;
    double  _nextWalkingHeartRateAverageSampleTime;
}

@property (nonatomic) double lastRestingHeartRate;
@property (nonatomic) double lastWalkingHeartRateAverage;
@property (nonatomic) double nextRestingHeartRateSampleTime;
@property (nonatomic) double nextWalkingHeartRateAverageSampleTime;

+ (bool)supportsSecureCoding;

- (double)_computeRestingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computeWalkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)lastRestingHeartRate;
- (double)lastWalkingHeartRateAverage;
- (double)nextRestingHeartRateSampleTime;
- (double)nextWalkingHeartRateAverageSampleTime;
- (id)restingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)setLastRestingHeartRate:(double)arg1;
- (void)setLastWalkingHeartRateAverage:(double)arg1;
- (void)setNextRestingHeartRateSampleTime:(double)arg1;
- (void)setNextWalkingHeartRateAverageSampleTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (id)walkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2;

@end
