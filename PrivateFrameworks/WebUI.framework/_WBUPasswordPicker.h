/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface _WBUPasswordPicker : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating> {
    NSIndexPath * _indexPathOfRowShowingDetailView;
    NSMutableArray * _matchingPasswords;
    WBUPasswordPickerViewController * _pickerViewController;
    NSMutableArray * _savedPasswords;
    NSMutableArray * _savedPasswordsMatchingHintStrings;
    UISearchController * _searchController;
    NSString * _searchPattern;
    long long  _sectionForAllPasswords;
    long long  _sectionForPasswordsMatchingHintStrings;
    long long  _sectionForPrompt;
    NSCountedSet * _visibleDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deletePasswordAtIndexPath:(id)arg1;
- (id)_passwordForIndexPath:(id)arg1;
- (void)_setSearchPattern:(id)arg1;
- (void)_updateIconForDomain:(id)arg1 forCell:(id)arg2;
- (void)_updateSections;
- (void)iconDidUpdateForDomain:(id)arg1;
- (id)initWithPasswordPickerViewController:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end