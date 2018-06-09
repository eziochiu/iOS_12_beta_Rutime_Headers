/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerMode_Time : _UIDatePickerMode {
    NSString * _hourFormat;
    NSString * _minuteFormat;
    double  _timeAMPMWidth;
    double  _timeHourWidth;
    double  _timeMinuteWidth;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (void).cxx_destruct;
- (bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (void)_shouldReset:(id)arg1;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (long long)displayedCalendarUnits;
- (id)font;
- (id)localizedFormatString;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (void)resetComponentWidths;
- (double)rowHeight;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;

@end
