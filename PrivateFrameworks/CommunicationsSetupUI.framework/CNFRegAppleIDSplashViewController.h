/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController {
    CNFRegController * _regController;
    long long  _serviceType;
    bool  _showBusyUIOnAppearance;
}

@property (retain) CNFRegController *regController;
@property long long serviceType;
@property bool showBusyUIOnAppearance;

+ (id)_inProgressRegisteringNonPhoneAccountForService:(id)arg1;
+ (bool)shouldShowSplashViewForService:(id)arg1 inProgressRegisteringNonPhoneAccount:(id*)arg2;

- (void).cxx_destruct;
- (void)_applicationDidResume:(id)arg1;
- (void)_cnfSignInWithUsername:(id)arg1 password:(id)arg2;
- (void)_completeIfAccountIsAlreadyRegistered;
- (void)_handleRegistarResults:(bool)arg1 alertController:(id)arg2;
- (id)_iCloudUserName;
- (id)_imService;
- (void)_showSettingsController;
- (void)continueRegisteringAccount:(id)arg1;
- (void)dealloc;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (id)regController;
- (id)serviceDescription;
- (id)serviceIcon;
- (id)serviceName;
- (long long)serviceType;
- (void)setRegController:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setShowBusyUIOnAppearance:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (bool)showBusyUIOnAppearance;
- (void)viewWillAppear:(bool)arg1;

@end
