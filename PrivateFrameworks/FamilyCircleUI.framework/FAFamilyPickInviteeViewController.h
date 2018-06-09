/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilyPickInviteeViewController : UIViewController <AAUIContactsSearchDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSString * _addFamilyMemberInstructions;
    UILabel * _childAccountLabel;
    UITextField * _contactSearchBar;
    UIView * _contactSearchBarContainer;
    CNContactStore * _contactStore;
    FAContactsSearchController * _contactsSearchController;
    UIView * _container;
    UIButton * _createChildAccountButton;
    NSString * _createChildAccountButtonTitle;
    NSString * _createChildAccountInstructions;
    <FAPickInviteeDelegate> * _delegate;
    UILabel * _instructionsLabel;
    NSString * _inviteeCompositeName;
    NSString * _inviteeEmail;
    NSString * _inviteeShortName;
    CNMonogrammer * _monogrammer;
    UIBarButtonItem * _nextButton;
    UITableView * _resultsTableView;
    NSString * _searchQuery;
    NSArray * _searchResults;
    UIView * _separator;
    UILabel * _toLabel;
}

@property (nonatomic, copy) NSString *addFamilyMemberInstructions;
@property (nonatomic, copy) NSString *createChildAccountButtonTitle;
@property (nonatomic, copy) NSString *createChildAccountInstructions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAPickInviteeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inviteeCompositeName;
@property (nonatomic, readonly) NSString *inviteeEmail;
@property (nonatomic, readonly) NSString *inviteeShortName;
@property (nonatomic, readonly) NSString *searchQuery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedStringWithQueryHighlightedForString:(id)arg1 size:(double)arg2;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)_createChildAccountButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (void)_hideSearchResults;
- (id)_imageForPersonWithRecordID:(unsigned int)arg1;
- (void)_nextButtonWasTapped:(id)arg1;
- (void)_updateNextButtonEnabledState;
- (id)addFamilyMemberInstructions;
- (void)contactsSearchController:(id)arg1 didFindSortedResult:(id)arg2;
- (void)contactsSearchController:(id)arg1 didFinishSearchWithSuccess:(bool)arg2;
- (id)contentScrollView;
- (id)createChildAccountButtonTitle;
- (id)createChildAccountInstructions;
- (id)delegate;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)inviteeCompositeName;
- (id)inviteeEmail;
- (id)inviteeShortName;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)searchQuery;
- (void)setAddFamilyMemberInstructions:(id)arg1;
- (void)setCreateChildAccountButtonTitle:(id)arg1;
- (void)setCreateChildAccountInstructions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldValueDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
