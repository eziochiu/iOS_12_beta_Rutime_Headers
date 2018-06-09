/* made by EzioChiu.
 */

@protocol HMHomeDelegatePrivate <HMHomeDelegate>

@optional

- (void)home:(HMHome *)arg1 didAddMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didAddResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didEnableNotifications:(bool)arg2;
- (void)home:(HMHome *)arg1 didRemoveMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didRemoveResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccesoryInvitationsForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateLastExecutionDateForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPassword:(NSString *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPeerToPeerEnabled:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateReprovisionStateForAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)homeDidUpdateApplicationData:(HMHome *)arg1;

@end
