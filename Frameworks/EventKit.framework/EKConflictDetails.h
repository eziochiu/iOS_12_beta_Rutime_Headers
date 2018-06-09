/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKConflictDetails : NSObject {
    CalDateRange * _conflictPeriodForSeries;
    NSArray * _conflictingDates;
    NSArray * _conflictingEvents;
    NSArray * _needsActionEvents;
    unsigned long long  _totalConflictingEvents;
    unsigned long long  _totalConflictsInSeries;
    unsigned long long  _totalNeedsActionEvents;
    unsigned long long  _totalOccurrencesInSeries;
}

@property (retain) CalDateRange *conflictPeriodForSeries;
@property (retain) NSArray *conflictingDates;
@property (retain) NSArray *conflictingEvents;
@property (retain) NSArray *needsActionEvents;
@property unsigned long long totalConflictingEvents;
@property unsigned long long totalConflictsInSeries;
@property unsigned long long totalNeedsActionEvents;
@property unsigned long long totalOccurrencesInSeries;

+ (id)_dateRangeToScanForConflictsForEvent:(id)arg1 dateForNow:(id)arg2;
+ (double)_maxRangeLengthForRule:(id)arg1;
+ (id)calendarIdentifiersToScanForConflictsForEvent:(id)arg1;
+ (id)dateRangeToScanForConflictsForEvent:(id)arg1;
+ (id)infoWithConflicts:(long long)arg1 needsAction:(long long)arg2 event:(id)arg3;
+ (id)infoWithConflictsInSeries:(long long)arg1 outOf:(long long)arg2 withPeriod:(id)arg3;

- (void).cxx_destruct;
- (id)conflictPeriodForSeries;
- (id)conflictingDates;
- (id)conflictingEvents;
- (id)description;
- (id)initWithConflictingDates:(id)arg1 conflictingEvents:(id)arg2 needsActionEvents:(id)arg3 totalOccurrencesInSeries:(unsigned long long)arg4 conflictPeriodForSeries:(id)arg5;
- (id)needsActionEvents;
- (void)setConflictPeriodForSeries:(id)arg1;
- (void)setConflictingDates:(id)arg1;
- (void)setConflictingEvents:(id)arg1;
- (void)setNeedsActionEvents:(id)arg1;
- (void)setTotalConflictingEvents:(unsigned long long)arg1;
- (void)setTotalConflictsInSeries:(unsigned long long)arg1;
- (void)setTotalNeedsActionEvents:(unsigned long long)arg1;
- (void)setTotalOccurrencesInSeries:(unsigned long long)arg1;
- (unsigned long long)totalConflictingEvents;
- (unsigned long long)totalConflictsInSeries;
- (unsigned long long)totalNeedsActionEvents;
- (unsigned long long)totalOccurrencesInSeries;

@end
