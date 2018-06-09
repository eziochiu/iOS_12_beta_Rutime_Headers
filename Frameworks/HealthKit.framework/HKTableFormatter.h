/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKTableFormatter : NSObject {
    NSArray * _columns;
    NSDateFormatter * _dateFormatter;
    NSArray * _titles;
}

@property (nonatomic, readonly) long long rowCount;

+ (id)formatterForCodableCondensedWorkouts;

- (void).cxx_destruct;
- (void)appendRow:(id)arg1;
- (void)appendWorkout:(id)arg1;
- (id)formattedTable;
- (id)init;
- (id)initWithColumnTitles:(id)arg1;
- (long long)rowCount;
- (id)stringFromDate:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;

@end
