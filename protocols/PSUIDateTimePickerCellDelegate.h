/* made by EzioChiu.
 */

@protocol PSUIDateTimePickerCellDelegate

@required

- (void)datePickerChanged:(id)arg1;

@optional

- (UIDatePicker *)datePickerForSpecifier:(PSSpecifier *)arg1;

@end
