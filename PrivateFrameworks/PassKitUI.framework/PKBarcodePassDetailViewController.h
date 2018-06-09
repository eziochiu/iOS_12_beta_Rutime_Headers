/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKBarcodePassDetailViewController : PKSectionTableViewController <PKPassHeaderViewDelegate, UITextViewDelegate> {
    PKSettingTableCell * _automaticSelectionCell;
    PKSettingTableCell * _automaticUpdatesCell;
    UIVisualEffectView * _blurView;
    BluetoothManager * _btManager;
    PKPassColorProfile * _colorProfile;
    UITableViewCell * _deleteCell;
    <PKPassDeleteHandler> * _deleteOverrider;
    PKPassDisplayProfile * _displayProfile;
    NSMutableDictionary * _fieldCellHeightsByRow;
    NSMutableDictionary * _fieldCellsByRow;
    bool  _forcedRefresh;
    double  _forcedTopContentInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerContentInset;
    double  _headerHeight;
    UIView * _headerView;
    bool  _isBluetoothEnabled;
    bool  _isLocationEnabled;
    bool  _isWifiEnabled;
    UIView * _keyLine;
    PKLinkedAppView * _linkedApp;
    UIView * _locationHelpView;
    bool  _navigationControllerHidesShadow;
    PKPass * _pass;
    PKPassHeaderView * _passHeaderView;
    UITableViewCell * _personalizePassCell;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousLayoutTableViewBoundsSize;
    UIRefreshControl * _refreshControl;
    NSObject<OS_dispatch_source> * _refreshTimeout;
    UITableViewCell * _shareCell;
    PKSettingTableCell * _showInLockScreenCell;
    PKSettingTableCell * _showNotificationsCell;
    bool  _showsLinks;
    unsigned long long  _suppressedContent;
    UISegmentedControl * _tabBar;
    double  _tabBarHeight;
    NSArray * _tabBarSegments;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassDeleteHandler> *deleteOverrider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPass *pass;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent;

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (bool)isWifiEnabled;

- (void).cxx_destruct;
- (id)_automaticSelectionCell;
- (void)_bluetoothPowerChanged:(id)arg1;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (id)_deleteCell;
- (void)_deletePass;
- (void)_done:(id)arg1;
- (id)_fieldCellForRow:(unsigned long long)arg1;
- (id)_fieldForRow:(unsigned long long)arg1;
- (bool)_isBluetoothEnabled;
- (bool)_linkedAppAvailable;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_locationRelevancyHelpText;
- (unsigned long long)_numberOfAvailableSettings;
- (double)_offscreenHeaderHeight;
- (void)_passSettingsChanged:(id)arg1;
- (bool)_personalizeAvailable;
- (id)_personalizePassCell;
- (void)_refreshFinished:(bool)arg1;
- (id)_relevantBuckets;
- (void)_reloadPassAndView;
- (unsigned long long)_settingForRow:(unsigned long long)arg1;
- (bool)_settingsAvailable;
- (id)_settingsCellForRow:(unsigned long long)arg1;
- (id)_shareCell;
- (void)_sharePass;
- (void)_tabBarSegmentChanged:(id)arg1;
- (bool)_updateHeaderHeightDeterminingLayout:(bool)arg1;
- (void)_updatePassProperties;
- (void)_updateTabBar;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_wifiChanged:(id)arg1;
- (void)dealloc;
- (id)deleteOverrider;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;
- (id)linkedApp;
- (void)loadView;
- (id)pass;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)pushSettingsFromViewToModel;
- (void)refreshControlValueChanged:(id)arg1;
- (bool)reloadData;
- (void)reloadSection:(unsigned long long)arg1;
- (void)reloadSections:(id)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDeleteOverrider:(id)arg1;
- (void)setShowsLinks:(bool)arg1;
- (void)setSuppressedContent:(unsigned long long)arg1;
- (bool)shouldAllowRefresh;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (unsigned long long)suppressedContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
