/* made by EzioChiu.
 */

@protocol CKDetailsContactsTableViewCellDelegate <NSObject>

@required

- (void)contactsCellDidTapFaceTimeVideoButton:(CKDetailsContactsTableViewCell *)arg1;
- (void)contactsCellDidTapMessagesButton:(CKDetailsContactsTableViewCell *)arg1;
- (void)contactsCellDidTapPhoneButton:(CKDetailsContactsTableViewCell *)arg1;

@end
