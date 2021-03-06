/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

@interface TPSCarrierBundleController : TPSTelephonyController

- (void)carrierBundleChange:(id)arg1;
- (id)localizedCarrierNameForSubscriptionContext:(id)arg1;
- (id)objectForKey:(id)arg1 subscriptionContext:(id)arg2;
- (id)objectForKey:(id)arg1 subscriptionContext:(id)arg2 error:(id*)arg3;
- (void)operatorBundleChange:(id)arg1;

@end
