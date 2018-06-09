/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataBloodSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _nextBloodAlcoholContentSampleTime;
}

@property (nonatomic) double nextBloodAlcoholContentSampleTime;

+ (bool)supportsSecureCoding;

- (double)_computeNumDrinksTodayForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)bloodAlcoholContentForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)nextBloodAlcoholContentSampleTime;
- (void)setNextBloodAlcoholContentSampleTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
