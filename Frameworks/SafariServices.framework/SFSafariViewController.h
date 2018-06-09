/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafariViewController : UIViewController <SFBrowserRemoteViewControllerDelegate, SFInteractiveDismissControllerDelegate, SFQueueingServiceViewControllerProxyDelegate> {
    _WKActivatedElementInfo * _activatedElementInfo;
    NSMutableDictionary * _activitiesMap;
    NSArray * _activityItemsForCustomActivities;
    _UIAsyncInvocation * _cancelViewServiceRequest;
    SFSafariViewControllerConfiguration * _configuration;
    NSArray * _customActivities;
    bool  _defersAddingRemoteViewController;
    <SFSafariViewControllerDelegate> * _delegate;
    long long  _dismissButtonStyle;
    long long  _displayMode;
    bool  _hasBeenDisplayedAtLeastOnce;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _horizontalScrollIndicatorBaseInsets;
    NSURL * _initialURL;
    SFInteractiveDismissController * _interactiveDismissController;
    SFSafariLaunchPlaceholderView * _launchPlaceholderView;
    UIColor * _preferredBarTintColor;
    UIColor * _preferredControlTintColor;
    NSArray * _previewActions;
    SFBrowserRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> * _serviceProxy;
    bool  _swipeGestureEnabled;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _verticalScrollIndicatorBaseInsets;
    bool  _viewSizeIsTransitioning;
}

@property (setter=_setActivatedElementInfo:, nonatomic, retain) _WKActivatedElementInfo *_activatedElementInfo;
@property (setter=_setPreviewActions:, nonatomic, retain) NSArray *_previewActions;
@property (setter=_setShowingLinkPreview:, nonatomic) bool _showingLinkPreview;
@property (setter=_setShowingLinkPreviewWithMinimalUI:, nonatomic) bool _showingLinkPreviewWithMinimalUI;
@property (nonatomic, readonly, copy) SFSafariViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defersAddingRemoteViewController;
@property (nonatomic) <SFSafariViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dismissButtonStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *initialURL;
@property (nonatomic, retain) UIColor *preferredBarTintColor;
@property (nonatomic, retain) UIColor *preferredControlTintColor;
@property (nonatomic, readonly) SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activatedElementInfo;
- (void)_addRemoteView;
- (void)_addRemoteViewControllerIfNeeded;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (void)_connectToService;
- (id)_defaultPreviewActionItems;
- (id)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2;
- (id)_fetchExcludedActivityTypesForURL:(id)arg1 title:(id)arg2;
- (void)_forwardNotificationToViewService:(id)arg1;
- (id)_previewActions;
- (void)_removeRemoteView;
- (void)_restartServiceViewController;
- (void)_setActivatedElementInfo:(id)arg1;
- (void)_setEdgeSwipeDismissalEnabled:(bool)arg1;
- (void)_setPreviewActions:(id)arg1;
- (void)_setShowingLinkPreview:(bool)arg1;
- (void)_setShowingLinkPreviewWithMinimalUI:(bool)arg1;
- (void)_setUpWithURL:(id)arg1 configuration:(id)arg2;
- (bool)_showingLinkPreview;
- (bool)_showingLinkPreviewWithMinimalUI;
- (void)_updateScrollViewIndicatorInsets;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)configuration;
- (void)dealloc;
- (bool)defersAddingRemoteViewController;
- (id)delegate;
- (long long)dismissButtonStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(bool)arg2;
- (id)initialURL;
- (void)interactiveDismissControllerDidBegin:(id)arg1;
- (void)interactiveDismissControllerDidCancel:(id)arg1;
- (void)interactiveDismissControllerDidEnd:(id)arg1;
- (void)loadView;
- (id)preferredBarTintColor;
- (id)preferredControlTintColor;
- (id)previewActionItems;
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(bool)arg2;
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
- (void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(bool)arg2;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerDidLoadWebView:(id)arg1;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (id)serviceProxy;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)setDefersAddingRemoteViewController:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPreferredBarTintColor:(id)arg1;
- (void)setPreferredControlTintColor:(id)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
