/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISwooshArrayViewController : UIViewController <SKUIMetricsViewController, SKUIProductPageChildViewController, SKUISwooshViewControllerDelegate, UIScrollViewDelegate> {
    SKUIResourceLoader * _artworkLoader;
    bool  _askPermission;
    SKUIClientContext * _clientContext;
    SKUIColorScheme * _colorScheme;
    <SKUIProductPageChildViewControllerDelegate> * _delegate;
    SKUIProductPageHeaderViewController * _headerViewController;
    SKUIMetricsController * _metricsController;
    NSOperationQueue * _operationQueue;
    SSVPlatformRequestOperation * _platformOperation;
    UIScrollView * _scrollView;
    NSMutableArray * _swooshArtworkLoaders;
    NSArray * _swooshComponents;
    NSMutableArray * _viewControllers;
}

@property (nonatomic) bool askPermission;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIProductPageChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIProductPageHeaderViewController *headerViewController;
@property (nonatomic, retain) SKUIMetricsController *metricsController;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *swooshComponents;

- (void).cxx_destruct;
- (void)_addHeaderView;
- (void)_addMissingItemsWithResponse:(id)arg1 error:(id)arg2;
- (id)_artworkLoader;
- (id)_clickEventForSeeAllForViewController:(id)arg1;
- (id)_clickEventWithItem:(id)arg1;
- (void)_layoutSwooshViews;
- (void)_loadMissingItemsIfNecessary;
- (void)_reloadChildViewControllers;
- (id)_scrollView;
- (id)activeMetricsController;
- (bool)askPermission;
- (id)clientContext;
- (id)colorScheme;
- (void)dealloc;
- (id)delegate;
- (id)headerViewController;
- (id)initWithSwooshComponents:(id)arg1;
- (bool)isSkLoaded;
- (void)loadMissingItemData;
- (void)loadView;
- (id)metricsController;
- (id)operationQueue;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAskPermission:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setSwooshComponents:(id)arg1;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (id)swooshComponents;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
