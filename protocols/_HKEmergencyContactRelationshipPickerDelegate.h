/* made by EzioChiu.
 */

@protocol _HKEmergencyContactRelationshipPickerDelegate

@required

- (void)emergencyContactRelationshipPicker:(_HKEmergencyContactRelationshipPicker *)arg1 didChooseRelationshipNamed:(NSString *)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(_HKEmergencyContactRelationshipPicker *)arg1;

@end
