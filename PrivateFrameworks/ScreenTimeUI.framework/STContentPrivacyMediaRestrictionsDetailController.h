/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STContentPrivacyMediaRestrictionsDetailController : PSListController {
    <STContentPrivacyViewModelCoordinator> * _coordinator;
}

@property (nonatomic, retain) <STContentPrivacyViewModelCoordinator> *coordinator;

- (void).cxx_destruct;
- (id)coordinator;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 titlesByValue:(id)arg3 sortByTitle:(bool)arg4;
- (id)defaultLinkListSpecifierWithItem:(id)arg1 titlesByValue:(id)arg2 sortByTitle:(bool)arg3;
- (id)getItemSpecifierValue:(id)arg1;
- (id)init;
- (id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3;
- (void)setCoordinator:(id)arg1;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (void)showWebFilterRestrictions:(id)arg1;
- (id)specifiers;

@end
