/* made by EzioChiu.
 */

@protocol HMUserDelegatePrivate <NSObject>

@optional

- (void)user:(HMUser *)arg1 didUpdateAssistantAccessControl:(HMAssistantAccessControl *)arg2 forHome:(HMHome *)arg3;
- (void)user:(HMUser *)arg1 didUpdatePairingIdentity:(HMFPairingIdentity *)arg2;

@end
