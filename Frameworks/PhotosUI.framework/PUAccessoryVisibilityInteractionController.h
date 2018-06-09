/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAccessoryVisibilityInteractionController : NSObject <PUBrowsingViewModelChangeObserver, PXChangeObserver, UIGestureRecognizerDelegate> {
    PUAssetViewModel * __assetViewModel;
    PXNumberAnimator * __contentOffsetOverrideFactor;
    struct CGPoint { 
        double x; 
        double y; 
    }  __initialContentOffset;
    PXNumberAnimator * __overridingContentOffsetY;
    PUChangeDirectionValueFilter * __swipeDirectionValueFilter;
    PUChangeDirectionValueFilter * __verticalDirectionValueFilter;
    PUBrowsingSession * _browsingSession;
    <PUAccessoryVisibilityInteractionControllerDelegate> * _delegate;
    struct { 
        bool respondsToCanBeginAtLocationFromProvider; 
        bool respondsToDidEnd; 
        bool respondsToIsLocationFromProviderInAccessoryContent; 
        bool respondsToSetAccessoryVisibleChangeReason; 
    }  _delegateFlags;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    bool  _isUpdateScheduled;
    struct { 
        bool contentOffset; 
    }  _needsUpdateFlags;
    UIPanGestureRecognizer * _panGestureRecognizer;
    PXVerticalSwipeGestureRecognizerHelper * _verticalSwipeGestureRecognizerHelper;
}

@property (setter=_setAssetViewModel:, nonatomic, retain) PUAssetViewModel *_assetViewModel;
@property (setter=_setContentOffsetOverrideFactor:, nonatomic, retain) PXNumberAnimator *_contentOffsetOverrideFactor;
@property (setter=_setInitialContentOffset:, nonatomic) struct CGPoint { double x1; double x2; } _initialContentOffset;
@property (setter=_setOverridingContentOffsetY:, nonatomic, retain) PXNumberAnimator *_overridingContentOffsetY;
@property (setter=_setSwipeDirectionValueFilter:, nonatomic, retain) PUChangeDirectionValueFilter *_swipeDirectionValueFilter;
@property (setter=_setVerticalDirectionValueFilter:, nonatomic, retain) PUChangeDirectionValueFilter *_verticalDirectionValueFilter;
@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUAccessoryVisibilityInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognizerHelper;

- (void).cxx_destruct;
- (id)_assetViewModel;
- (id)_contentOffsetOverrideFactor;
- (id)_currentAssetViewModel;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleScheduledUpdate;
- (struct CGPoint { double x1; double x2; })_initialContentOffset;
- (void)_invalidateContentOffset;
- (bool)_needsUpdate;
- (id)_overridingContentOffsetY;
- (void)_performChanges:(id /* block */)arg1;
- (void)_setAccessoryVisible:(bool)arg1;
- (void)_setAssetViewModel:(id)arg1;
- (void)_setContentOffsetOverrideFactor:(id)arg1;
- (void)_setInitialContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setNeedsUpdate;
- (void)_setOverridingContentOffsetY:(id)arg1;
- (void)_setSwipeDirectionValueFilter:(id)arg1;
- (void)_setVerticalDirectionValueFilter:(id)arg1;
- (id)_swipeDirectionValueFilter;
- (void)_updateContentOffsetIfNeeded;
- (void)_updateGestureRecognizers;
- (void)_updateIfNeeded;
- (id)_verticalDirectionValueFilter;
- (id)browsingSession;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)invalidateViewHostingGestureRecognizers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)panGestureRecognizer;
- (void)setBrowsingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)verticalSwipeGestureRecognizerHelper;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
