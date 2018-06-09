/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroRestrictionsViewController : STIntroSplashViewController <UITableViewDataSource, UITableViewDelegate> {
    STAllowance * _allowance;
    UITableView * _categoriesTableView;
    bool  _hasSetTimeAmount;
    UITableView * _settingsTableView;
    bool  _showAllCategories;
    bool  _showingDatePicker;
}

@property (retain) STAllowance *allowance;
@property (retain) UITableView *categoriesTableView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasSetTimeAmount;
@property (readonly) unsigned long long hash;
@property (retain) UITableView *settingsTableView;
@property bool showAllCategories;
@property bool showingDatePicker;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allowance;
- (id)categoriesTableView;
- (void)datePickerChanged:(id)arg1;
- (bool)hasSetTimeAmount;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedCategories;
- (void)setAllowance:(id)arg1;
- (void)setCategoriesTableView:(id)arg1;
- (void)setHasSetTimeAmount:(bool)arg1;
- (void)setSettingsTableView:(id)arg1;
- (void)setShowAllCategories:(bool)arg1;
- (void)setShowingDatePicker:(bool)arg1;
- (id)settingsTableView;
- (bool)showAllCategories;
- (bool)showingDatePicker;
- (id)sortedCategories;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
