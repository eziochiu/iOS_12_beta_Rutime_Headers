/* made by EzioChiu.
 */

@protocol CKRecipientSelectionControllerDelegate <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsForRecipientSelectionController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 didFinishAvailaiblityLookupForRecipient:(MFComposeRecipient *)arg2;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 textDidChange:(NSString *)arg2;
- (void)recipientSelectionControllerDidChangeSize:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerReturnPressed:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(CKRecipientSelectionController *)arg1;

@end
