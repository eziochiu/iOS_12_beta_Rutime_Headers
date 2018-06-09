/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUDialAssist : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    CoreTelephonyClient * _coreTelephonyClient;
    int  _dialAssistUserSettingsChangedToken;
}

@property (nonatomic, readonly) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int dialAssistUserSettingsChangedToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)carrierBundleChange:(id)arg1;
- (id)coreTelephonyClient;
- (void)dealloc;
- (int)dialAssistUserSettingsChangedToken;
- (id)init;
- (void)operatorBundleChange:(id)arg1;

@end
