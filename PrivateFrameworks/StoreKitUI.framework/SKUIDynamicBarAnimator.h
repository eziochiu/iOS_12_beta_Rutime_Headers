/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDynamicBarAnimator : NSObject {
    double  _bottomBarOffset;
    double  _bottomBarOffsetForState;
    <SKUIDynamicBarAnimatorDelegate> * _delegate;
    bool  _didHideBarsByMoving;
    bool  _didHideOrShowBarsExplicitly;
    CADisplayLink * _displayLink;
    bool  _dragging;
    bool  _inSteadyState;
    double  _lastOffset;
    double  _lastUnroundedTopBarHeight;
    double  _maximumBottomBarOffset;
    double  _minimumTopBarHeight;
    long long  _state;
    double  _targetTopBarHeight;
    double  _topBarHeight;
    double  _topBarHeightForState;
    double  _unroundedTopBarHeight;
}

@property (nonatomic, readonly) double bottomBarOffset;
@property (nonatomic) <SKUIDynamicBarAnimatorDelegate> *delegate;
@property (nonatomic) double maximumBottomBarOffset;
@property (nonatomic) double minimumTopBarHeight;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long targetState;
@property (nonatomic, readonly) double topBarHeight;

- (void).cxx_destruct;
- (double)_bottomBarOffsetForTopBarHeight:(double)arg1;
- (double)_constrainTopBarHeight:(double)arg1;
- (void)_displayLinkFired:(id)arg1;
- (void)_moveBarsWithDelta:(double)arg1;
- (void)_setInSteadyState:(bool)arg1;
- (double)_topBarHeightForBottomBarOffset:(double)arg1;
- (void)_transitionToSteadyState;
- (void)_updateDisplayLink;
- (void)_updateOutputs;
- (void)attemptTransitionToState:(long long)arg1 animated:(bool)arg2;
- (void)beginDraggingWithOffset:(double)arg1;
- (double)bottomBarOffset;
- (bool)canTransitionToState:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (id)init;
- (double)maximumBottomBarOffset;
- (double)minimumTopBarHeight;
- (void)setBottomBarOffset:(double)arg1 forState:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMaximumBottomBarOffset:(double)arg1;
- (void)setMinimumTopBarHeight:(double)arg1;
- (void)setTopBarHeight:(double)arg1 forState:(long long)arg2;
- (long long)state;
- (long long)targetState;
- (double)topBarHeight;
- (void)updateDraggingWithOffset:(double)arg1;

@end
