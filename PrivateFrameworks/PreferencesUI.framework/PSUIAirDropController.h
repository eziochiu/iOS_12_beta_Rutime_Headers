/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAirDropController : PSListController <SFAirDropDiscoveryControllerDelegate> {
    SFAirDropDiscoveryController * _airDropDiscoveryController;
    PSSpecifier * _contactsOnlySpecifier;
    PSSpecifier * _everyoneSpecifier;
    PSSpecifier * _groupSpecifier;
    PSSpecifier * _offSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_refreshFooterForSpecifier:(id)arg1;
- (void)_updateSpecifiersFromPreferences;
- (void)dealloc;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (id)init;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
