/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassGroupsViewController : UIViewController <PKForegroundActiveArbiterObserver, PKGroupsControllerDelegate, PKPGSVFooterViewDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, PKPassPersonalizationViewControllerDelegate, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPerformActionViewControllerDelegate, UIScrollViewDelegate> {
    NSTimer * _allowDimmingTimer;
    long long  _backdropStyle;
    bool  _backgroundMode;
    NSMutableArray * _blocksQueuedForUpdateCompletion;
    int  _expressTransactionNotificationObserver;
    _UIBackdropView * _footerBackground;
    struct { 
        double visibility; 
        double visibilityAnimationTarget; 
        unsigned int animationCounter; 
    }  _footerBackgroundVisibility;
    PKPassGroupStackView * _groupStackView;
    PKGroupsController * _groupsController;
    bool  _handleFieldDetection;
    _UIBackdropView * _headerBackground;
    struct { 
        double visibility; 
        double visibilityAnimationTarget; 
        unsigned int animationCounter; 
    }  _headerBackgroundVisibility;
    bool  _inFailForward;
    unsigned long long  _instanceFooterSuppressionCounter;
    unsigned long long  _modalCardIndex;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    NSArray * _passUniqueIDsToExcludeFromFiltering;
    NSTimer * _passViewedNotificationTimer;
    bool  _passesAreOutdated;
    PKPaymentService * _paymentService;
    PKPeerPaymentAccountResolutionController * _peerPaymentAccountResolutionController;
    PKPeerPaymentService * _peerPaymentService;
    bool  _persistentCardEmulationQueued;
    long long  _presentationState;
    bool  _reloadingPasses;
    long long  _style;
    unsigned long long  _suppressedContent;
    bool  _updatingBackdropSettings;
    bool  _viewAppeared;
    bool  _viewAppearedBefore;
    bool  _welcomeStateEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) PKPassGroupStackView *groupStackView;
@property (nonatomic, readonly) PKGroupsController *groupsController;
@property bool handleFieldDetection;
@property (readonly) unsigned long long hash;
@property bool passesAreOutdated;
@property (nonatomic, readonly) bool presentingPass;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent;
@property (getter=isWelcomeStateEnabled, nonatomic) bool welcomeStateEnabled;

+ (void)beginSuppressingFooter;
+ (void)beginTrackingAction;
+ (void)endSuppressingFooter;
+ (void)endTrackingAction;
+ (bool)isPerformingAction;

- (void).cxx_destruct;
- (void)_accessBackgroundStateForType:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_applyPresentationState;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;
- (void)_beginSuppressingInstanceFooter;
- (void)_clearPassViewedNotificationTimer;
- (void)_dismissPresentedVCsWithRequirements:(unsigned long long)arg1 performAction:(id /* block */)arg2;
- (void)_endSuppressingInstanceFooterWithContext:(id)arg1;
- (void)_handleChildViewControllerRequestingServiceMode:(id)arg1;
- (void)_handleExpressNotification;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1;
- (id)_passPendingActivationToPresent;
- (void)_passViewedNotificationTimerFired;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (id)_peerPaymentAccountResolutionController;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2;
- (void)_presentWithUpdatedPasses:(id /* block */)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_registerForExpressTransactionNotifications:(bool)arg1;
- (void)_startPassViewedNotificationTimer;
- (void)_updateBackdropSettings;
- (void)_updateBackgroundType:(long long)arg1 toVisibility:(double)arg2 animated:(bool)arg3;
- (void)_updateFooterSuppressionAnimated:(bool)arg1;
- (void)_updateFooterSuppressionWithContext:(id)arg1;
- (void)_updatePeerPaymentAccount;
- (void)_warnFailForward;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)allowIdleTimer;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)featuredGroup;
- (id)footerForGroupStackView:(id)arg1;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)groupAtIndex:(unsigned long long)arg1;
- (id)groupStackView;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(bool)arg3;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
- (bool)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
- (void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(bool)arg3;
- (void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(bool)arg3;
- (bool)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (bool)groupStackViewShouldAllowReordering:(id)arg1;
- (bool)groupStackViewShouldShowHeaderViews:(id)arg1;
- (id)groupsController;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1;
- (bool)handleFieldDetection;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupsController:(id)arg1;
- (id)initWithGroupsController:(id)arg1 style:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isWelcomeStateEnabled;
- (void)loadView;
- (unsigned long long)numberOfGroups;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (bool)passesAreOutdated;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned long long)arg2;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)presentBarcodePassDetailsWithUniqueID:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)presentDefaultPaymentPassAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)presentGroupTable;
- (void)presentGroupTableAnimated:(bool)arg1;
- (void)presentInitialState;
- (void)presentOffscreenAnimated:(bool)arg1 split:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)presentOffscreenAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)presentOnscreen:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)presentPassDetailsWithUniqueID:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)presentPassWithUniqueID:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPassWithUniqueID:(id)arg1 animated:(bool)arg2 dismissVC:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 dismissVC:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentPaymentPassDetailsWithUniqueID:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPaymentSetupController;
- (void)presentPaymentSetupInMode:(long long)arg1 referrerIdentifier:(id)arg2 paymentNetwork:(id)arg3;
- (void)presentPeerPaymentSetupWithCurrencyAmount:(id)arg1 flowState:(unsigned long long)arg2 senderAddress:(id)arg3;
- (void)presentPeerPaymentTopUp;
- (void)presentPileOffscreen;
- (void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;
- (void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1;
- (bool)presentingPass;
- (void)queuePersistentCardEmulation;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(id /* block */)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)setHandleFieldDetection:(bool)arg1;
- (void)setPassesAreOutdated:(bool)arg1;
- (void)setSuppressedContent:(unsigned long long)arg1;
- (void)setTableModalPresentationEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setWelcomeStateEnabled:(bool)arg1;
- (bool)shouldAutorotate;
- (void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(long long)arg2 referrerIdentifier:(id)arg3 paymentNetwork:(id)arg4;
- (long long)style;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)suppressedContent;
- (void)terminateFieldDetect;
- (void)updateLockscreenIdleTimer;
- (void)updatePassesIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)updateRegionSupportIfNecessary;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewTapped:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
