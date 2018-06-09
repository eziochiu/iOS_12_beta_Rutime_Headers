/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserListTableManager : NSObject <HMHomeDelegatePrivate, HUAddPeopleViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _allowsEditing;
    CNContactStore * _contactStore;
    <HUUserListManagerTableDelegate> * _delegate;
    bool  _editing;
    HMHome * _home;
    NSArray * _invitations;
    NSIndexPath * _selectedIndexPath;
    UITableView * _tableView;
    NSArray * _users;
    UIViewController * _viewController;
}

@property (nonatomic) bool allowsEditing;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUUserListManagerTableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSArray *invitations;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) NSArray *users;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_configurePersonViewController:(id)arg1 invitation:(id)arg2;
- (id)_contactForUser:(id)arg1;
- (void)_didAddUser:(id)arg1;
- (void)_didInsertAtIndex:(unsigned long long)arg1;
- (void)_didReloadAtIndex:(unsigned long long)arg1;
- (void)_didRemoveAtIndex:(unsigned long long)arg1;
- (void)_didRemoveInvitation:(id)arg1;
- (void)_didRemoveUser:(id)arg1;
- (id)_displayNameForUser:(id)arg1;
- (bool)_indexPathIsInviteUser:(id)arg1;
- (id)_monogramForUser:(id)arg1;
- (id)_personViewControllerForUser:(id)arg1 invitation:(id)arg2;
- (void)_reinvite;
- (void)_removeInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeUser:(id)arg1 completion:(id /* block */)arg2;
- (void)_stopSharing;
- (void)_stopSharingWithCompletion:(id /* block */)arg1;
- (id)_stringForInvitationState:(long long)arg1;
- (void)addPeopleViewController:(id)arg1 didSendInvitations:(id)arg2;
- (void)addPeopleViewControllerDidCancel:(id)arg1;
- (bool)allowsEditing;
- (id)contactStore;
- (id)delegate;
- (bool)editing;
- (id)home;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (id)initWithTableView:(id)arg1 viewController:(id)arg2;
- (id)invitations;
- (long long)numberOfDataRows;
- (long long)sectionForPeople;
- (id)selectedIndexPath;
- (void)setAllowsEditing:(bool)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setInvitations:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setUsers:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)sortedInvitations;
- (id)sortedUsers;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateEditingRows;
- (id)users;
- (id)viewController;

@end
