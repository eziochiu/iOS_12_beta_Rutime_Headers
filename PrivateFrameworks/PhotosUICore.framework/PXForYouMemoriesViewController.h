/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouMemoriesViewController : PXMemoriesUIViewController <PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXUserInterfaceFeatureViewController> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dataSourceRange;
    <PXForYouMemoriesViewControllerDelegate> * _delegate;
    unsigned long long  _rowType;
    bool  _shouldHandleEntireDataSource;
}

@property (nonatomic, readonly) PXFeedBasedMemoriesDataSourceManager *dataSourceManager;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } dataSourceRange;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXForYouMemoriesViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (nonatomic) unsigned long long rowType;
@property (nonatomic, readonly) bool shouldHandleEntireDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInterfaceFeature;

- (void).cxx_destruct;
- (id)createNewLayoutGenerator;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dataSourceRange;
- (id)delegate;
- (id)initWithDataSourceManager:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (unsigned long long)rowType;
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDataSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setRowType:(unsigned long long)arg1;
- (bool)shouldHandleEntireDataSource;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (long long)userInterfaceFeature;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
