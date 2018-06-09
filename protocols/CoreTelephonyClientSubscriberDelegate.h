/* made by EzioChiu.
 */

@protocol CoreTelephonyClientSubscriberDelegate <NSObject>

@optional

- (void)simLockSaveRequestDidComplete:(CTXPCServiceSubscriptionContext *)arg1 success:(bool)arg2;
- (void)simPinChangeRequestDidComplete:(CTXPCServiceSubscriptionContext *)arg1 success:(bool)arg2;
- (void)simPinEntryErrorDidOccur:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
- (void)simPukEntryErrorDidOccur:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
- (void)simStatusDidChange:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;

@end
