/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUIInternal.framework/CoreCDPUIInternal
 */

@interface SettingsController : PSListController <CDPAuthProvider> {
    bool  _didUseSMS;
    CDPRecoveryController * _recoveryController;
    CDPRecoveryTestController * _recoveryTestController;
    CDPUIController * _uiController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextForPrimaryAccount;
- (bool)_didUseSMSVerification;
- (id)_fakeDevicesWithExpectedSecret:(id)arg1 isNumber:(bool)arg2 numericLength:(id)arg3;
- (bool)_forceInlineUI;
- (void)_loadSpecifiers;
- (bool)_offerRemoteApproval;
- (id)_recoverAndSyncrhonizeDataSpecifier;
- (void)_recoverAndSyncrhonizeStingrayData:(id)arg1;
- (void)_recoverStingrayData:(id)arg1;
- (id)_recoverStingrayDataSpecifier;
- (id)_recoveryKeySpecifier;
- (id)_recoveryKeySpecifierRegen;
- (void)beginFMIPRecovery:(id)arg1;
- (void)beginIDMSRecovery:(id)arg1;
- (void)beginIDMSRecoveryPrimary:(id)arg1;
- (void)beginIDMSRecoveryRK:(id)arg1;
- (void)beginIDMSRecoveryWithFailure:(id)arg1;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(id /* block */)arg3;
- (void)enableCDP:(id)arg1;
- (void)generateNewRecoveryKey:(id)arg1;
- (id)getUserDefaultEnabled:(id)arg1;
- (void)promptFor4DigitICSC:(id)arg1;
- (void)promptFor4DigitRemoteSecret:(id)arg1;
- (void)promptFor6DigitICSC:(id)arg1;
- (void)promptFor6DigitRemoteSecret:(id)arg1;
- (void)promptForComplexICSC:(id)arg1;
- (void)promptForCustomAlphanumericRemoteSecret:(id)arg1;
- (void)promptForCustomNumericRemoteSecret:(id)arg1;
- (void)promptForLocalSecret:(id)arg1;
- (void)promptForRandomICSC:(id)arg1;
- (void)removeSpinnerFromSpecifier:(id)arg1;
- (void)setUserDefaultEnabled:(id)arg1 specifier:(id)arg2;
- (bool)shouldAllowCDPEnrollment;
- (id)specifiers;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)viewDidLoad;

@end
