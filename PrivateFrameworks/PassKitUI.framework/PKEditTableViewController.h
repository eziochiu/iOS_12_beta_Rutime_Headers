/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEditTableViewController : UITableViewController <PKEditPassesPerformanceTestResponder, PKEditTableNoPassesViewDelegate, UITableViewDataSourcePrefetching> {
    <PKEditTableViewControllerCachingDelegate> * _cachingDelegate;
    PKEditPendingCacheRequest * _currentCacheRequest;
    bool  _dragging;
    PKGroupsController * _existingGroupsController;
    NSMutableArray * _highPriorityRequests;
    NSCache * _imageCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSizeNeeded;
    unsigned long long  _imagesToKeep;
    bool  _isAccessibilityCategory;
    NSMutableArray * _lastSnapshotDurations;
    double  _lastYOffset;
    double  _lastYOffsetTime;
    NSMutableArray * _lowPriorityRequests;
    bool  _needsFullPass;
    PKEditTableNoPassesView * _noPassesView;
    long long  _performanceTest;
    NSString * _performanceTestName;
    NSMutableDictionary * _placeholdersPerPassStyle;
    NSObject<OS_dispatch_queue> * _queueCaching;
    bool  _scrollingFast;
    bool  _scrollingUp;
    bool  _shouldProcessHighPriorityRequests;
    bool  _shouldProcessLowPriorityRequests;
    bool  _shouldShowNoPassesView;
    double  _snapshotDurationAverage;
    UITableView * _tableView;
    long long  _testIteration;
    unsigned long long  _visibleRows;
}

@property (nonatomic) <PKEditTableViewControllerCachingDelegate> *cachingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKGroupsController *existingGroupsController;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long performanceTest;
@property (nonatomic, retain) NSString *performanceTestName;
@property (readonly) Class superclass;
@property (nonatomic) long long testIteration;

- (void).cxx_destruct;
- (id)_createImageForPass:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 cacheKey:(id)arg3 fullPass:(bool)arg4 stacked:(bool)arg5;
- (id)_createPassStackWithPassImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)_cropImage:(id)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_imageOfSize:(struct CGSize { double x1; double x2; })arg1 forPass:(id)arg2 fullPass:(bool)arg3 stacked:(bool)arg4 synchronously:(bool)arg5 preemptive:(bool)arg6 placeholder:(id /* block */)arg7 completion:(id /* block */)arg8;
- (unsigned long long)_imagesToKeepOutsideVisibleCells;
- (id)_resizedImageWithImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)_setShouldProcessLowPriorityRequests:(bool)arg1;
- (void)_updateShouldProcessHighPriorityRequestsWithFastScrolling:(bool)arg1;
- (void)beginPassDeletionTestWithTestName:(id)arg1;
- (void)beginPassSelectionTestWithTestName:(id)arg1;
- (void)beginScrollingTestWithTestName:(id)arg1;
- (id)cachingDelegate;
- (void)clearImageCacheForPass:(id)arg1;
- (void)currentCacheRequestCompletedWithImage:(id)arg1 duration:(double)arg2;
- (id)existingGroupsController;
- (void)failedTestWithReason:(id)arg1;
- (void)findApps;
- (void)generatePlaceholderImages;
- (void)imageForPass:(id)arg1 stacked:(bool)arg2 synchronously:(bool)arg3 placeholder:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)initWithStyle:(long long)arg1;
- (void)loadContentAndImageSetFromExistingPassForPass:(id)arg1;
- (id)mostRecentPassInGroup:(id)arg1;
- (void)moveHighPriorityToLowPriorityWithCacheKey:(id)arg1;
- (void)noPassesViewFindAppsForWalletTapped:(id)arg1;
- (void)noPassesViewScanCodeButtonTapped:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)passedTest;
- (long long)performanceTest;
- (id)performanceTestName;
- (void)preemptivelyCacheImagesForPass:(id)arg1 stacked:(bool)arg2;
- (void)processCacheRequest:(id)arg1;
- (void)removeRequestsWithCacheKey:(id)arg1;
- (void)resumeRequestIfNoScrollingAfterTimeInterval:(double)arg1;
- (void)scanCode;
- (void)scrollToFirstRowOrFailTest;
- (void)scrollToLastRowOrFailTest;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectFirstRowOrFailTest;
- (void)setCachingDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setExistingGroupsController:(id)arg1;
- (void)setPerformanceTest:(long long)arg1;
- (void)setPerformanceTestName:(id)arg1;
- (void)setTestIteration:(long long)arg1;
- (void)showNoPassesView:(bool)arg1;
- (void)startedTestWithName:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellWithIdentifier:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)testIteration;
- (void)triageCacheRequest:(id)arg1;
- (void)updateAverageSnapshotDuration:(double)arg1;
- (void)viewDidLoad;
- (unsigned long long)visibleRowsCount;

@end
