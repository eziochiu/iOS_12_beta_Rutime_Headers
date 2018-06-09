/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDWorkoutCondensationConfiguration : NSObject {
    long long  _maximumSeriesSize;
    long long  _minimumSeriesSize;
    double  _minimumWorkoutDuration;
    HDSQLitePredicate * _predicate;
    HDProfile * _profile;
}

@property (nonatomic, readonly) long long maximumSeriesSize;
@property (nonatomic, readonly) long long minimumSeriesSize;
@property (nonatomic, readonly) double minimumWorkoutDuration;
@property (nonatomic, readonly) HDSQLitePredicate *predicate;
@property (nonatomic, readonly) HDProfile *profile;

+ (id)configurationWithProfile:(id)arg1 minimumSeriesSize:(long long)arg2 maximumSeriesSize:(long long)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 predicate:(id)arg2 minimumWorkoutDuration:(double)arg3 minimumSeriesSize:(long long)arg4 maximumSeriesSize:(long long)arg5;
- (long long)maximumSeriesSize;
- (long long)minimumSeriesSize;
- (double)minimumWorkoutDuration;
- (id)predicate;
- (id)profile;

@end
