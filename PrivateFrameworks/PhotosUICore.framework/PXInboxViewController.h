/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXInboxViewController : UIViewController <PXChangeObserver, PXGadget, PXOneUpPresentationDelegate, PXSectionedDataSourceManagerObserver, UITableViewDataSource, UITableViewDelegate> {
    unsigned long long  _accessoryButtonType;
    PXInboxTableViewCellLayoutCoordinator * _cellLayoutCoordinator;
    double  _currentRowHeight;
    PXInboxAggregateDataSource * _dataSource;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dataSourceIndexRange;
    PXInboxAggregateDataSourceManager * _dataSourceManager;
    <PXGadgetDelegate> * _delegate;
    <PXNavigableForYouViewController> * _forYouNavigationDelegate;
    PXGadgetSpec * _gadgetSpec;
    bool  _hasContentToDisplay;
    NSDate * _initialSeenDate;
    <PXInboxModel> * _lastSelectedModel;
    PXPhotoKitUIMediaProvider * _mediaProvider;
    unsigned long long  _priority;
    UITableView * _tableView;
    bool  _visible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleContentRect;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, retain) PXInboxTableViewCellLayoutCoordinator *cellLayoutCoordinator;
@property (nonatomic) double currentRowHeight;
@property (nonatomic, retain) PXInboxAggregateDataSource *dataSource;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } dataSourceIndexRange;
@property (nonatomic, retain) PXInboxAggregateDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXNavigableForYouViewController> *forYouNavigationDelegate;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, retain) NSDate *initialSeenDate;
@property (nonatomic, retain) <PXInboxModel> *lastSelectedModel;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PXPhotoKitUIMediaProvider *mediaProvider;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, readonly) UITableView *tableView;
@property (getter=isVisible, nonatomic) bool visible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)createInboxDataSourceManager;
+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_createDividerView;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_dataSourceIndexPathFromTableViewIndexPath:(id)arg1;
- (void)_dismissDetailViewsIfNeededWithPreviousDataSource:(id)arg1;
- (double)_dividerHeight;
- (bool)_isModelUnseen:(id)arg1;
- (unsigned long long)_numberOfRows;
- (bool)_shouldHandleAllIndexes;
- (void)_startOneUpPresentationForModel:(id)arg1;
- (id)_tableViewIndexPathFromDataSourceIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_updateSeenState;
- (void)_updateTableViewFrameAndBounds;
- (unsigned long long)accessoryButtonType;
- (id)cellLayoutCoordinator;
- (struct NSObject { Class x1; }*)contentViewController;
- (double)currentRowHeight;
- (id)dataSource;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dataSourceIndexRange;
- (id)dataSourceManager;
- (id)delegate;
- (id)forYouNavigationDelegate;
- (void)gadgetControllerHasAppeared;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initialSeenDate;
- (bool)isVisible;
- (id)lastSelectedModel;
- (id)mediaProvider;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 inCoordinateSpace:(id)arg3;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (void)ppt_performBlockAfterLoadingCompletes:(id /* block */)arg1;
- (unsigned long long)priority;
- (void)setCellLayoutCoordinator:(id)arg1;
- (void)setCurrentRowHeight:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForYouNavigationDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setInitialSeenDate:(id)arg1;
- (void)setLastSelectedModel:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisibleContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_gridPresentation;

@end
