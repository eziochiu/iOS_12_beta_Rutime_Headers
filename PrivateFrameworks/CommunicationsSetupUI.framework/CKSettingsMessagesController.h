/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CKSettingsMessagesController : CNFRegListController <AKAppleIDAuthenticationDelegate, CNFRegWizardControllerDelegate, IMCloudKitEventHandler> {
    id  _beginMappingID;
    CKNSExtension * _ckExtension;
    IMCTXPCServiceSubscriptionInfo * _ctSubscriptionInfo;
    CKFilteringListController * _filteringController;
    CKMultipleIDSSubscriptionsController * _idsSubscriptionsMessagingController;
    CKMultipleCTSubscriptionsController * _mmsAllowsGroupMessagingController;
    CKMultipleCTSubscriptionsController * _mmsMessagingController;
    int  _profileToken;
    bool  _showingChildViewController;
}

@property (retain) id beginMappingID;
@property (nonatomic, retain) CKNSExtension *ckExtension;
@property (nonatomic, retain) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKFilteringListController *filteringController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMultipleIDSSubscriptionsController *idsSubscriptionsMessagingController;
@property (nonatomic, retain) CKMultipleCTSubscriptionsController *mmsAllowsGroupMessagingController;
@property (nonatomic, retain) CKMultipleCTSubscriptionsController *mmsMessagingController;
@property (readonly) Class superclass;

+ (id)currentKeepMessages;
+ (bool)currentMessageAutoKeepForType:(int)arg1;
+ (int)currentMessageAutoKeepOptionForType:(int)arg1;

- (void).cxx_destruct;
- (bool)_allAccountsAreDeactivated;
- (void)_clearMessagesAppExtensionSalt;
- (bool)_isMadridAccountOperational;
- (bool)_isMadridSwitchOn;
- (bool)_isRaiseGestureSupported;
- (bool)_isSMSDevice;
- (id)_madridSettingsController;
- (void)_setupAccountHandlers;
- (void)_setupAccountHandlersForDisabling;
- (void)_setupMMSGroupSpecifiers:(id)arg1 wantsMMSBasicGroup:(bool)arg2;
- (void)_setupMultipleSubscriptionsMMSGroupSpecifiers:(id)arg1 wantsMMSBasicGroup:(bool)arg2;
- (void)_showAuthKitSignInIfNecessary;
- (void)_showMadridSetupIfNecessary;
- (void)_showMadridSetupIfNecessary:(bool)arg1;
- (void)_showSignInController;
- (id)_smsRelayDevicesController;
- (void)_startListeningForProfileChanges;
- (void)_stopListeningForProfileChanges;
- (id)_switchFooterText:(bool*)arg1;
- (id)_syncManager;
- (void)_updateSwitch;
- (void)_updateSwitchDelayed;
- (void)_updateUIWithError:(id)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)areReadReceiptsEnabled:(id)arg1;
- (id)audioMessageSettingsSpecifierIdentifiers;
- (bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)beginMappingID;
- (id)blacklistSettingsSpecifierIdentifiers;
- (id)bundle;
- (id)characterCountSpecifierIdentifiers;
- (id)ckExtension;
- (id)contactPhotoSettingsSpecifierIdentifiers;
- (id)controllerForSpecifier:(id)arg1;
- (id)ctSubscriptionInfo;
- (void)dealloc;
- (id)deliveryReceiptSpecifierIdentifiers;
- (void)endMatchingExtensions;
- (id)filteringController;
- (void)findSpamExtensions;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(bool)arg2;
- (id)genericSettingsSpecifierIdentifiers;
- (id)getAccountSummaryForSpecifier:(id)arg1;
- (id)getAudioMessageAutoKeep:(id)arg1;
- (id)getKeepMessages:(id)arg1;
- (id)getPreviewTranscodingEnabled:(id)arg1;
- (id)getRaiseToListenEnabled:(id)arg1;
- (id)getSMSRelayDevicesSummary:(id)arg1;
- (id)iMessageFilteringSpecifierIdentifiers;
- (id)idsSubscriptionContextController;
- (id)idsSubscriptionsMessagingController;
- (id)init;
- (id)isConversationListFilteringEnabled:(id)arg1;
- (id)isDeliveryReportsEnabled:(id)arg1;
- (id)isMMSEnabled:(id)arg1;
- (id)isMadridEnabled:(id)arg1;
- (bool)isPersonalCompanionEnabled;
- (id)isSiriToneNotificationEnabled:(id)arg1;
- (id)logName;
- (id)madridAccountsSpecifierIdentifiers;
- (id)madridSigninButtonTextForSpecifier:(id)arg1;
- (id)madridSigninSpecifiers;
- (void)madridSigninTappedWithSpecifier:(id)arg1;
- (id)madridSwitchSpecifierIdentifiers;
- (void)messageFilteringTapped:(id)arg1;
- (id)mmsAllowsGroupMessagingController;
- (id)mmsMessagingController;
- (void)newCarrierNotification;
- (void)notifyThatConversationFilteringChanged;
- (id)raiseToListenSpecifierIdentifiers;
- (id)readReceiptSpecifierIdentifiers;
- (id)sendAsSMSIdentifiers;
- (void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2;
- (void)setBeginMappingID:(id)arg1;
- (void)setCkExtension:(id)arg1;
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (void)setCtSubscriptionInfo:(id)arg1;
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setFilteringController:(id)arg1;
- (void)setIdsSubscriptionsMessagingController:(id)arg1;
- (void)setKeepMessages:(id)arg1 specifier:(id)arg2;
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;
- (void)setMmsAllowsGroupMessagingController:(id)arg1;
- (void)setMmsMessagingController:(id)arg1;
- (void)setPreviewTranscodingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2;
- (void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSiriToneNotificationEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSpecifierLoading:(id)arg1 loading:(bool)arg2 animated:(bool)arg3;
- (void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldShowAudioMessageSettings;
- (bool)shouldShowBlacklistSettings;
- (bool)shouldShowCharacterCount;
- (bool)shouldShowContactPhotoSettings;
- (bool)shouldShowDeliveryReceipts;
- (bool)shouldShowGenericSettings;
- (bool)shouldShowIDSSubscriptions;
- (bool)shouldShowMadridAccount;
- (bool)shouldShowMadridAccounts;
- (bool)shouldShowMadridSignin;
- (bool)shouldShowMadridSwitch;
- (bool)shouldShowRaiseToListenSwitch;
- (bool)shouldShowReadReceipts;
- (bool)shouldShowSMSRelaySettings;
- (bool)shouldShowSendAsSMS;
- (bool)shouldShowSiriSettings;
- (bool)shouldShowiMessageFilteringSettings:(id)arg1;
- (id)siriSettingsIdentifiers;
- (id)smsRelaySettingsSpecifierIdentifiers;
- (id)spamFilteringSpecifierIdentifiers;
- (id)specifiers;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsWiFiChooser;
- (id)willSendGroupMMS:(id)arg1;

@end