/* made by EzioChiu.
 */

@protocol CoreTelephonyClientSuppServicesDelegate <NSObject>

@optional

- (void)phoneBookError:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookFetched:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookSelected:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookWritten:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneNumberAvailable:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneNumberChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)spcUnlockSuccessful:(CTXPCServiceSubscriptionContext *)arg1;
- (void)suppServicesEvent:(CTXPCServiceSubscriptionContext *)arg1 event:(int)arg2 settingsType:(int)arg3 data:(CTSuppServicesNotificationData *)arg4;

@end
