/* made by EzioChiu.
 */

@protocol CoreTelephonyClientDataDelegate <NSObject>

@optional

- (void)connectionActivationError:(CTXPCServiceSubscriptionContext *)arg1 connection:(int)arg2 error:(int)arg3;
- (void)connectionAvailability:(CTXPCServiceSubscriptionContext *)arg1 availableConnections:(NSArray *)arg2;
- (void)connectionStateChanged:(CTXPCServiceSubscriptionContext *)arg1 connection:(int)arg2 dataConnectionStatusInfo:(CTDataConnectionStatus *)arg3;
- (void)dataStatus:(CTXPCServiceSubscriptionContext *)arg1 dataStatusInfo:(CTDataStatus *)arg2;
- (void)preferredDataSimChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)servingNetworkChanged:(CTXPCServiceSubscriptionContext *)arg1;

@end
