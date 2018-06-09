/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLocaleController : PSViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIView * _contentView;
    PSRegion * _currentRegion;
    NSArray * _filteredListContent;
    bool  _hideKeyboardInSearchMode;
    PSLocaleSelector * _localeSelector;
    NSArray * _regionsList;
    UISearchBar * _searchBar;
    bool  _searchMode;
    NSArray * _sections;
    UITableView * _tableView;
}

@property (nonatomic, retain) PSRegion *currentRegion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *filteredListContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSLocaleSelector *localeSelector;
@property (nonatomic, retain) NSArray *regionsList;
@property (nonatomic, retain) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mainContentView;
- (id)currentRegion;
- (void)dealloc;
- (id)filteredListContent;
- (id)filteredRegionsForRegionList:(id)arg1 searchString:(id)arg2;
- (void)loadRegions;
- (void)loadView;
- (id)localeSelector;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)regionsList;
- (void)reloadDataAndScrollToCheckedRegionAnimated:(bool)arg1;
- (void)reloadSections;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (void)setCurrentRegion:(id)arg1;
- (void)setFilteredListContent:(id)arg1;
- (void)setLocaleSelector:(id)arg1;
- (void)setRegionsList:(id)arg1;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateChecked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
