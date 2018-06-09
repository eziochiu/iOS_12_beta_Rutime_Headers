/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSInternationalLanguageController : PSViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    PSLanguage * _checkedLanguage;
    UIView * _contentView;
    NSArray * _deviceLanguages;
    NSArray * _filteredDeviceLanguages;
    PSLanguageSelector * _languageSelector;
    PSLocaleSelector * _localeSelector;
    NSString * _savedSearchTerm;
    UISearchBar * _searchBar;
    bool  _searchIsActive;
    UITableView * _tableView;
}

@property (nonatomic, retain) PSLanguage *checkedLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *deviceLanguages;
@property (nonatomic, retain) NSArray *filteredDeviceLanguages;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSLanguageSelector *languageSelector;
@property (nonatomic, retain) PSLocaleSelector *localeSelector;
@property (nonatomic, retain) NSString *savedSearchTerm;
@property (nonatomic) bool searchIsActive;
@property (readonly) Class superclass;

+ (bool)capitalizeLanguageNames;

- (void).cxx_destruct;
- (id)_mainContentView;
- (void)cancelButtonTapped;
- (id)checkedLanguage;
- (void)dealloc;
- (id)deviceLanguages;
- (void)doneButtonTapped;
- (id)filteredDeviceLanguages;
- (id)filteredLanguagesForLanguageList:(id)arg1 searchString:(id)arg2;
- (void)generateLanguageCells;
- (id)languageSelector;
- (void)loadData;
- (void)loadView;
- (id)localeSelector;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDataAndScrollToCheckedLanguageWithAnimation:(bool)arg1;
- (id)savedSearchTerm;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (bool)searchIsActive;
- (void)setCheckedLanguage:(id)arg1;
- (void)setDeviceLanguages:(id)arg1;
- (void)setFilteredDeviceLanguages:(id)arg1;
- (void)setLanguageSelector:(id)arg1;
- (void)setLocaleSelector:(id)arg1;
- (void)setSavedSearchTerm:(id)arg1;
- (void)setSearchIsActive:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateNavigationItem;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
