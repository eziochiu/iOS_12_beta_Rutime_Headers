/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIWirelessDataOptionsController : PSListController {
    PSSpecifier * _groupSpecifier;
    PSUIAppCellularUsageGroup * _perAppUsageController;
}

@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (nonatomic, retain) PSUIAppCellularUsageGroup *perAppUsageController;

- (void).cxx_destruct;
- (void)_handleCellularPlanChangedNotification:(id)arg1;
- (void)_handleNewCarrierNotification:(id)arg1;
- (void)_handleSIMStatusReadyNotification:(id)arg1;
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)groupSpecifier;
- (id)init;
- (void)perAppSpecifiersFinishedLoading;
- (id)perAppUsageController;
- (void)setGroupSpecifier:(id)arg1;
- (void)setPerAppUsageController:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;

@end
