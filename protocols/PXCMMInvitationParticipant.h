/* made by EzioChiu.
 */

@protocol PXCMMInvitationParticipant <NSObject>

@required

- (NSString *)displayName;
- (NSString *)emailAddressString;
- (NSString *)firstName;
- (NSString *)phoneNumberString;

@end
