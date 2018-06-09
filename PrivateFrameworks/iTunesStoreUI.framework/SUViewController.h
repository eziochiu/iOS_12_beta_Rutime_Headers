/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUViewController : UIViewController <ISOperationDelegate, SUScriptNativeObject> {
    SUViewControllerScriptProperties * _cachedScriptProperties;
    bool  _canBeWeakScriptReference;
    NSMutableArray * _cancelOnDeallocOperations;
    SUClientInterface * _clientInterface;
    bool  _excludeFromNavigationHistory;
    UIBarButtonItem * _exitStoreButton;
    UIViewController * _footerViewController;
    UIViewController * _inputAccessoryViewController;
    bool  _isEnteringForeground;
    SUViewControllerContext * _memoryPurgeContext;
    NSMutableArray * _operations;
    NSMutableArray * _pendingDialogs;
    SUViewControllerContext * _restoredContext;
    SURotationController * _rotationController;
    long long  _rotationState;
    bool  _shouldAdjustContentOffsets;
    bool  _shouldInvalidateForMemoryPurge;
    bool  _showsLibraryButton;
    bool  _skLoading;
    long long  _transitionSafetyCount;
}

@property (getter=_cachedScriptProperties, nonatomic, readonly) SUViewControllerScriptProperties *_cachedScriptProperties;
@property (getter=_isEnteringForeground, nonatomic, readonly) bool _enteringForeground;
@property (getter=_pendingDialogs, nonatomic, readonly) NSArray *_pendingDialogs;
@property (getter=_restoredContext, nonatomic, readonly) SUViewControllerContext *_restoredContext;
@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultPNGExpirationTime;
@property (nonatomic, readonly) NSString *defaultPNGName;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIViewController *footerViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *inputAccessoryViewController;
@property (nonatomic, readonly, retain) SUNavigationItem *navigationItem;
@property (nonatomic) bool shouldAdjustContentOffsets;
@property (nonatomic) bool shouldExcludeFromNavigationHistory;
@property (nonatomic) bool shouldInvalidateForMemoryPurge;
@property (nonatomic) bool showsLibraryButton;
@property (getter=isSkLoading, nonatomic) bool skLoading;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic, readonly) bool visible;
@property (getter=isVisibleAndFrontmost, nonatomic, readonly) bool visibleAndFrontmost;

- (long long)ITunesStoreUIBarStyle;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (id)_cachedScriptProperties;
- (bool)_canReloadView;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (id)_existingNavigationItem;
- (void)_exitStoreButtonAction:(id)arg1;
- (void)_exitStoreButtonDidChangeNotification:(id)arg1;
- (void)_invalidateForMemoryPurge;
- (bool)_isEnteringForeground;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (id)_pendingDialogs;
- (void)_presentFooterAnimationDidStop;
- (void)_reloadExitStoreButtonWithParentViewController:(id)arg1;
- (void)_reloadLibraryButton;
- (id)_restoredContext;
- (id)_rotationController;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationDidResume;
- (void)applicationWillEnterForeground;
- (void)applicationWillSuspend;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancelOperations;
- (bool)clearsWeakScriptReferences;
- (id)clientInterface;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (id)copyDefaultScriptProperties;
- (id)copyScriptProperties;
- (void)dealloc;
- (double)defaultPNGExpirationTime;
- (id)defaultPNGName;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismissFooterViewControllerAnimated:(bool)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(bool)arg2;
- (id)footerViewController;
- (void)handleApplicationURL:(id)arg1;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)init;
- (id)initWithSection:(id)arg1;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (long long)interfaceOrientation;
- (void)invalidate;
- (void)invalidateForMemoryPurge;
- (bool)isSkLoading;
- (bool)isVisible;
- (bool)isVisibleAndFrontmost;
- (void)loadView;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)navigationItem;
- (id)newRotationController;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (bool)presentDialog:(id)arg1 pendUntilVisible:(bool)arg2;
- (bool)presentDialogForError:(id)arg1 pendUntilVisible:(bool)arg2;
- (void)presentFooterViewController:(id)arg1 animated:(bool)arg2;
- (void)reload;
- (void)reloadContentSizeForViewInPopover;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)resetRestoredContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setShouldAdjustContentOffsets:(bool)arg1;
- (void)setShouldExcludeFromNavigationHistory:(bool)arg1;
- (void)setShouldInvalidateForMemoryPurge:(bool)arg1;
- (void)setShowsLibraryButton:(bool)arg1;
- (void)setSkLoading:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 changeTabBarItem:(bool)arg2;
- (bool)shouldAdjustContentOffsets;
- (bool)shouldExcludeFromNavigationHistory;
- (bool)shouldInvalidateForMemoryPurge;
- (bool)showsLibraryButton;
- (void)storePageProtocolDidChange;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tabBarItem;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(bool)arg2;
- (id)viewControllerFactory;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;

@end
