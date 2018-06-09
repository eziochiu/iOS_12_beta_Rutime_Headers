/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NPHCarrierInfoCompanionReplication : NSObject {
    NSUserDefaults * _mobilePhoneUserDefaults;
    NPSManager * _npsManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)NPHVMServiceSubscriptionStatusChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)updateIsVisualVoicemailServiceSubscribed;
- (void)updateShouldHideVoicemailUI;

@end
