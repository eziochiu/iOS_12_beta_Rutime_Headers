/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserTransitionCoordinator : NSObject <CKFullScreenAppViewControllerDelegate> {
    UIWindow * _appWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedCompactFrame;
    CKConversation * _conversation;
    UIViewController<CKBrowserViewControllerProtocol> * _currentBrowser;
    long long  _currentConsumer;
    UIViewController<CKBrowserViewControllerProtocol> * _currentModalBrowser;
    <CKBrowserTransitionCoordinatorDelegate> * _delegate;
    bool  _expanded;
    CKFullScreenAppViewController * _fullscreenViewController;
    long long  _lastTransitionReason;
    UIWindow * _modalAppWindow;
    UINavigationController * _presentedModalBrowserNavigationController;
    UIViewController * _presentingViewController;
    UIWindow * _previousKeyWindow;
    <CKBrowserViewControllerSendDelegate> * _sendDelegate;
    bool  _underTest;
}

@property (nonatomic, retain) UIWindow *appWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedCompactFrame;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser;
@property (nonatomic) long long currentConsumer;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *currentModalBrowser;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserTransitionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) CKFullScreenAppViewController *fullscreenViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastTransitionReason;
@property (nonatomic, retain) UIWindow *modalAppWindow;
@property (nonatomic, retain) UINavigationController *presentedModalBrowserNavigationController;
@property (getter=isPresentingFullScreenModal, nonatomic, readonly) bool presentingFullScreenModal;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) UIWindow *previousKeyWindow;
@property (nonatomic) <CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool underTest;
@property (nonatomic, readonly) bool wasCurrentBrowserExpanded;

- (void).cxx_destruct;
- (id)appWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedCompactFrame;
- (id)conversation;
- (id)currentBrowser;
- (long long)currentConsumer;
- (id)currentModalBrowser;
- (id)delegate;
- (void)dismissCurrentFullScreenModalAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissCurrentFullscreenBrowserAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2 datasource:(id)arg3;
- (double)fullscreenAppViewControllerCollapsedContentHeight:(id)arg1;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (id)fullscreenViewController;
- (bool)isExpanded;
- (bool)isHostingRemoteKeyboardView;
- (bool)isPresentingFullScreenModal;
- (long long)lastTransitionReason;
- (id)modalAppWindow;
- (void)presentCurrentBrowserFullscreenAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)presentCurrentPluginFullScreenModalAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)presentedModalBrowserNavigationController;
- (id)presentingViewController;
- (id)previousKeyWindow;
- (void)releaseOwnershipOfBrowserForConsumer:(long long)arg1;
- (id)requestOwnershipOfBrowserForConsumer:(long long)arg1;
- (id)sendDelegate;
- (void)setAppWindow:(id)arg1;
- (void)setCachedCompactFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConversation:(id)arg1;
- (void)setCurrentBrowser:(id)arg1;
- (void)setCurrentConsumer:(long long)arg1;
- (void)setCurrentModalBrowser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 withReason:(long long)arg2;
- (void)setFullscreenViewController:(id)arg1;
- (void)setLastTransitionReason:(long long)arg1;
- (void)setModalAppWindow:(id)arg1;
- (void)setPresentedModalBrowserNavigationController:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPreviousKeyWindow:(id)arg1;
- (void)setSendDelegate:(id)arg1;
- (void)setUnderTest:(bool)arg1;
- (bool)shouldAlwaysShowAppTitle;
- (void)transitionCurrentBrowserToCollapsedPresentationAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)transitionCurrentBrowserToExpandedPresentationAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)transitionViewController;
- (bool)underTest;
- (bool)updateBrowserSessionForPlugin:(id)arg1 datasource:(id)arg2;
- (bool)usePresentationWindowDuringTransition;
- (bool)wasCurrentBrowserExpanded;

@end
