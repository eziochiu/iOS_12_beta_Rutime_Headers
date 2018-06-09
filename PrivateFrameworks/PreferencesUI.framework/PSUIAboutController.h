/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAboutController : PSListController {
    id  _effectiveSettingsChangedNotificationObserver;
    bool  _firstViewDidAppear;
}

@property (nonatomic, retain) id effectiveSettingsChangedNotificationObserver;

- (void).cxx_destruct;
- (id)deviceName:(id)arg1;
- (id)effectiveSettingsChangedNotificationObserver;
- (id)init;
- (void)setDeviceName:(id)arg1 specifier:(id)arg2;
- (void)setEffectiveSettingsChangedNotificationObserver:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateDeviceNameSpecifierIfNeeded;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willUnlock;

@end
