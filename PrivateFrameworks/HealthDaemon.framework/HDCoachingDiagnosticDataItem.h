/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCoachingDiagnosticDataItem : NSObject {
    double  _activeCalories;
    double  _automotive;
    double  _briskMinutes;
    double  _cycling;
    double  _heartRate;
    double  _other;
    double  _running;
    double  _unknown;
    double  _walking;
    double  _workout;
}

@property (nonatomic) double activeCalories;
@property (nonatomic) double automotive;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double cycling;
@property (nonatomic) double heartRate;
@property (nonatomic) double other;
@property (nonatomic) double running;
@property (nonatomic) double unknown;
@property (nonatomic) double walking;
@property (nonatomic) double workout;

- (double)activeCalories;
- (double)automotive;
- (double)briskMinutes;
- (double)cycling;
- (id)description;
- (double)heartRate;
- (double)other;
- (double)running;
- (void)setActiveCalories:(double)arg1;
- (void)setAutomotive:(double)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setCycling:(double)arg1;
- (void)setHeartRate:(double)arg1;
- (void)setOther:(double)arg1;
- (void)setRunning:(double)arg1;
- (void)setUnknown:(double)arg1;
- (void)setWalking:(double)arg1;
- (void)setWorkout:(double)arg1;
- (double)unknown;
- (double)walking;
- (double)workout;

@end
