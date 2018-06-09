/* made by EzioChiu.
 */

@protocol CoreTelephonyClientCarrierBundleDelegate <NSObject>

@optional

- (void)carrierBundleChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)operatorBundleChange:(CTXPCServiceSubscriptionContext *)arg1;

@end
