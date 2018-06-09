/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTSelectedPNRSubscription : NSObject {
    CoreTelephonyClient * _coreTelephonyClient;
}

- (void).cxx_destruct;
- (id)_legacy_carrierBundleValueForKey:(id)arg1 ofType:(Class)arg2;
- (bool)_userSelectionDoesMatchSubscriptionNumber:(long long)arg1;
- (id)init;
- (id)initWithCoreTelephonyClient:(id)arg1;
- (bool)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)arg1;
- (id)selectedPhoneNumberRegistrationRegistrationCarrierBundleValueForKey:(id)arg1 ofType:(Class)arg2 withFallbackValue:(id)arg3;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id*)arg1;
- (id)selectedRegistrationPhoneNumberWithError:(id*)arg1;

@end
