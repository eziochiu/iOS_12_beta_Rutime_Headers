/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date

+ (long long)datePickerMode;

- (bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (id)selectedDateComponents;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (long long)yearForRow:(long long)arg1;

@end
