/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAlwaysAllowListController : PSListController {
    PSSpecifier * _allowedAppsGroupSpecifier;
    STAlwaysAllowList * _alwaysAllowList;
    PSSpecifier * _chooseAppsGroupSpecifier;
    NSArray * _chooseBundleIDs;
    <STAlwaysAllowListControllerDelegate> * _delegate;
}

@property (nonatomic, retain) PSSpecifier *allowedAppsGroupSpecifier;
@property (nonatomic, copy) STAlwaysAllowList *alwaysAllowList;
@property (nonatomic, retain) PSSpecifier *chooseAppsGroupSpecifier;
@property (nonatomic, copy) NSArray *chooseBundleIDs;
@property (nonatomic) <STAlwaysAllowListControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)allowedAppsGroupSpecifier;
- (id)allowedAppsSpecifiers;
- (id)alwaysAllowList;
- (id)appSpecifiersForBundleIDs:(id)arg1;
- (id)chooseAppsGroupSpecifier;
- (id)chooseAppsSpecifiers;
- (id)chooseBundleIDs;
- (id)delegate;
- (id)init;
- (void)setAllowedAppsGroupSpecifier:(id)arg1;
- (void)setAlwaysAllowList:(id)arg1;
- (void)setChooseAppsGroupSpecifier:(id)arg1;
- (void)setChooseBundleIDs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
