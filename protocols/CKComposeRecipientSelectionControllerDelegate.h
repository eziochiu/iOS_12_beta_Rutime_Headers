/* made by EzioChiu.
 */

@protocol CKComposeRecipientSelectionControllerDelegate <NSObject, CKRecipientSelectionControllerDelegate>

@required

- (void)recipientSelectionController:(CKComposeRecipientSelectionController *)arg1 didSelectConversation:(CKConversation *)arg2;

@end
