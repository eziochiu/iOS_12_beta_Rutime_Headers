/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleViewController : UIViewController <NUDynamicTypeObserving, NULoadable, SXAnalyticsReporting, SXScrollViewControllerDelegate> {
    NUArticleAdManager * _adManager;
    <SXAnalyticsReporting> * _analyticsReporting;
    NSString * _anchorFragment;
    <NUArticleDataProvider> * _articleDataProvider;
    bool  _articleIsPresentingFullscreen;
    FCObservable * _articleViewStyler;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <NUDynamicTypeProviding> * _dynamicTypeProviding;
    <NUEndOfArticleDataProvider> * _endOfArticleDataProvider;
    NFEventManager * _eventManager;
    <NUScrollViewKeyCommandHandler> * _keyCommandHandler;
    <NULoadingDelegate> * _loadingDelegate;
    NSHashTable * _loadingListeners;
    NFMultiDelegate * _multiScrollViewDelegate;
    UIScrollView * _scrollView;
    SXScrollViewController * _scrollViewController;
}

@property (nonatomic, readonly) NUArticleAdManager *adManager;
@property (nonatomic) <SXAnalyticsReporting> *analyticsReporting;
@property (nonatomic, copy) NSString *anchorFragment;
@property (nonatomic, readonly) <NUArticleDataProvider> *articleDataProvider;
@property (nonatomic) bool articleIsPresentingFullscreen;
@property (nonatomic, readonly) FCObservable *articleViewStyler;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDynamicTypeProviding> *dynamicTypeProviding;
@property (nonatomic, readonly) <NUEndOfArticleDataProvider> *endOfArticleDataProvider;
@property (nonatomic, readonly) NFEventManager *eventManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUScrollViewKeyCommandHandler> *keyCommandHandler;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (nonatomic, readonly) NFMultiDelegate *multiScrollViewDelegate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) SXScrollViewController *scrollViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adManager;
- (id)analyticsReporting;
- (id)anchorFragment;
- (id)articleDataProvider;
- (bool)articleIsPresentingFullscreen;
- (id)articleViewStyler;
- (bool)canBecomeFirstResponder;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)currentPresentationAttributes;
- (void)dynamicTypeDidChange:(id)arg1;
- (id)dynamicTypeProviding;
- (id)endOfArticleDataProvider;
- (id)eventManager;
- (void)handleScrollKeyCommand:(id)arg1;
- (id)initWithArticleDataProvider:(id)arg1 scrollViewController:(id)arg2 articleAdManager:(id)arg3 dynamicTypeProviding:(id)arg4 appStateMonitor:(id)arg5 keyCommandHandler:(id)arg6 loadingListeners:(id)arg7;
- (id)keyCommandHandler;
- (id)loadingDelegate;
- (id)loadingListeners;
- (id)multiScrollViewDelegate;
- (double)navigationBarHeightForScrollViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)reportEvent:(id)arg1;
- (void)restoreScrollPositionIfNeeded;
- (void)scrollToTopAnimated:(bool)arg1;
- (id)scrollView;
- (id)scrollViewController;
- (void)scrollViewController:(id)arg1 enableNavigation:(bool)arg2;
- (void)scrollViewControllerDidLayoutContent:(id)arg1;
- (void)scrollViewControllerDismissFullscreen:(id)arg1;
- (void)scrollViewControllerRequestsFullscreen:(id)arg1;
- (void)setAnalyticsReporting:(id)arg1;
- (void)setAnchorFragment:(id)arg1;
- (void)setArticleIsPresentingFullscreen:(bool)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLoadingDelegate:(id)arg1;
- (double)toolBarHeightForScrollViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePresentationAttributes;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
