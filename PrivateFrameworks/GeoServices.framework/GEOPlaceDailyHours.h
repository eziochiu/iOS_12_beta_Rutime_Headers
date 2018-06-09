/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDailyHours : NSObject {
    double  _closingSoonThresholdSeconds;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dayOfWeekRange;
    NSArray * _openIntervals;
    double  _openingSoonThresholdSeconds;
}

@property (nonatomic) double closingSoonThresholdSeconds;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } dayOfWeekRange;
@property (readonly) NSArray *openIntervals;
@property (nonatomic) double openingSoonThresholdSeconds;

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withClosingThreshold:(double)arg3 withOpeningThreshold:(double)arg4;

- (void).cxx_destruct;
- (id)_intervalContainingDate:(id)arg1 intervals:(id)arg2;
- (double)closingSoonThresholdSeconds;
- (bool)containsWeekday:(unsigned long long)arg1;
- (id)dateIntervalInOpenIntervalsContainingDate:(id)arg1 withOpeningThreshold:(double)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dayOfWeekRange;
- (id)description;
- (id)openIntervals;
- (double)openingSoonThresholdSeconds;
- (void)setClosingSoonThresholdSeconds:(double)arg1;
- (void)setOpeningSoonThresholdSeconds:(double)arg1;

@end
