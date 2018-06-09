/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditOutgoingInvitationViewController : HUUserTableViewController {
    HUEditOutgoingInvitationItemManager * _editOutgoingInvitationItemManager;
}

@property (nonatomic, readonly) HUEditOutgoingInvitationItemManager *editOutgoingInvitationItemManager;

- (void).cxx_destruct;
- (void)_cancelOutgoingInvitation:(bool)arg1;
- (id)_messageForInvitationState:(long long)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)editOutgoingInvitationItemManager;
- (id)initWithItem:(id)arg1 home:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)userID;

@end
