/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSegmentedControl : UIView <HUQuickControlAuxiliaryView> {
    UILongPressGestureRecognizer * _gestureRecognizer;
    UIStackView * _segmentStackView;
    NSArray * _segmentViews;
    NSArray * _segments;
    NSNumber * _selectedSegmentIndex;
    id /* block */  _selectionChangeHandler;
    NSNumber * _trackingSegmentIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) bool hasCenteredContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *segmentStackView;
@property (nonatomic, retain) NSArray *segmentViews;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (nonatomic, retain) NSNumber *selectedSegmentIndex;
@property (nonatomic, copy) id /* block */ selectionChangeHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *trackingSegmentIndex;

- (void).cxx_destruct;
- (void)_handleGesture:(id)arg1;
- (void)_setupConstraints;
- (void)_updateSegmentSelectionStateAnimated:(bool)arg1;
- (void)_updateSegmentViewsForUILayoutDirection;
- (void)ensureCorrectHeaderViewOrientation;
- (id)gestureRecognizer;
- (bool)hasCenteredContent;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithSegments:(id)arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)preferVerticalLayout;
- (id)segmentStackView;
- (id)segmentViews;
- (id)segments;
- (id)selectedSegmentIndex;
- (id /* block */)selectionChangeHandler;
- (void)setGestureRecognizer:(id)arg1;
- (void)setSegmentStackView:(id)arg1;
- (void)setSegmentViews:(id)arg1;
- (void)setSelectedSegmentIndex:(id)arg1;
- (void)setSelectionChangeHandler:(id /* block */)arg1;
- (void)setTrackingSegmentIndex:(id)arg1;
- (id)trackingSegmentIndex;
- (void)traitCollectionDidChange:(id)arg1;

@end
