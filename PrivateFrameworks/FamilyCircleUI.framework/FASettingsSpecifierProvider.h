/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FASettingsSpecifierProvider : NSObject <AAUISpecifierProvider, FAFamilySettingsViewControllerDelegate, FASetupDelegate, RemoteUIControllerDelegate> {
    AAUIAccountManager * _accountManager;
    FACircleContext * _context;
    bool  _delayedEnterInitiateFlow;
    <AAUISpecifierProviderDelegate> * _delegate;
    bool  _didFailToGetFamilyDetails;
    PSSpecifier * _familyCellSpecifier;
    AAFamilyDetailsResponse * _familyDetailsResponse;
    AAFamilyEligibilityResponse * _familyEligibilityResponse;
    long long  _familyEligibilityStatus;
    FAFamilyNotificationObserver * _familyNotificationObserver;
    NSString * _familyStatusSummary;
    AAGrandSlamSigner * _grandSlamSigner;
    NSString * _invitationSummary;
    PSSpecifier * _invitationsCellSpecifier;
    bool  _isHandlingURLForInvite;
    bool  _isLoadingFamilyDetails;
    NSOperationQueue * _networkActivityQueue;
    NSMutableArray * _pendingFamilyDetailsCompletionBlocks;
    NSMutableArray * _pendingInvites;
    PSListController * _presenter;
    FAFamilyMemberDetailsPageSurrogate * _profileSurrogate;
    FARequestConfigurator * _requestConfigurator;
    NSArray * _specifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountStore;
- (id)_acuPresenter;
- (id)_appleAccount;
- (void)_clearFamilyState;
- (id)_configureContextWithType:(id)arg1 resourceDictionary:(id)arg2;
- (id)_familySpecifier;
- (unsigned long long)_familyState;
- (id)_grandSlamSigner;
- (void)_handleFamilyDetailsResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleFamilyEligibilityResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(bool)arg3;
- (void)_handleShowChildTransferActionURL:(id)arg1;
- (void)_handleShowFamilyInviteActionURL:(id)arg1;
- (void)_handleShowFamilySettingsURL:(id)arg1;
- (void)_handleShowInviteActionURL:(id)arg1 isChildTransfer:(bool)arg2;
- (void)_handleShowInvitesActionURL:(id)arg1;
- (void)_handleStartFamilySetupActionURL:(id)arg1;
- (void)_initiateFamily;
- (void)_initiateFamilyWithResources:(id)arg1;
- (id)_invitationsCellSpecifier;
- (void)_loadFamilyDetailsWithCompletion:(id /* block */)arg1;
- (void)_loadFamilyEligibilityWithCompletion:(id /* block */)arg1;
- (void)_pendingInvitationsSpecifierWasTapped:(id)arg1;
- (void)_presentPendingInvitesRemoteUI;
- (void)_reloadFamily;
- (void)_reloadFamilySpecifiers;
- (void)_reloadFamilySpecifiersAnimated:(bool)arg1;
- (id)_requestConfigurator;
- (void)_setUpFamilySpecifierWasTapped:(id)arg1;
- (void)_showUnderageAlertWithEligibilityResponse:(id)arg1;
- (id)_valueForFamilySpecifier:(id)arg1;
- (id)_valueForInvitiationsSpecifier:(id)arg1;
- (void)_viewFamilySpecifierWasTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)familySettingsViewControllerDidDeleteFamily:(id)arg1;
- (void)familySettingsViewControllerDidUpdateFamily:(id)arg1;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (bool)handleURL:(id)arg1;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (bool)isAccountInGrayMode;
- (void)reloadSpecifiers;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end
