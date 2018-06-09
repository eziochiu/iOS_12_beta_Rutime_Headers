/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoryRowGadget : UIViewController <PXForYouMemoriesViewControllerDelegate, PXGadget, PXSectionedDataSourceManagerObserver, PXUIViewControllerZoomTransitionEndPoint> {
    <PXUIViewControllerZoomTransitionEndPoint> * _currentTransitionEndPoint;
    unsigned long long  _currentVisibility;
    PXMemoriesFeedWidgetDataSourceManager * _dataSourceManager;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    unsigned long long  _priority;
    NSMutableDictionary * _viewControllerEntries;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, retain) <PXUIViewControllerZoomTransitionEndPoint> *currentTransitionEndPoint;
@property (nonatomic) unsigned long long currentVisibility;
@property (nonatomic, readonly) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, retain) NSMutableDictionary *viewControllerEntries;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })dataSourceRangeForRowType:(unsigned long long)arg1 currentVisibility:(unsigned long long)arg2;
+ (unsigned long long)visibilityForTraitCollection:(id)arg1 numberOfMemories:(unsigned long long)arg2;

- (void).cxx_destruct;
- (long long)_columnSpanForRowType:(unsigned long long)arg1;
- (void)_configureMetricsForMultiRow:(id)arg1 dataSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_configureMetricsForSingleRow:(id)arg1 dataSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_fillViewControllerEntryForRowType:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForRowType:(unsigned long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_refreshViewControllerForRowType:(unsigned long long)arg1 visibility:(unsigned long long)arg2;
- (void)_removeViewControllerEntryForRowType:(unsigned long long)arg1;
- (void)_transitionFromCurrentVisibility:(unsigned long long)arg1 toNewVisibility:(unsigned long long)arg2;
- (unsigned long long)accessoryButtonType;
- (struct NSObject { Class x1; }*)contentViewController;
- (id)currentTransitionEndPoint;
- (unsigned long long)currentVisibility;
- (id)dataSourceManager;
- (id)delegate;
- (void)forYouMemoriesViewController:(id)arg1 configureMetrics:(id)arg2;
- (void)forYouMemoriesViewController:(id)arg1 transitionToViewController:(id)arg2 animated:(bool)arg3;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)initWithDataSourceManager:(id)arg1;
- (id)localizedTitle;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (unsigned long long)priority;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (void)setCurrentTransitionEndPoint:(id)arg1;
- (void)setCurrentVisibility:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setViewControllerEntries:(id)arg1;
- (id)showAllMemoriesFeedAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (id)viewControllerEntries;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
