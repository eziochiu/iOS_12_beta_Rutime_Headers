/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCoachingDiagnosticSubmittableMetrics : NSObject {
    HKActivitySummary * _activitySummary;
    NSNumber * _biologicalSex;
    NSDateComponents * _dateOfBirth;
    NSArray * _diagnosticData;
    HKQuantitySample * _heightSample;
    NSDate * _startOfDay;
    HKQuantitySample * _weightSample;
}

@property (nonatomic, retain) HKActivitySummary *activitySummary;
@property (nonatomic, retain) NSNumber *biologicalSex;
@property (nonatomic, retain) NSDateComponents *dateOfBirth;
@property (nonatomic, readonly) NSArray *diagnosticData;
@property (nonatomic, retain) HKQuantitySample *heightSample;
@property (nonatomic, retain) NSDate *startOfDay;
@property (nonatomic, retain) HKQuantitySample *weightSample;

- (void).cxx_destruct;
- (id)activitySummary;
- (void)addDiagnosticDataObject:(id)arg1;
- (id)biologicalSex;
- (id)dateOfBirth;
- (id)diagnosticData;
- (id)heightSample;
- (id)init;
- (void)setActivitySummary:(id)arg1;
- (void)setBiologicalSex:(id)arg1;
- (void)setDateOfBirth:(id)arg1;
- (void)setHeightSample:(id)arg1;
- (void)setStartOfDay:(id)arg1;
- (void)setWeightSample:(id)arg1;
- (id)startOfDay;
- (id)weightSample;

@end
