/* made by EzioChiu.
 */

@protocol FAPickInviteeDelegate <NSObject>

@required

- (void)pickInviteeViewController:(FAFamilyPickInviteeViewController *)arg1 didCompleteWithSuccess:(bool)arg2;
- (void)pickInviteeViewControllerWantsChildAccountFlow:(FAFamilyPickInviteeViewController *)arg1;

@end
