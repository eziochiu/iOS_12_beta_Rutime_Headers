/* made by EzioChiu.
 */

@protocol MFGroupDetailViewControllerDelegate <NSObject>

@required

- (void)groupDetailViewController:(MFGroupDetailViewController *)arg1 didAskToRemoveGroup:(MFRecentComposeRecipientGroup *)arg2;
- (void)groupDetailViewController:(MFGroupDetailViewController *)arg1 didTapComposeRecipient:(MFRecentComposeRecipient *)arg2;
- (void)groupDetailViewControllerDidCancel:(MFGroupDetailViewController *)arg1;

@end
