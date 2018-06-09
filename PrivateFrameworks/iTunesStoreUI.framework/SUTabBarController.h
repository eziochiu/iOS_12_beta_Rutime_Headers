/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTabBarController : UITabBarController <SUOverlayBackgroundDelegate, _UIBasicAnimationFactory> {
    SUClientInterface * _clientInterface;
    bool  _ignoreTabReselection;
    UIImage * _moreListSelectedImage;
    NSString * _moreListTitle;
    UIImage * _moreListUnselectedImage;
    NSMutableArray * _overlayBackgroundViewControllers;
    UIViewController * _preTransientSelectedViewController;
    SUViewController * _preloadedViewController;
    NSString * _preloadedViewControllerIdentifier;
    NSString * _preloadedViewControllerKey;
    SUPreviewOverlayViewController * _previewOverlayViewController;
    long long  _reloadingUnderneathTransientControllerCount;
    NSArray * _sections;
    long long  _storeBarStyle;
    SUNavigationBarBackgroundView * _tabBarBackdropView;
}

@property (getter=_previewOverlayViewController, nonatomic, readonly) SUPreviewOverlayViewController *_previewOverlayViewController;
@property (nonatomic, readonly) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUTabBarControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *moreListTitle;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSString *selectedIdentifier;
@property (readonly) Class superclass;

+ (Class)_moreNavigationControllerClass;

- (long long)ITunesStoreUIBarStyle;
- (void)_applicationDidChangeStatusBarFrame:(id)arg1;
- (void)_applyMoreListConfiguration;
- (id)_archivedContextsForViewController:(id)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_beginReloadingUnderneathTransientViewController;
- (void)_endReloadingUnderneathTransientViewController;
- (void)_fixupTabBarSelection;
- (void)_fixupViewControllers;
- (void)_hidePreviewOverlayAnimated:(bool)arg1;
- (bool)_isReloadingUnderneathTransientViewController;
- (void)_longPressAction:(id)arg1;
- (void)_moveTransientViewController:(id)arg1 toSectionWithIdentifier:(id)arg2 asRoot:(bool)arg3;
- (void)_moveView:(id)arg1 toView:(id)arg2;
- (void)_partnerChanged:(id)arg1;
- (id)_previewOverlayViewController;
- (void)_reloadViewControllersFromSections:(id)arg1 animated:(bool)arg2;
- (void)_restoreArchivedContexts:(id)arg1;
- (void)_restoreArchivedTransientContexts:(id)arg1;
- (void)_restoreOverlayContexts:(id)arg1;
- (id)_rootViewControllerForSection:(id)arg1;
- (bool)_saveNavigationPathToDefaults;
- (bool)_saveTransientNavigationPathToDefaults;
- (id)_sectionForIdentifier:(id)arg1;
- (id)_sectionForType:(long long)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (void)_setStoreBarStyle:(long long)arg1;
- (void)_showPreviewOverlay:(id)arg1 animated:(bool)arg2;
- (id)_timingFunctionForAnimation;
- (void)_transitionSafeHandlePartnerChange:(id)arg1;
- (id)_viewControllerForContext:(id)arg1;
- (void)cancelTransientViewController:(id)arg1;
- (id)clientInterface;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismissOverlayBackgroundViewController;
- (unsigned long long)indexOfViewControllerWithSectionType:(long long)arg1;
- (id)init;
- (id)initWithClientInterface:(id)arg1;
- (bool)loadFromDefaults;
- (bool)loadFromDefaultsAndSetSections:(id)arg1;
- (void)loadView;
- (id)moreListTitle;
- (id)overlayBackgroundViewController;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)pushTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (void)reloadSectionVisibilityAnimated:(bool)arg1;
- (void)reloadSectionWithIdentifier:(id)arg1 URL:(id)arg2;
- (void)resetToSystemDefaults;
- (void)resetUserDefaults;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (bool)saveOrderingToDefaults;
- (bool)saveToDefaults;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (id)sections;
- (void)selectDefaultSection;
- (void)selectSectionOfType:(long long)arg1;
- (id)selectedIdentifier;
- (id)selectedViewController;
- (void)setMoreListSelectedImage:(id)arg1 unselectedImage:(id)arg2;
- (void)setMoreListTitle:(id)arg1;
- (void)setSectionOrdering:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedIdentifier:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(bool)arg2;
- (void)setTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(bool)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(bool)arg3;
- (void)tabBar:(id)arg1 willShowCustomizationSheet:(id)arg2 withNavigationBar:(id)arg3;
- (id)viewControllerForSectionIdentifier:(id)arg1;
- (id)viewControllerForSectionType:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;

@end
