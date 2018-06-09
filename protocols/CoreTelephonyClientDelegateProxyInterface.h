/* made by EzioChiu.
 */

@protocol CoreTelephonyClientDelegateProxyInterface <NSObject, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientEmergencyDelegate, CoreTelephonyClientSMSDelegate, CoreTelephonyClientVoicemailDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientCapabilitiesDelegate, CoreTelephonyClientSuppServicesDelegate>

@required

- (void)remoteObjectRespondsToSelector:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SEL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
