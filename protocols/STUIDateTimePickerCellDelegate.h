/* made by EzioChiu.
 */

@protocol STUIDateTimePickerCellDelegate

@required

- (void)datePickerChanged:(id)arg1;

@optional

- (UIDatePicker *)datePickerForSpecifier:(PSSpecifier *)arg1;

@end
