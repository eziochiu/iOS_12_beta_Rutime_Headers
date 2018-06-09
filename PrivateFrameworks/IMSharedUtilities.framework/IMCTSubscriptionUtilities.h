/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate> {
    NSMutableDictionary * _cachedCarrierSettings;
    CoreTelephonyClient * _coreTelephonyClient;
    IMCTXPCServiceSubscriptionInfo * _ctSubscriptionInfo;
}

@property (nonatomic, retain) NSMutableDictionary *cachedCarrierSettings;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic, readonly) NSString *ctPhoneNumber;
@property (nonatomic, readonly) NSArray *ctServiceSubscriptions;
@property (nonatomic, retain) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createSettingsDictionaryPerPhoneNumber:(id)arg1;
- (id)_getCachedCarrierSettingOrReadFromBundleForCarrierBundleKey:(id)arg1 forContext:(id)arg2 defaultValue:(id)arg3;
- (id)_getCachedCarrierSettingValueForCarrierBundleKey:(id)arg1 forPhoneNumber:(id)arg2;
- (id)_getCarrierSettingsForPhoneNumber:(id)arg1;
- (void)_resetCachedCarrierSettingsForPhoneNumber:(id)arg1;
- (void)_resetSubscriptionInfo;
- (void)_setCachedCarrierSettingValue:(id)arg1 forCarrierBundleKey:(id)arg2 forPhoneNumber:(id)arg3;
- (void)_setCarrierSettings:(id)arg1 phoneNumber:(id)arg2;
- (id)cachedCarrierSettings;
- (void)carrierBundleChange:(id)arg1;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)arg1 key:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)coreTelephonyClient;
- (id)ctPhoneNumber;
- (id)ctServiceSubscriptions;
- (id)ctSubscriptionInfo;
- (id)ctSubscriptionInfoWithError:(id)arg1;
- (id)init;
- (id)newSubscriptionContextWithSlot:(long long)arg1;
- (void)setCachedCarrierSettings:(id)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setCtSubscriptionInfo:(id)arg1;
- (void)subscriptionInfoDidChange;

@end
