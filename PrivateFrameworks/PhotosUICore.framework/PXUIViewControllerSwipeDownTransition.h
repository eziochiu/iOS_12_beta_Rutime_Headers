/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIViewControllerSwipeDownTransition : PXUIViewControllerZoomTransition {
    bool  _didAnimate;
    bool  _didHandleGestureEnd;
    UIView * _dimmingView;
    UIPanGestureRecognizer * _panGestureRecognizer;
    bool  _shouldHandleGestureEnd;
    PXSwipeDownTracker * _swipeDownTracker;
    struct CGPoint { 
        double x; 
        double y; 
    }  _swipeViewInitialCenter;
    UIView * _swipedView;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) PXSwipeDownTracker *swipeDownTracker;
@property (nonatomic) struct CGPoint { double x1; double x2; } swipeViewInitialCenter;
@property (nonatomic, retain) UIView *swipedView;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *transitionContext;

+ (bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;

- (void).cxx_destruct;
- (void)_handleGestureEndIfNeeded;
- (void)_updateDimmingViewOrder;
- (void)animateTransition:(id)arg1;
- (id)dimmingView;
- (bool)isInteractive;
- (id)panGestureRecognizer;
- (void)panGestureRecognizerDidChange;
- (void)setDimmingView:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setSwipeDownTracker:(id)arg1;
- (void)setSwipeViewInitialCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSwipedView:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)swipeDownTracker;
- (struct CGPoint { double x1; double x2; })swipeViewInitialCenter;
- (id)swipedView;
- (id)transitionContext;

@end
