/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKSpaceInsertionController : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginDragLocation;
    UIImageView * _bottomImageView;
    PKSpaceInsertionView * _bottomInsertionView;
    PKStrokeSelection * _bottomStrokeSelection;
    bool  _didMoveStrokes;
    UIPanGestureRecognizer * _dragBottomLollipopGR;
    UIPanGestureRecognizer * _dragTopLollipopGR;
    PKDrawing * _drawing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialViewLocation;
    bool  _isCurrentlyAddingSpace;
    PKStroke * _lassoStroke;
    PKSelectionController * _selectionController;
    NSMutableOrderedSet * _strokesAbove;
    NSMutableOrderedSet * _strokesBelow;
    UIView * _tapToDismissView;
    bool  _topHandleRemovesWhitespace;
    UIImageView * _topImageView;
    PKSpaceInsertionView * _topInsertionView;
    PKStrokeSelection * _topStrokeSelection;
}

@property (nonatomic, readonly) bool didMoveStrokes;
@property (nonatomic, retain) PKDrawing *drawing;
@property (nonatomic) bool isCurrentlyAddingSpace;
@property (nonatomic, retain) PKStroke *lassoStroke;
@property (nonatomic, readonly) PKSelectionController *selectionController;

- (void).cxx_destruct;
- (void)_addSpacingViewsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_blitStrokesToViewForSpaceInsertionType:(unsigned long long)arg1;
- (void)_didEndCreatingSpace;
- (void)_dragLollipop:(id)arg1;
- (double)_initalBufferBetweenLollipops;
- (void)_makeSpaceWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;
- (void)_sortStrokesAboveOrBelow;
- (void)_temporarilyShiftStrokesWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;
- (id)_visibleStrokesOnPage:(id)arg1;
- (void)commitSpacingResize;
- (void)didBeginCreatingSpaceWithLassoStroke:(id)arg1 drawing:(id)arg2;
- (bool)didMoveStrokes;
- (void)didScroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)dismissSpacingResizeHandles;
- (id)drawing;
- (void)initTopAndBottomSelectionIfNecessary;
- (id)initWithSelectionController:(id)arg1;
- (bool)isCurrentlyAddingSpace;
- (id)lassoStroke;
- (double)offsetInStrokeSpaceFromViewOffset:(double)arg1 inDrawing:(id)arg2;
- (void)projectPath:(struct CGPath { }*)arg1 toEndOfFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)selectionController;
- (void)setDrawing:(id)arg1;
- (void)setIsCurrentlyAddingSpace:(bool)arg1;
- (void)setLassoStroke:(id)arg1;

@end
