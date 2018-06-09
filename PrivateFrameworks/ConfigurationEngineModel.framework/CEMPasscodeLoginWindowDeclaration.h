/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMPasscodeLoginWindowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadAdminHostInfo;
    NSArray * _payloadAllowList;
    NSArray * _payloadDenyList;
    NSNumber * _payloadDisableConsoleAccess;
    NSNumber * _payloadDisableScreenLockImmediate;
    NSNumber * _payloadHideAdminUsers;
    NSNumber * _payloadHideLocalUsers;
    NSNumber * _payloadHideMobileAccounts;
    NSNumber * _payloadIncludeNetworkUser;
    NSNumber * _payloadLogOutDisabledWhileLoggedIn;
    NSString * _payloadLoginwindowText;
    NSNumber * _payloadPowerOffDisabledWhileLoggedIn;
    NSNumber * _payloadRestartDisabled;
    NSNumber * _payloadRestartDisabledWhileLoggedIn;
    NSNumber * _payloadSHOWFULLNAME;
    NSNumber * _payloadSHOWOTHERUSERSMANAGED;
    NSNumber * _payloadShutDownDisabled;
    NSNumber * _payloadShutDownDisabledWhileLoggedIn;
    NSNumber * _payloadSleepDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAdminHostInfo;
@property (nonatomic, copy) NSArray *payloadAllowList;
@property (nonatomic, copy) NSArray *payloadDenyList;
@property (nonatomic, copy) NSNumber *payloadDisableConsoleAccess;
@property (nonatomic, copy) NSNumber *payloadDisableScreenLockImmediate;
@property (nonatomic, copy) NSNumber *payloadHideAdminUsers;
@property (nonatomic, copy) NSNumber *payloadHideLocalUsers;
@property (nonatomic, copy) NSNumber *payloadHideMobileAccounts;
@property (nonatomic, copy) NSNumber *payloadIncludeNetworkUser;
@property (nonatomic, copy) NSNumber *payloadLogOutDisabledWhileLoggedIn;
@property (nonatomic, copy) NSString *payloadLoginwindowText;
@property (nonatomic, copy) NSNumber *payloadPowerOffDisabledWhileLoggedIn;
@property (nonatomic, copy) NSNumber *payloadRestartDisabled;
@property (nonatomic, copy) NSNumber *payloadRestartDisabledWhileLoggedIn;
@property (nonatomic, copy) NSNumber *payloadSHOWFULLNAME;
@property (nonatomic, copy) NSNumber *payloadSHOWOTHERUSERSMANAGED;
@property (nonatomic, copy) NSNumber *payloadShutDownDisabled;
@property (nonatomic, copy) NSNumber *payloadShutDownDisabledWhileLoggedIn;
@property (nonatomic, copy) NSNumber *payloadSleepDisabled;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withSHOWFULLNAME:(id)arg2 withHideLocalUsers:(id)arg3 withIncludeNetworkUser:(id)arg4 withHideAdminUsers:(id)arg5 withSHOWOTHERUSERSMANAGED:(id)arg6 withAdminHostInfo:(id)arg7 withAllowList:(id)arg8 withDenyList:(id)arg9 withHideMobileAccounts:(id)arg10 withShutDownDisabled:(id)arg11 withRestartDisabled:(id)arg12 withSleepDisabled:(id)arg13 withDisableConsoleAccess:(id)arg14 withLoginwindowText:(id)arg15 withShutDownDisabledWhileLoggedIn:(id)arg16 withRestartDisabledWhileLoggedIn:(id)arg17 withPowerOffDisabledWhileLoggedIn:(id)arg18 withLogOutDisabledWhileLoggedIn:(id)arg19 withDisableScreenLockImmediate:(id)arg20;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAdminHostInfo;
- (id)payloadAllowList;
- (id)payloadDenyList;
- (id)payloadDisableConsoleAccess;
- (id)payloadDisableScreenLockImmediate;
- (id)payloadHideAdminUsers;
- (id)payloadHideLocalUsers;
- (id)payloadHideMobileAccounts;
- (id)payloadIncludeNetworkUser;
- (id)payloadLogOutDisabledWhileLoggedIn;
- (id)payloadLoginwindowText;
- (id)payloadPowerOffDisabledWhileLoggedIn;
- (id)payloadRestartDisabled;
- (id)payloadRestartDisabledWhileLoggedIn;
- (id)payloadSHOWFULLNAME;
- (id)payloadSHOWOTHERUSERSMANAGED;
- (id)payloadShutDownDisabled;
- (id)payloadShutDownDisabledWhileLoggedIn;
- (id)payloadSleepDisabled;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAdminHostInfo:(id)arg1;
- (void)setPayloadAllowList:(id)arg1;
- (void)setPayloadDenyList:(id)arg1;
- (void)setPayloadDisableConsoleAccess:(id)arg1;
- (void)setPayloadDisableScreenLockImmediate:(id)arg1;
- (void)setPayloadHideAdminUsers:(id)arg1;
- (void)setPayloadHideLocalUsers:(id)arg1;
- (void)setPayloadHideMobileAccounts:(id)arg1;
- (void)setPayloadIncludeNetworkUser:(id)arg1;
- (void)setPayloadLogOutDisabledWhileLoggedIn:(id)arg1;
- (void)setPayloadLoginwindowText:(id)arg1;
- (void)setPayloadPowerOffDisabledWhileLoggedIn:(id)arg1;
- (void)setPayloadRestartDisabled:(id)arg1;
- (void)setPayloadRestartDisabledWhileLoggedIn:(id)arg1;
- (void)setPayloadSHOWFULLNAME:(id)arg1;
- (void)setPayloadSHOWOTHERUSERSMANAGED:(id)arg1;
- (void)setPayloadShutDownDisabled:(id)arg1;
- (void)setPayloadShutDownDisabledWhileLoggedIn:(id)arg1;
- (void)setPayloadSleepDisabled:(id)arg1;

@end
