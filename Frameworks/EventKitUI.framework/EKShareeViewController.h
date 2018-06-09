/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKShareeViewController : UITableViewController {
    bool  _allowEditing;
    bool  _allowResendInvitations;
    bool  _allowStopSharing;
    <EKShareeViewControllerDelegate> * _delegate;
    UIAlertController * _removeAlertController;
    EKSharee * _sharee;
}

@property (nonatomic) bool allowEditing;
@property (nonatomic) bool allowResendInvitations;
@property (nonatomic) bool allowStopSharing;
@property (nonatomic) <EKShareeViewControllerDelegate> *delegate;
@property (nonatomic, retain) EKSharee *sharee;

- (void).cxx_destruct;
- (void)_allowEditingChanged:(id)arg1;
- (void)_reloadTitle;
- (long long)_rowForSubitem:(int)arg1;
- (bool)_shouldDisplayResendInvitationButton;
- (bool)_shouldDisplayStopSharingButton;
- (int)_subitemAtRow:(long long)arg1;
- (bool)allowEditing;
- (bool)allowResendInvitations;
- (bool)allowStopSharing;
- (id)delegate;
- (id)initWithSharee:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)removeClicked:(id)arg1;
- (void)setAllowEditing:(bool)arg1;
- (void)setAllowResendInvitations:(bool)arg1;
- (void)setAllowStopSharing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSharee:(id)arg1;
- (id)sharee;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
