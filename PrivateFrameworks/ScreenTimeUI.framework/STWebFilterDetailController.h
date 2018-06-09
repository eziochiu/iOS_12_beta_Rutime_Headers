/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STWebFilterDetailController : PSListController {
    <STContentPrivacyViewModelCoordinator> * _coordinator;
}

@property (nonatomic, retain) <STContentPrivacyViewModelCoordinator> *coordinator;

- (void).cxx_destruct;
- (id)_addButtonSpecifierWithGroup:(id)arg1 action:(SEL)arg2;
- (id)_listItemSpecifiersForNamedSitesGroup:(id)arg1;
- (id)_listItemSpecifiersForSitesGroup:(id)arg1;
- (void)addNamedSite:(id)arg1;
- (void)addSite:(id)arg1;
- (id)coordinator;
- (id)getItemSpecifierValue:(id)arg1;
- (id)groupSpecifierWithConfiguration:(id)arg1 key:(id)arg2 footerText:(id)arg3 radio:(bool)arg4;
- (id)init;
- (id)listItemSpecifierWithGroup:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)saveItemValue:(id)arg1 specifier:(id)arg2;
- (void)saveRemovingItem:(id)arg1 value:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
