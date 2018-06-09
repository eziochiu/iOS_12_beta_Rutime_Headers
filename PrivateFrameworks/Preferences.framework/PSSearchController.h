/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchController : NSObject <PSSearchModelDataSource, PSSearchModelDelegate, PSSearchResultsControllerDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    <PSSearchControllerDelegate> * _delegate;
    id /* block */  _iconForSearchEntryHandler;
    PSListController * _listController;
    int  _notifyToken;
    PSSearchResultsController * _resultsController;
    UISearchController * _searchController;
    bool  _searchEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSSearchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ iconForSearchEntryHandler;
@property (nonatomic, readonly) PSListController *listController;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildSearchUIIfNecessary;
- (void)_reloadSettings:(bool)arg1;
- (bool)_setBoolValue:(bool)arg1 forIvar:(bool*)arg2;
- (void)_updateListControllerHeaderView:(bool)arg1;
- (void)_updateSearchResultsWithText:(id)arg1;
- (bool)activateWithInitialText:(id)arg1 animated:(bool)arg2;
- (void)addRootSpecifiers:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didDismissSearchController:(id)arg1;
- (id /* block */)iconForSearchEntryHandler;
- (id)initWithListController:(id)arg1;
- (bool)isActive;
- (id)listController;
- (void)reloadRootSpecifiers:(id)arg1;
- (void)removeRootSpecifiers:(id)arg1;
- (Class)rootSearchControllerClassForSearchModel:(id)arg1;
- (id)rootSpecifiersForSearchModel:(id)arg1;
- (id)searchBar;
- (void)searchModel:(id)arg1 updatedWithNewResults:(id)arg2 forQuery:(id)arg3;
- (void)searchModelDidFinishIndexing:(id)arg1;
- (void)searchModelWillBeginIndexing:(id)arg1;
- (void)searchResultsController:(id)arg1 didSelectSearchEntry:(id)arg2;
- (id)searchResultsController:(id)arg1 iconForSearchEntry:(id)arg2;
- (bool)searchResultsController:(id)arg1 shouldShowSwitchForSearchEntry:(id)arg2;
- (id)searchResultsController:(id)arg1 switchActionForSearchEntry:(id)arg2;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconForSearchEntryHandler:(id /* block */)arg1;
- (void)setSearchBarVisible:(bool)arg1 animated:(bool)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
