/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STContentPrivacyAllowedAppsDetailController : PSListController {
    <STContentPrivacyViewModelCoordinator> * _coordinator;
}

@property (nonatomic, retain) <STContentPrivacyViewModelCoordinator> *coordinator;

- (void).cxx_destruct;
- (void)_addSystemAppSwitchSpecifier:(id)arg1 forBundleID:(id)arg2;
- (void)addAppButtonPressed:(id)arg1;
- (id)coordinator;
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 icon:(id)arg3;
- (id)defaultSwitchSpecifierWithItem:(id)arg1 label:(id)arg2 icon:(id)arg3;
- (id)getItemSpecifierValue:(id)arg1;
- (id)init;
- (id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3;
- (void)setCoordinator:(id)arg1;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
