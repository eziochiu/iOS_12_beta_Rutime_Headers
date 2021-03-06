/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKUserEditorTableViewController : UITableViewController <CRKSwitchTableViewCellDelegate> {
    <CRKUserEditorTableViewControllerDelegate> * _delegate;
    bool  _showsFamilyNameName;
    bool  _showsPhoneticName;
    CRKUser * _user;
    long long  mMeCardSwitchCellSection;
    CRKUser * mMeCardUser;
    long long  mNumberOfSections;
    bool  mUseMeCardUser;
    long long  mUserCellSection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKUserEditorTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsFamilyNameName;
@property (nonatomic) bool showsPhoneticName;
@property (readonly) Class superclass;
@property (nonatomic, retain) CRKUser *user;

- (void).cxx_destruct;
- (id)delegate;
- (void)editorTextFieldDidChange:(id)arg1;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsFamilyNameName:(bool)arg1;
- (void)setShowsPhoneticName:(bool)arg1;
- (void)setUser:(id)arg1;
- (bool)showsFamilyNameName;
- (bool)showsPhoneticName;
- (void)switchCellValueDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateTableView;
- (id)user;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
