/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAllowancesConfigurationGroupSpecifierProvider : STRootGroupSpecifierProvider <STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate> {
    PSSpecifier * _alwaysAllowedSpecifier;
    PSSpecifier * _appLimitsSpecifier;
    PSSpecifier * _contentPrivacySpecifier;
    PSSpecifier * _deviceBedtimeSpecifier;
}

@property (nonatomic, retain) PSSpecifier *alwaysAllowedSpecifier;
@property (nonatomic, retain) PSSpecifier *appLimitsSpecifier;
@property (nonatomic, retain) PSSpecifier *contentPrivacySpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *deviceBedtimeSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alwaysAllowListController:(id)arg1 didFinishEditingAlwaysAllowList:(id)arg2;
- (id)alwaysAllowedDetailText;
- (id)alwaysAllowedSpecifier;
- (id)appLimitsDetailText;
- (id)appLimitsSpecifier;
- (void)bedtimeListController:(id)arg1 didFinishEditingBedtime:(id)arg2;
- (id)bundleIDsForType:(unsigned long long)arg1 excludingBundleIDs:(id)arg2;
- (id)contentPrivacyDetailText;
- (id)contentPrivacySpecifier;
- (id)deviceBedtimeSpecifier;
- (id)deviceDowntimeDetailText;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAlwaysAllowedSpecifier:(id)arg1;
- (void)setAppLimitsSpecifier:(id)arg1;
- (void)setContentPrivacySpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDeviceBedtimeSpecifier:(id)arg1;
- (void)showAlwaysAllowedViewController:(id)arg1;
- (void)showAppLimitsViewController:(id)arg1;
- (void)showContentPrivacyViewController:(id)arg1;
- (void)showDeviceBedtimeViewController:(id)arg1;

@end
