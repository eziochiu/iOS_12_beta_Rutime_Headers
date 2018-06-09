/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIExploreDocumentViewController : SKUIViewController <CLLocationManagerDelegate, SKUIDocumentViewController, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate> {
    SKUIMetricsImpressionSession * _activeMetricsImpressionSession;
    NSArray * _contentOffsets;
    SKUIContentInsetScrollView * _contentScrollView;
    SKUIExploreTemplateElement * _exploreTemplate;
    UINavigationController * _leftVC;
    CLLocationManager * _locationManager;
    UINavigationController * _navigationController;
    bool  _nearMeEnabled;
    SKUIStorePageSectionsViewController * _rightVC;
    UISplitViewController * _splitVC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (void)_contentInsetDidChange:(id)arg1;
- (void)_endAllPendingActiveImpression;
- (void)_getPageComponents:(id*)arg1 title:(id*)arg2 forViewControllerAtIndex:(long long)arg3;
- (double)_leftColumnWidth;
- (id)_leftPageComponentsAtIndex:(long long)arg1;
- (id)_newSectionsViewControllerAtIndex:(long long)arg1;
- (id)_pageComponentsAtIndex:(long long)arg1;
- (void)_reloadData;
- (void)_reloadLeftViewControllers;
- (void)_reloadRightViewController;
- (void)_reloadSelectionForViewController:(id)arg1;
- (id)_rightPageComponents;
- (id)_rightVCColorScheme;
- (id)_rootNavigationTitle;
- (void)_updateChildViewControllers;
- (id)contentScrollView;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (bool)managesNavigationBarContents;
- (id)navigationBarTintColor;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (bool)prefersNavigationBarBackgroundViewHidden;
- (bool)prefersNavigationBarHidden;
- (void)selectGenreListComponent:(id)arg1;
- (void)setClientContext:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (void)stackedBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
