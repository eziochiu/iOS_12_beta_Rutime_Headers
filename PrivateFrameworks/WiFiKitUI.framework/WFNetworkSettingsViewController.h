/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFNetworkSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFAccessoryViewController> {
    UISwitch * _autoJoinSwitch;
    UISwitch * _autoLoginSwitch;
    UIColor * _backgroundColor;
    WFNetworkSettingsCellFactory * _cellFactory;
    WFNetworkSettingsConfig * _config;
    <WFNetworkSettingsViewControllerDataCoordinator> * _dataCoordinator;
    <WFNetworkSettingsViewControllerDelegate> * _delegate;
    long long  _deviceCapability;
    WFHyperlinkFooterView * _linkFooterView;
    NSAttributedString * _recommendationLinkAttributedString;
    NSArray * _sections;
    UITableView * _tableView;
}

@property (nonatomic, retain) UISwitch *autoJoinSwitch;
@property (nonatomic, retain) UISwitch *autoLoginSwitch;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) WFNetworkSettingsCellFactory *cellFactory;
@property (nonatomic, copy) WFNetworkSettingsConfig *config;
@property (nonatomic) <WFNetworkSettingsViewControllerDataCoordinator> *dataCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFNetworkSettingsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceCapability;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFHyperlinkFooterView *linkFooterView;
@property (nonatomic, retain) NSAttributedString *recommendationLinkAttributedString;
@property (retain) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (void)_autoJoinSwitchChanged:(id)arg1;
- (void)_autoLoginSwitchChanged:(id)arg1;
- (void)_httpProxyAuthChanged:(id)arg1;
- (void)_httpProxyConfigChanged:(long long)arg1;
- (bool)_isChinaDevice;
- (bool)_isIPv4ConfigAuto;
- (void)_logSections:(id)arg1;
- (void)_openRecommendationsLink:(id)arg1;
- (void)_presentDetailViewController:(id)arg1;
- (void)_promptForgetNetwork;
- (void)_saveAutoJoinEnabledChanged:(bool)arg1;
- (void)_saveAutoLoginEnabledChanged:(bool)arg1;
- (void)_saveConfig:(id)arg1;
- (long long)_sectionTypeAtSection:(long long)arg1;
- (id)_sectionsFromConfig:(id)arg1;
- (bool)_shouldShowIPv6ForConfig:(id)arg1;
- (bool)_showRecommendationSupportLink;
- (id)_stringForSettingsSection:(long long)arg1;
- (id)autoJoinSwitch;
- (id)autoLoginSwitch;
- (id)backgroundColor;
- (id)cellFactory;
- (id)config;
- (id)dataCoordinator;
- (id)delegate;
- (long long)deviceCapability;
- (id)initWithConfig:(id)arg1;
- (id)linkFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)recommendationLinkAttributedString;
- (void)refreshConfig:(id)arg1;
- (id)sections;
- (void)setAutoJoinSwitch:(id)arg1;
- (void)setAutoLoginSwitch:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellFactory:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDataCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceCapability:(long long)arg1;
- (void)setLinkFooterView:(id)arg1;
- (void)setRecommendationLinkAttributedString:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
