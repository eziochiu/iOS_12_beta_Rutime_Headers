/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularController : PSListController <CoreTelephonyClientSubscriberDelegate> {
    PSUIAppCellularUsageExtensionGroup * _appUsageGroup;
    CHManager * _callHistoryManager;
    PSUICellularDataPlanDetailGroup * _cellularDataPlanDetailGroup;
    PSUICellularDataPlanListGroup * _cellularDataPlanListGroup;
    PSUICellularDataPlanSetupGroup * _cellularDataPlanSetupGroup;
    PSUICarrierItemGroup * _cellularNewNetworkGroup;
    CoreTelephonyClient * _coreTelephonyClient;
    PSSpecifier * _currentSpecifier;
    bool  _disabled;
    PSSpecifier * _facetimeSetupButton;
    PSSpecifier * _facetimeSetupGroup;
    bool  _ignoreNextEntitlementStatusChange;
    PSSpecifier * _lastResetSpecifier;
    PSSpecifier * _lifetimeSpecifier;
    PSSpecifier * _personalHotspotSpecifier;
    PSUISubscriptionContextMenusGroup * _subscriptionContextMenus;
    PSSpecifier * _viewAccount;
    PSSpecifier * _viewAccountGroup;
}

@property (nonatomic, retain) PSUIAppCellularUsageExtensionGroup *appUsageGroup;
@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) PSUICellularDataPlanDetailGroup *cellularDataPlanDetailGroup;
@property (nonatomic, retain) PSUICellularDataPlanListGroup *cellularDataPlanListGroup;
@property (nonatomic, retain) PSUICellularDataPlanSetupGroup *cellularDataPlanSetupGroup;
@property (nonatomic, retain) PSUICarrierItemGroup *cellularNewNetworkGroup;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSUISubscriptionContextMenusGroup *subscriptionContextMenus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)NETRBStateChangedNotification:(id)arg1;
- (id)_deadTelephonySpecifiers;
- (id)_lastUpdateDate;
- (void)_updateLastResetText;
- (void)airplaneModeChanged;
- (void)airplaneModeOrSIMStatusChanged;
- (id)appUsageGroup;
- (id)callHistoryManager;
- (id)callTime:(id)arg1;
- (id)callTimeDurationRestrictedToCurrentPeriod:(bool)arg1;
- (void)carrierItemsChanged;
- (id)cellularDataOptionsDetailText:(id)arg1;
- (id)cellularDataPlanDetailGroup;
- (id)cellularDataPlanListGroup;
- (id)cellularDataPlanSetupGroup;
- (id)cellularNewNetworkGroup;
- (void)cellularPlanChanged:(id)arg1;
- (void)clearStats:(id)arg1;
- (id)coreTelephonyClient;
- (void)dataRegistrationChangedWithUserInfo:(id)arg1;
- (void)dealloc;
- (void)entitlementStatusChanged;
- (id)getTetheringStatus:(id)arg1;
- (void)handleCallTimersChanged;
- (void)handleURL:(id)arg1;
- (id)init;
- (bool)isCellularDisabled;
- (void)learnMoreLinkTapped;
- (id)lifetimeCallTime:(id)arg1;
- (id)localizedRemovePlanConfirmation:(id)arg1;
- (void)newCarrierNotification;
- (void)prefetchResourcesFor:(id)arg1;
- (void)setAppUsageGroup:(id)arg1;
- (void)setCallHistoryManager:(id)arg1;
- (void)setCellularDataPlanDetailGroup:(id)arg1;
- (void)setCellularDataPlanListGroup:(id)arg1;
- (void)setCellularDataPlanSetupGroup:(id)arg1;
- (void)setCellularNewNetworkGroup:(id)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setSubscriptionContextMenus:(id)arg1;
- (void)setupCellularFaceTime:(id)arg1;
- (bool)shouldShowFaceTimeSetup;
- (bool)shouldShowViewAccount;
- (bool)showDataPlanOnly;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)specifiers;
- (id)subscriptionContextMenus;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)totalBytesUsedChangedNotification;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (void)updateAppUsageGroupEnabledState;
- (void)updatePaneWithCellularDataState:(bool)arg1;
- (void)viewAccountPressed:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)wirelessDataUsageChangedNotification;

@end
