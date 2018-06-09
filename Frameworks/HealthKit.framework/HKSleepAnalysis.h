/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSleepAnalysis : NSObject {
    double  _averageEfficiency;
    long long  _averageNumberOfInterruptions;
    double  _averageTimeAsleep;
    double  _averageTimeInBed;
    long long  _consistencyCount;
    bool  _containsAsleepSamples;
    NSArray * _sleepDays;
}

@property (nonatomic, readonly) double averageEfficiency;
@property (nonatomic, readonly) long long averageNumberOfInterruptions;
@property (nonatomic, readonly) double averageTimeAsleep;
@property (nonatomic, readonly) double averageTimeInBed;
@property (nonatomic, readonly) long long consistencyCount;
@property (nonatomic, readonly) bool containsAsleepSamples;
@property (nonatomic, readonly, copy) NSArray *sleepDays;

+ (id)emptyAnalysis;

- (void).cxx_destruct;
- (double)averageEfficiency;
- (long long)averageNumberOfInterruptions;
- (double)averageTimeAsleep;
- (double)averageTimeInBed;
- (long long)consistencyCount;
- (bool)containsAsleepSamples;
- (id)initWithSleepDays:(id)arg1 containsAsleepSamples:(bool)arg2 consistencyCount:(long long)arg3 averageEfficiency:(double)arg4 averageTimeInBed:(double)arg5 averageTimeAlseep:(double)arg6 averageNumberOfInterruptions:(long long)arg7;
- (id)sleepDays;

@end
