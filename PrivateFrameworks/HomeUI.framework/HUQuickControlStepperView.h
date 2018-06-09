/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlStepperView : UIView <HUQuickControlInteractiveView> {
    double  _accumulatedTouchDistance;
    UIView * _backgroundView;
    UILongPressGestureRecognizer * _gestureRecognizer;
    <HUQuickControlViewInteractionDelegate> * _interactionDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    HUQuickControlStepperViewProfile * _profile;
    NSArray * _segmentViews;
    NSNumber * _selectedSegmentIndex;
    NSArray * _separatorViews;
    NSNumber * _trackingSegmentIndex;
    bool  _userInteractionActive;
}

@property (nonatomic) double accumulatedTouchDistance;
@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlViewInteractionDelegate> *interactionDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTouchLocation;
@property (nonatomic, copy) HUQuickControlStepperViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic, retain) NSArray *segmentViews;
@property (nonatomic, retain) NSNumber *selectedSegmentIndex;
@property (nonatomic, retain) NSArray *separatorViews;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *trackingSegmentIndex;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)_createSegmentAndSeparatorViews;
- (void)_handleGesture:(id)arg1;
- (void)_layoutSegmentViews;
- (bool)_shouldRequireMinimumDragDistanceForGestureRecognizer:(id)arg1;
- (void)_updateSegmentHighlightedState;
- (void)_updateUserInteractionActive:(bool)arg1 forFirstTouch:(bool)arg2;
- (double)accumulatedTouchDistance;
- (id)backgroundView;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)gestureRecognizer;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionActive;
- (struct CGPoint { double x1; double x2; })lastTouchLocation;
- (void)layoutSubviews;
- (id)profile;
- (id)segmentViews;
- (id)selectedSegmentIndex;
- (id)separatorViews;
- (void)setAccumulatedTouchDistance:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setLastTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setProfile:(id)arg1;
- (void)setSegmentViews:(id)arg1;
- (void)setSelectedSegmentIndex:(id)arg1;
- (void)setSeparatorViews:(id)arg1;
- (void)setTrackingSegmentIndex:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)trackingSegmentIndex;
- (id)value;

@end
