/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICoreTelephonyCapabilitiesCache : NSObject {
    CoreTelephonyClient * _client;
    NSMutableDictionary * _volteCapabilityDict;
    NSMutableDictionary * _volteCapabilityInfoDict;
    NSMutableDictionary * _volteEnabledDict;
    NSObject<OS_dispatch_group> * _volteEnabledGroup;
    bool  _volteEnabledInitialized;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *volteCapabilityDict;
@property (copy) NSMutableDictionary *volteCapabilityInfoDict;
@property (retain) NSMutableDictionary *volteEnabledDict;
@property (retain) NSObject<OS_dispatch_group> *volteEnabledGroup;
@property bool volteEnabledInitialized;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)canChangeVoLTESettingEnableStillProvisioning:(id)arg1;
- (bool)canSetCapabilityVoLTE:(id)arg1;
- (bool)cannotChangeVoLTESettingCallCarrier:(id)arg1;
- (bool)capabilityEnabledVoLTE:(id)arg1;
- (id)client;
- (void)fetchCanSetCapabilityVoLTE;
- (void)fetchCapabilityEnabledVoLTE;
- (id)init;
- (id)initPrivate;
- (void)setCapabilityVoLTE:(id)arg1 enabled:(bool)arg2;
- (void)setClient:(id)arg1;
- (void)setVolteCapabilityDict:(id)arg1;
- (void)setVolteCapabilityInfoDict:(id)arg1;
- (void)setVolteEnabledDict:(id)arg1;
- (void)setVolteEnabledGroup:(id)arg1;
- (void)setVolteEnabledInitialized:(bool)arg1;
- (id)volteCapabilityDict;
- (id)volteCapabilityInfoDict;
- (id)volteEnabledDict;
- (id)volteEnabledGroup;
- (bool)volteEnabledInitialized;

@end
