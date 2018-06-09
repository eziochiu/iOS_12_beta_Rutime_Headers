/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusRegionMap : NSObject {
    UIFocusSystem * _focusSystem;
    _UIFocusRegionMapSnapshot * _lastSnapshot;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _minimumSearchArea;
    UIView * _rootView;
}

@property (nonatomic, retain) UIFocusSystem *focusSystem;
@property (nonatomic, retain) _UIFocusRegionMapSnapshot *lastSnapshot;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } minimumSearchArea;
@property (nonatomic) UIView *rootView;

- (void).cxx_destruct;
- (id)_closestFocusableRegionInArray:(id)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 usingHeading:(unsigned long long)arg3 withFocusedView:(id)arg4 consideringFavoredRegion:(bool)arg5 includingFocusedView:(bool)arg6;
- (bool)_containsFocusableRegionForView:(id)arg1;
- (id)_contextWithSourceView:(id)arg1 focusedContainerGuide:(id)arg2 movement:(id)arg3;
- (id)_contextWithSourceView:(id)arg1 focusedRegion:(id)arg2 movement:(id)arg3;
- (struct CGPoint { double x1; double x2; })_focusCandidateSearchOriginForFocusedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 heading:(unsigned long long)arg2 minimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusCandidateSearchRectForFocusedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 heading:(unsigned long long)arg2 minimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_nearestCandidateForFocusMovement:(id)arg1 fromFocusedView:(id)arg2 withFocusedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 includingFocusedView:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectThatJustBarelyIntersectsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 startingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewSearchRectForFocusedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 focusCandidateSearchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 includesFocusedFrame:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewSearchRectForSnapshotRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)debugQuickLookObject;
- (id)focusSystem;
- (id)initWithRootView:(id)arg1 focusSystem:(id)arg2;
- (id)lastSnapshot;
- (id)linearlyOrderedCandidatesForFocusMovement:(id)arg1 fromView:(id)arg2 indexForFocusedView:(unsigned long long*)arg3;
- (id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumSearchArea;
- (id)nearestCandidateFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)rootView;
- (void)setFocusSystem:(id)arg1;
- (void)setLastSnapshot:(id)arg1;
- (void)setMinimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRootView:(id)arg1;

@end
