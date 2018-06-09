/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLMicroBlogAccountsTableViewController : UITableViewController {
    NSArray * _accountUserRecords;
    UIImage * _blankImage;
    SLMicroBlogUserRecord * _selectedAccountUserRecord;
    <SLMicroBlogAccountsTableViewControllerDelegate> * _selectionDelegate;
}

- (void).cxx_destruct;
- (id)_accountUserRecordForIndexPath:(id)arg1;
- (id)_blankImage;
- (void)cancelButtonTapped:(id)arg1;
- (void)didUpdateAccountUserRecord:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAccountUserRecords:(id)arg1;
- (void)setCurrentAccountUserRecord:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;

@end
