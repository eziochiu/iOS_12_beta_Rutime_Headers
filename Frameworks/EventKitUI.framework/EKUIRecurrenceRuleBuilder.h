/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIRecurrenceRuleBuilder : NSObject {
    unsigned long long  _count;
    NSArray * _dayNumbers;
    int  _days;
    long long  _frequency;
    long long  _interval;
    NSArray * _monthNumbers;
    int  _ordinalValue;
}

@property unsigned long long count;
@property (retain) NSArray *dayNumbers;
@property int days;
@property long long frequency;
@property long long interval;
@property (retain) NSArray *monthNumbers;
@property int ordinalValue;

- (void).cxx_destruct;
- (long long)_frequencyToUse;
- (void)_setDefaultValues;
- (unsigned long long)count;
- (id)dayNumbers;
- (int)days;
- (id)daysOfTheWeek;
- (id)daysOfTheWeekWithWeek:(long long)arg1;
- (id)description;
- (long long)frequency;
- (id)init;
- (long long)interval;
- (id)monthNumbers;
- (int)ordinalValue;
- (id)recurrenceRule;
- (void)setCount:(unsigned long long)arg1;
- (void)setDayNumbers:(id)arg1;
- (void)setDays:(int)arg1;
- (void)setFrequency:(long long)arg1;
- (void)setInterval:(long long)arg1;
- (void)setMonthNumbers:(id)arg1;
- (void)setOrdinalValue:(int)arg1;
- (id)setPositions;

@end
