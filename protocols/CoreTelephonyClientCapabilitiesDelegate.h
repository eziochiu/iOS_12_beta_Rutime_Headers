/* made by EzioChiu.
 */

@protocol CoreTelephonyClientCapabilitiesDelegate <NSObject>

@optional

- (void)context:(CTXPCServiceSubscriptionContext *)arg1 capabilitiesChanged:(NSDictionary *)arg2;

@end
