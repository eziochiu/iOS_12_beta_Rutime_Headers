/* made by EzioChiu.
 */

@protocol CNContactPickerHostProtocol <NSObject>

@required

- (void)pickerDidCancel;
- (void)pickerDidSelectContact:(CNContact *)arg1 property:(CNContactProperty *)arg2;
- (void)pickerDidSelectContacts:(NSArray *)arg1 properties:(NSArray *)arg2;

@end
