/* made by EzioChiu.
 */

@protocol CNContactViewControllerPrivateDelegate <CNContactViewControllerDelegate>

@optional

- (void)contactViewController:(CNContactViewController *)arg1 didChangeToEditMode:(bool)arg2;
- (void)contactViewController:(CNContactViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(CNContactViewController *)arg1;
- (void)contactViewControllerForUnknownContactDidEndAddingToContacts:(CNContactViewController *)arg1;

@end
