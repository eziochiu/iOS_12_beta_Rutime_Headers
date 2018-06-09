/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassbookSettingsController : NSObject <PKPaymentDataProviderDelegate, PKPaymentPassTableCellDelegate, PKPaymentServiceDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKSwitchSpinnerTableCellDelegate> {
    LAContext * _LAContext;
    PSSpecifier * _addCardButtonSpecifier;
    PKPaymentPreference * _availableCards;
    PSSpecifier * _companionCardsGroupSpecifier;
    NSArray * _companionPassSpecifiers;
    NSArray * _companionPasses;
    long long  _context;
    <PKPassbookSettingsDataSource> * _dataSource;
    NSString * _defaultCardIdentifier;
    PKPaymentPreferencesViewController * _defaultCardsController;
    PSSpecifier * _defaultContactEmailSpecifier;
    PSSpecifier * _defaultContactPhoneSpecifier;
    NSString * _defaultExpressTransitPassIdentifier;
    PSSpecifier * _defaultExpressTransitSpecifier;
    PSSpecifier * _defaultPaymentSpecifier;
    PSSpecifier * _defaultShippingAddressSpecifier;
    <PKPassbookSettingsDelegate> * _delegate;
    NSArray * _expressTransitPasses;
    NSArray * _handoffSwitchSpecifiers;
    NSMutableDictionary * _latestTransitPassProperties;
    NSArray * _lockscreenSwitchSpecifiers;
    <PKPaymentOptionsProtocol> * _optionsDelegate;
    PSSpecifier * _otherCardsGroupSpecifier;
    NSArray * _otherPassSpecifiers;
    NSArray * _otherPasses;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    PSSpecifier * _paymentCardsGroupSpecifier;
    <PKPaymentDataProvider> * _paymentDataProvider;
    NSArray * _paymentPassSpecifiers;
    NSArray * _paymentPasses;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentAccountResolutionController * _peerPaymentAccountResolutionController;
    <PKPassbookPeerPaymentSettingsDelegate> * _peerPaymentDelegate;
    PSSpecifier * _peerPaymentSwitchSpecifier;
    PKPeerPaymentWebService * _peerPaymentWebService;
    PKPaymentSetupAboutViewController * _privacyController;
    NSString * _provisioningPassIdentifier;
    bool  _registeringForPeerPayment;
    PKPaymentPreferenceCard * _unavailableCards;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassbookSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bridgeSpecifiers;
- (id)_companionPassSpecifiers;
- (id)_currentDefaultPaymentPass;
- (id)_defaultContactEmailSpecifier;
- (id)_defaultContactPhoneSpecifier;
- (id)_defaultExpressTransitPassDescription;
- (id)_defaultExpressTransitSpecifier;
- (id)_defaultPaymentSpecifier;
- (id)_defaultShippingAddressSpecifier;
- (id)_defaultsGroupSpecifiers;
- (id)_displayableStringForLabeledValue:(id)arg1;
- (id)_expressTransitFooter;
- (void)_finishDefaultExpressTransitUpdateWithContainer:(id)arg1 preference:(id)arg2;
- (id)_getDefaultContactEmail;
- (id)_getDefaultContactPhone;
- (id)_getDefaultPaymentCard;
- (id)_getDefaultShippingAddress;
- (void)_handleDefaultExpressTransitPassChangedTo:(id)arg1 withContainer:(id)arg2 preference:(id)arg3;
- (void)_handleDefaultPaymentPassChangedTo:(id)arg1 withSender:(id)arg2 optionsController:(id)arg3 canPrompt:(bool)arg4;
- (void)_handleProvisioningError:(id)arg1 viewController:(id)arg2;
- (id)_handoffSwitchGroupSpecifiers;
- (id)_handoffSwitchSettingForSpecifier:(id)arg1;
- (bool)_isPeerPaymentRegistered;
- (id)_latestTransitProperties:(id)arg1;
- (id)_lockscreenSwitchGroupSpecifiers;
- (id)_lockscreenSwitchSettingForSpecifier:(id)arg1;
- (void)_openPrivacyLink;
- (id)_otherPassSpecifiers;
- (id)_passSpecifiersForPasses:(id)arg1;
- (id)_passSpecifiersForPasses:(id)arg1 peerPaymentPassUniqueID:(id)arg2 showPeerPaymentSetup:(bool)arg3;
- (id)_paymentPassSpecifiers;
- (long long)_paymentPreferencesStyle;
- (long long)_paymentSetupContextForSettingsContext:(long long)arg1;
- (void)_peerPaymentAccountDidChangeNotification:(id)arg1;
- (id)_peerPaymentGroupSpecifiers;
- (id)_peerPaymentSwitchSpecifier;
- (void)_performPhoneToWatchProvisioningForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_presentFeatureNotEnabledForDemoForSpecifier:(id)arg1;
- (void)_presentPeerPaymentReOpenCardFlowForSpecifier:(id)arg1;
- (void)_presentPeerPaymentSetupFlowForSpecifier:(id)arg1;
- (void)_presentPeerPaymentSetupFlowForSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPeerPaymentSetupFlowWithAmount:(id)arg1 flowState:(unsigned long long)arg2 senderAddress:(id)arg3 completion:(id /* block */)arg4;
- (void)_presentProvisioningPaymentPassNavController:(id)arg1 paymentPass:(id)arg2;
- (void)_regionConfigurationDidChangeNotification;
- (void)_registerForPeerPaymentWithSpecifier:(id)arg1;
- (void)_reloadPassData;
- (void)_requestDelegatePresentViewController:(id)arg1;
- (id)_restrictedModeSpecifier;
- (void)_saveLatestTransitProperties:(id)arg1 forPass:(id)arg2;
- (void)_setCardAddProvisioningButtonEnabled:(bool)arg1 forPaymentPass:(id)arg2;
- (void)_setHandoffSwitchSetting:(id)arg1 forSpecifier:(id)arg2;
- (void)_setLockscreenSwitchSetting:(id)arg1 forSpecifier:(id)arg2;
- (id)_settingsSpecifiers;
- (void)_showCardDetails:(id)arg1;
- (void)_showDefaultContactEmailOptions:(id)arg1;
- (void)_showDefaultContactPhoneOptions:(id)arg1;
- (void)_showDefaultPaymentOptions:(id)arg1;
- (void)_showDefaultShippingAddressOptions:(id)arg1;
- (void)_showExpressTransitOptions:(id)arg1;
- (id)_specifierForPassUniqueID:(id)arg1;
- (id)_transitDefaultsGroupSpecifiers;
- (void)_transitPropertiesForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_unregisterForPeerPaymentWithSpecifier:(id)arg1;
- (void)_updateAddButtonSpecifier;
- (void)_updateCardsGroupSpecifier;
- (void)_updateCompanionGroupSpecifier;
- (void)_updateCompanionPassesAddButton;
- (void)_updateDefaultCardsPreferences;
- (void)_updateExpressPassIdentifiersWithReload:(bool)arg1;
- (bool)_useAlternateExpressTitle;
- (void)addButtonPressedForPaymentPass:(id)arg1;
- (void)addCardTapped;
- (void)addCardTappedForPaymentPassWithUniqueID:(id)arg1;
- (void)addCardTappedForPaymentPassWithUniqueID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(long long)arg3;
- (void)openPaymentSetupWithMode:(long long)arg1 referrerIdentifier:(id)arg2;
- (void)openPeerPaymentSetupWithCurrenyAmount:(id)arg1 state:(unsigned long long)arg2 senderAddress:(id)arg3;
- (id)passWithUniqueIdentifier:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)refreshDefaultCard;
- (void)refreshExpressTransitCard;
- (void)refreshPasses;
- (void)refreshPeerPaymentStatus;
- (void)removeFooterForSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifiers;
- (void)switchSpinnerCell:(id)arg1 hasToggledSwitch:(bool)arg2;

@end
