/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditUserViewController : HUUserTableViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate> {
    HUAboutResidentDeviceFooterView * _aboutResidentDeviceFooterView;
    HUEditUserItemManager * _editUserItemManager;
    HUPendingAccessoriesGridViewController * _pendingAccessoriesViewController;
    HFUserItem * _userItem;
}

@property (nonatomic, retain) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HUEditUserItemManager *editUserItemManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HFUserItem *userItem;

- (void).cxx_destruct;
- (id)_lazyAboutResidentDeviceFooterView;
- (void)_removeUser;
- (id)aboutResidentDeviceFooterView;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (id)editUserItemManager;
- (id)initWithItem:(id)arg1 home:(id)arg2;
- (void)learnMoreLinkTapped:(id)arg1;
- (id)pendingAccessoriesViewController;
- (void)setAboutResidentDeviceFooterView:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)userID;
- (id)userItem;

@end
