/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentComponentView : SXComponentView <SXReachabilityObserver, SXViewportChangeListener> {
    SXWebContentComponentExposureEvent * _componentExposureEvent;
    SXComponentExposureMonitor * _componentExposureMonitor;
    <SXWebContentConfigurationProvider> * _configurationProvider;
    SXWebContentContainerViewController * _containerViewController;
    UILabel * _errorLabel;
    SXWebContentComponentInteractionManager * _interactionManager;
    NFPendingPromise * _invalidationPromise;
    UIActivityIndicatorView * _loadingIndicator;
    <SXWebContentNavigationManager> * _navigationManager;
    id /* block */  _queuedExposureBeginWork;
    <SXReachabilityProvider> * _reachabilityProvider;
    NFStateMachine * _stateMachine;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) SXWebContentComponentExposureEvent *componentExposureEvent;
@property (nonatomic, readonly) SXComponentExposureMonitor *componentExposureMonitor;
@property (nonatomic, readonly) <SXWebContentConfigurationProvider> *configurationProvider;
@property (nonatomic, readonly) SXWebContentContainerViewController *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXWebContentComponentInteractionManager *interactionManager;
@property (nonatomic, retain) NFPendingPromise *invalidationPromise;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, readonly) <SXWebContentNavigationManager> *navigationManager;
@property (nonatomic, copy) id /* block */ queuedExposureBeginWork;
@property (nonatomic, readonly) <SXReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (id)componentExposureEvent;
- (id)componentExposureMonitor;
- (id)configurationProvider;
- (void)configure;
- (void)configureComponentExposureMonitor;
- (void)configureConfigurationProvider;
- (void)configureErrorProvider;
- (void)configurePresentationManager;
- (void)configureViewController;
- (id)containerViewController;
- (id)createErrorState;
- (id)createLoadingState;
- (id)createPresentationState;
- (id)createStateMachine;
- (id)errorLabel;
- (void)handleTap:(id)arg1;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 containerViewController:(id)arg6 configurationProvider:(id)arg7 navigationManager:(id)arg8 componentExposureMonitor:(id)arg9 interactionManagerFactory:(id)arg10 reachabilityProvider:(id)arg11;
- (id)interactionManager;
- (id)invalidationPromise;
- (void)layout;
- (void)layoutErrorView;
- (void)layoutLoadingIndicator;
- (void)layoutSubviews;
- (void)layoutWebView;
- (void)loadWebContent;
- (id)loadingIndicator;
- (id)navigationManager;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (id /* block */)queuedExposureBeginWork;
- (void)reachabilityChanged:(bool)arg1;
- (id)reachabilityProvider;
- (void)reloadWebContent;
- (void)setComponentExposureEvent:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setInvalidationPromise:(id)arg1;
- (void)setQueuedExposureBeginWork:(id /* block */)arg1;
- (id)stateMachine;
- (void)submitExposureEvent;
- (id)tapGestureRecognizer;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;

@end
