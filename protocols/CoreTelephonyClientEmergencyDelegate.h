/* made by EzioChiu.
 */

@protocol CoreTelephonyClientEmergencyDelegate <NSObject>

@optional

- (void)emergencyModeChanged:(CTXPCServiceSubscriptionContext *)arg1 mode:(CTEmergencyMode *)arg2;

@end
