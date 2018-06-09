/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardDateComponentsFormatter : NSFormatter {
    NSDateFormatter * _compactYearMonthDayDateFormatter;
    NSDateFormatter * _compactYearMonthDayDateHourMinuteSecondZFormatter;
    NSCalendar * _gregorianCalendar;
    NSDateFormatter * _monthDayDateFormatter;
    NSDateFormatter * _yearMonthDayDateFormatter;
    NSDateFormatter * _yearMonthDayDateHourMinuteSecondZFormatter;
}

+ (id)dateComponentsFromALTBDAYString:(id)arg1;

- (void).cxx_destruct;
- (id)altBDAYStringFromDateComponents:(id)arg1;
- (id)compactYearMonthDayDateFormatter;
- (id)compactYearMonthDayDateHourMinuteSecondZFormatter;
- (id)dateComponentsFromALTBDAYString:(id)arg1;
- (id)dateComponentsFromString:(id)arg1;
- (bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)gregorianCalendar;
- (id)monthDayDateFormatter;
- (id)monthDayStringFromDateComponents:(id)arg1;
- (id)stringForComponentValue:(long long)arg1 format:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDateComponents:(id)arg1;
- (id)yearMonthDayDateFormatter;
- (id)yearMonthDayDateHourMinuteSecondZFormatter;
- (id)yearMonthDayStringFromDateComponents:(id)arg1;

@end
