/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStoreController : NSObject <MFMailComposeViewControllerDelegate, SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate> {
    SUClient * _client;
    SUSectionsResponse * _lastBackgroundSectionsResponse;
    SUSectionsResponse * _lastSectionsResponse;
    NSURL * _launchURL;
    ISOperation * _loadSectionsOperation;
    NSString * _localStoreFrontAtLastSuspend;
    id  _locationObserver;
    MFMailComposeViewController * _mailComposeViewController;
    NSArray * _overlayConfigurations;
    bool  _reloadForStorefrontChangeAfterAccountSetup;
    bool  _reloadSectionsOnNextLaunch;
    NSDictionary * _storeFrontLanguages;
    NSString * _synchedStoreFrontAtLastSuspend;
    SUTabBarController * _tabBarController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultPNGNameForSuspend;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *launchURL;
@property (getter=isStoreEnabled, nonatomic, readonly) bool storeEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SUTabBarController *tabBarController;
@property (getter=isTabBarControllerLoaded, nonatomic, readonly) bool tabBarControllerLoaded;
@property (nonatomic, readonly) UINavigationController *topNavigationController;
@property (nonatomic, retain) UIWindow *window;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)_accountControllerDisappearedNotification:(id)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_cancelLoadSectionsOperation;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_handleSearchURL:(id)arg1;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (bool)_isAccountViewControllerVisible;
- (bool)_loadSectionsAllowingCache:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_mainThreadStoreFrontChangedNotification:(id)arg1;
- (void)_presentSectionFetchUI;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (bool)_reloadForStorefrontChange;
- (void)_reloadOverlayConfigurations;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)_resumableViewController;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_saveArchivedNavigationPath;
- (void)_selectFooterSectionNotification:(id)arg1;
- (bool)_showWildcatAccountViewController:(id)arg1 animated:(bool)arg2;
- (void)_storeFrontChangedNotification:(id)arg1;
- (bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)beginPurchaseBatch;
- (void)cancelAllOperations;
- (bool)client:(id)arg1 openInternalURL:(id)arg2;
- (bool)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(bool)arg3;
- (bool)client:(id)arg1 presentModalViewController:(id)arg2 animated:(bool)arg3;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)connect;
- (id)copySuspendSettings;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (id)defaultPNGNameForSuspend;
- (void)dismissMailComposeViewControllerAnimated:(bool)arg1;
- (void)dismissOverlayBackgroundViewController;
- (id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;
- (void)endPurchaseBatch;
- (void)exitStoreAfterDialogsDismiss;
- (void)exitStoreWithReason:(long long)arg1;
- (void)handleApplicationURL:(id)arg1;
- (id)init;
- (bool)isComposingEmail;
- (bool)isStoreEnabled;
- (bool)isTabBarControllerLoaded;
- (id)launchURL;
- (bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (bool)matchesClientApplication:(id)arg1;
- (id)newScriptInterface;
- (id)overlayBackgroundViewController;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (void)prepareForSuspend;
- (void)presentExternalURLViewController:(id)arg1;
- (void)presentMailComposeViewController:(id)arg1 animated:(bool)arg2;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (bool)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (bool)selectSectionWithIdentifier:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setupUI;
- (bool)showDialogForCapabilities:(id)arg1 mismatches:(id)arg2;
- (id)storeContentLanguage;
- (id)tabBarController;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(bool)arg3;
- (void)tearDownUI;
- (id)topNavigationController;
- (id)topViewControllerForClient:(id)arg1;

@end
