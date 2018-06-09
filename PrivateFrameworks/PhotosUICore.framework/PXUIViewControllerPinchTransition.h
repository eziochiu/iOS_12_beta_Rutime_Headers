/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIViewControllerPinchTransition : PXUIViewControllerTransition {
    UIView * __dimmingView;
    UIView * __fromSnapshotView;
    UIView * __fromView;
    PXPinchTracker * __pinchTracker;
    PXRegionOfInterest * __regionOfInterest;
    long long  __state;
    UIView * __toSnapshotView;
    UIView * __toView;
    <UIViewControllerContextTransitioning> * __transitionContext;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
}

@property (setter=_setDimmingView:, nonatomic, retain) UIView *_dimmingView;
@property (setter=_setFromSnapshotView:, nonatomic, retain) UIView *_fromSnapshotView;
@property (setter=_setFromView:, nonatomic, retain) UIView *_fromView;
@property (setter=_setPinchTracker:, nonatomic, retain) PXPinchTracker *_pinchTracker;
@property (setter=_setRegionOfInterest:, nonatomic, retain) PXRegionOfInterest *_regionOfInterest;
@property (setter=_setState:, nonatomic) long long _state;
@property (setter=_setToSnapshotView:, nonatomic, retain) UIView *_toSnapshotView;
@property (setter=_setToView:, nonatomic, retain) UIView *_toView;
@property (setter=_setTransitionContext:, nonatomic, retain) <UIViewControllerContextTransitioning> *_transitionContext;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGestureRecognizer;

+ (bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;

- (void).cxx_destruct;
- (id)_dimmingView;
- (id)_fromSnapshotView;
- (id)_fromView;
- (id)_pinchTracker;
- (id)_regionOfInterest;
- (void)_setDimmingView:(id)arg1;
- (void)_setFromSnapshotView:(id)arg1;
- (void)_setFromView:(id)arg1;
- (void)_setPinchTracker:(id)arg1;
- (void)_setRegionOfInterest:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)_setToSnapshotView:(id)arg1;
- (void)_setToView:(id)arg1;
- (void)_setTransitionContext:(id)arg1;
- (long long)_state;
- (id)_toSnapshotView;
- (id)_toView;
- (id)_transitionContext;
- (void)_update;
- (void)animateTransition:(id)arg1;
- (bool)isInteractive;
- (id)pinchGestureRecognizer;
- (void)pinchGestureRecognizerDidChange;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
