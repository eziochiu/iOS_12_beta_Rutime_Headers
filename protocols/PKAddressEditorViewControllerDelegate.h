/* made by EzioChiu.
 */

@protocol PKAddressEditorViewControllerDelegate

@required

- (void)addressEditorViewController:(PKAddressEditorViewController *)arg1 selectedContact:(CNContact *)arg2;
- (void)addressEditorViewControllerDidCancel:(PKAddressEditorViewController *)arg1;

@end
