/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLExpandableView : UIView {
    id /* block */  _collapsingCompletionHandler;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contractedFrame;
    <PLExpandableViewDelegate> * _delegate;
    struct { 
        unsigned int state : 3; 
        unsigned int prevState : 3; 
        unsigned int tracking : 1; 
        unsigned int autorotationDisabled : 1; 
        unsigned int animationDisabled : 1; 
        unsigned int updateContractedFrame : 1; 
        unsigned int updateExpandedFrame : 1; 
        unsigned int allowsExpansion : 1; 
        unsigned int delegateWillBeginExpanding : 1; 
        unsigned int delegateWillCompleteExpanding : 1; 
        unsigned int delegateDidCompleteExpanding : 1; 
        unsigned int delegateWillCancelExpanding : 1; 
        unsigned int delegateDidCancelExpanding : 1; 
        unsigned int delegateDidBeginCollapsing : 1; 
        unsigned int delegateWillCompleteCollapsing : 1; 
        unsigned int delegateDidCompleteCollapsing : 1; 
        unsigned int delegateWillCancelCollapsing : 1; 
        unsigned int delegateDidCancelCollapsing : 1; 
        unsigned int delegateExpandedFractionChanged : 1; 
    }  _expandFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _expandedFrame;
    id /* block */  _expansionCompletionHandler;
    double  _expansionFraction;
    unsigned long long  _leftTouchIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftTouchLocation;
    double  _pinchVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousLeftLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousRightLocation;
    unsigned long long  _rightTouchIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightTouchLocation;
    double  _trackingTimeInterval;
}

@property (nonatomic) bool allowsExpansion;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contractedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } expandedFrame;

- (bool)_canPinch;
- (void)_notifyDidCancelCollapsing;
- (void)_notifyDidCancelExpanding;
- (void)_notifyDidCompleteCollapsing;
- (void)_notifyDidCompleteExpanding;
- (void)_notifyWillBeginCollapsing;
- (void)_notifyWillBeginExpanding;
- (void)_notifyWillCancelCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCancelExpandingWithDuration:(double)arg1;
- (void)_notifyWillCompleteCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCompleteExpandingWithDuration:(double)arg1;
- (void)_setAutorotationDisabled:(bool)arg1;
- (void)_transitionFromCancelContract:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCancelExpand:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteContract:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteExpand:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromContracted:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromContracting:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanded:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanding:(int)arg1 withDuration:(double)arg2;
- (bool)allowsExpansion;
- (void)beginTrackingPinch:(id)arg1;
- (bool)canCollapse;
- (void)canceledPinch:(id)arg1;
- (void)collapseWithAnimation:(bool)arg1 completion:(id /* block */)arg2;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (float)continueTrackingPinch:(id)arg1;
- (void)continuedPinch:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contractedFrame;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)expandWithAnimation:(bool)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrame;
- (double)expansionFraction;
- (void)finishTransition;
- (void)finishTransitionToState:(int)arg1;
- (void)finishedPinch:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTracking;
- (void)notifyExpansionFraction:(float)arg1 force:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pinchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 insetTouches:(bool)arg3;
- (int)previousState;
- (void)setAllowsExpansion:(bool)arg1;
- (void)setContractedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExpansionFraction:(double)arg1;
- (void)setState:(int)arg1 withDuration:(double)arg2;
- (int)snapState:(bool)arg1;
- (void)startedPinch:(id)arg1;
- (int)state;
- (void)stateDidChangeFrom:(int)arg1;
- (void)stateWillChangeTo:(int)arg1;
- (void)updatePinchState:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
