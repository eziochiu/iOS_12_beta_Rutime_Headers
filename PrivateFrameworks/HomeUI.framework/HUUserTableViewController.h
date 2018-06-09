/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserTableViewController : HUItemTableViewController {
    NSAttributedString * _headerMessage;
    _HUUserAvatarHeaderView * _userAvatarHeaderView;
    HFItemManager<HUUserItemManager> * _userItemManager;
}

@property (nonatomic, retain) NSAttributedString *headerMessage;
@property (nonatomic, retain) _HUUserAvatarHeaderView *userAvatarHeaderView;
@property (nonatomic, readonly) HFItemManager<HUUserItemManager> *userItemManager;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)headerMessage;
- (id)initWithUserItemManager:(id)arg1;
- (id)itemTableHeaderView;
- (void)performRemovalAction:(id)arg1;
- (void)setHeaderMessage:(id)arg1;
- (void)setUserAvatarHeaderView:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)userAvatarHeaderView;
- (id)userID;
- (id)userItemManager;

@end
