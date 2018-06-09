/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAllowanceSetupListController : PSListController {
    PSSpecifier * _allAppsAndCategoriesSpecifier;
    PSSpecifier * _categoriesGroupSpecifier;
    <STAllowanceSetupListControllerDelegate> * _delegate;
}

@property (nonatomic, retain) PSSpecifier *allAppsAndCategoriesSpecifier;
@property (nonatomic, retain) PSSpecifier *categoriesGroupSpecifier;
@property <STAllowanceSetupListControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)addButtonTapped:(id)arg1;
- (id)allAppsAndCategoriesSpecifier;
- (void)cancelButtonTapped:(id)arg1;
- (id)categoriesGroupSpecifier;
- (id)categorySpecifiers;
- (id)delegate;
- (id)init;
- (void)loadView;
- (void)setAllAppsAndCategoriesSpecifier:(id)arg1;
- (void)setCategoriesGroupSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
