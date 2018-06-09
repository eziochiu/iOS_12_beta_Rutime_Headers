/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIQueuingScrollView : UIScrollView {
    NSMutableArray * _completionStateQueue;
    struct { 
        unsigned int delegateInterestedInPendingScrolls : 1; 
        unsigned int delegateInterestedInCommittedScrolls : 1; 
        unsigned int delegateInterestedInCompletedScrolls : 1; 
        unsigned int delegateInterestedInBailedOutScrolls : 1; 
        unsigned int delegateInterestedFinishedScrolling : 1; 
        unsigned int delegateCanVetoSubviewLayout : 1; 
        unsigned int dataSourceSuppliesBeforeView : 1; 
        unsigned int dataSourceSuppliesAfterView : 1; 
        unsigned int dataSourceInterestedInFlushedViews : 1; 
    }  _delegateFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _disabledScrollingRegion;
    bool  _manualScrollInProgress;
    long long  _navigationOrientation;
    double  _pageSpacing;
    UIView * _pendingVisibleView;
    <_UIQueuingScrollViewDataSource> * _qDataSource;
    <_UIQueuingScrollViewDelegate> * _qDelegate;
    NSMutableArray * _viewStateQueue;
    NSArray * _views;
    NSArray * _wrapperViews;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } disabledScrollingRegion;
@property (nonatomic) double pageSpacing;
@property (nonatomic) <_UIQueuingScrollViewDataSource> *qDataSource;
@property (nonatomic) <_UIQueuingScrollViewDelegate> *qDelegate;
@property (nonatomic, readonly) UIView *visibleView;

- (void).cxx_destruct;
- (unsigned long long)_abuttedPagingEdges;
- (void)_adjustContentInsets;
- (void)_boundsDidChangeToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(bool)arg2 didComplete:(bool)arg3;
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(long long)arg3 canComplete:(bool)arg4;
- (bool)_dataSourceProvidesViews;
- (id)_dequeueViewForIndex:(long long)arg1;
- (void)_didEndDraggingManualScroll;
- (void)_didEndManualScroll;
- (void)_didEndProgrammaticScroll;
- (void)_didEndScroll:(bool)arg1;
- (void)_didScrollWithAnimation:(bool)arg1 force:(bool)arg2;
- (void)_enqueueAnimatedScrollInDirection:(long long)arg1 withView:(id)arg2 completion:(id /* block */)arg3;
- (void)_enqueueCompletionState:(id)arg1;
- (void)_flushView:(id)arg1 animated:(bool)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleDirectionalPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;
- (void)_invalidateOffscreenViews;
- (bool)_isDeceleratingInOppositionToNavigationDirection:(long long)arg1;
- (bool)_isScrollInProgress:(bool)arg1;
- (long long)_navigationDirectionForActiveScroll:(bool)arg1;
- (long long)_navigationDirectionFromCurrentOffset;
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;
- (void)_notifyDelegateDidCommitManualScroll:(bool)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(long long)arg4 animated:(bool)arg5 canComplete:(bool)arg6;
- (void)_notifyDelegateDidEndManualScroll:(bool)arg1 toRevealView:(id)arg2 direction:(long long)arg3 animated:(bool)arg4 didFinish:(bool)arg5 didComplete:(bool)arg6;
- (void)_notifyDelegateDidFinishScrolling;
- (void)_notifyDelegateWillManuallyScroll:(bool)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(bool)arg4;
- (void)_replaceViews:(id)arg1 updatingContents:(bool)arg2 adjustContentInsets:(bool)arg3 animated:(bool)arg4;
- (id)_requestViewForIndex:(long long)arg1;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1;
- (void)_setFrameAndApplyPageSpacing:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setWrappedViewAtIndex:(long long)arg1 withView:(id)arg2;
- (id)_viewAfterView:(id)arg1;
- (id)_viewAtIndex:(long long)arg1 loadingIfNecessary:(bool)arg2 updatingContents:(bool)arg3 animated:(bool)arg4;
- (id)_viewBefore:(bool)arg1 view:(id)arg2;
- (id)_viewBeforeView:(id)arg1;
- (id)_visibleView;
- (bool)canBecomeFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })disabledScrollingRegion;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 navigationOrientation:(long long)arg2;
- (bool)isManualScrollInProgress;
- (bool)isPreviousScrollCompatibleWithScrollInDirection:(long long)arg1;
- (void)layoutSubviews;
- (double)pageSpacing;
- (id)qDataSource;
- (id)qDelegate;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisabledScrollingRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPageSpacing:(double)arg1;
- (void)setQDataSource:(id)arg1;
- (void)setQDelegate:(id)arg1;
- (void)setView:(id)arg1 direction:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)visibleView;

@end
