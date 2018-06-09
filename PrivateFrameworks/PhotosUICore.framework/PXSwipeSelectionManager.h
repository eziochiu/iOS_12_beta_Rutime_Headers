/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSwipeSelectionManager : NSObject <PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver> {
    PXUIAutoScroller * __autoScroller;
    unsigned long long  __currentDataSourceIdentifier;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  __currentIndexPath;
    id  __pausingChangesToken;
    PXIndexPathSet * __selectedIndexPathsBeforeSwipe;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  __startingIndexPath;
    <PXSwipeSelectionManagerDelegate> * _delegate;
    struct { 
        bool respondsToItemIndexPathAtLocation; 
        bool respondsToItemIndexPathClosestLeadingLocation; 
        bool respondsToItemIndexPathClosestAboveLocation; 
        bool respondsToShouldSelectItemAtIndexPath; 
    }  _delegateFlags;
    struct { 
        bool selectedIndexPaths; 
    }  _needsUpdateFlags;
    UIScrollView * _scrollView;
    PXSectionedSelectionManager * _selectionManager;
    unsigned long long  _state;
    UIGestureRecognizer * _swipeGestureRecognizer;
}

@property (nonatomic, readonly) PXUIAutoScroller *_autoScroller;
@property (setter=_setCurrentDataSourceIdentifier:, nonatomic) unsigned long long _currentDataSourceIdentifier;
@property (setter=_setCurrentIndexPath:, nonatomic) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } _currentIndexPath;
@property (setter=_setPausingChangesToken:, nonatomic, retain) id _pausingChangesToken;
@property (setter=_setSelectedIndexPathsBeforeSwipe:, nonatomic, retain) PXIndexPathSet *_selectedIndexPathsBeforeSwipe;
@property (setter=_setStartingIndexPath:, nonatomic) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } _startingIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSwipeSelectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (setter=_setState:, nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIGestureRecognizer *swipeGestureRecognizer;

- (void).cxx_destruct;
- (id)_autoScroller;
- (void)_beginSelectionFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (unsigned long long)_currentDataSourceIdentifier;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_currentIndexPath;
- (void)_endSelection;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (void)_invalidateSelectedIndexPaths;
- (bool)_isSelecting;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_pausingChangesToken;
- (id)_selectedIndexPathsBeforeSwipe;
- (void)_setCurrentDataSourceIdentifier:(unsigned long long)arg1;
- (void)_setCurrentIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setPausingChangesToken:(id)arg1;
- (void)_setSelectedIndexPathsBeforeSwipe:(id)arg1;
- (void)_setStartingIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setState:(unsigned long long)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_startingIndexPath;
- (void)_updateSelectedIndexPaths;
- (void)_updateSelectionWithHitIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 leadingClosestIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 aboveClosestIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3;
- (void)_updateWithDataSource:(id)arg1 changeHistory:(id)arg2;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithSelectionManager:(id)arg1 scrollView:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)scrollView;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (id)selectionManager;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (id)swipeGestureRecognizer;

@end
