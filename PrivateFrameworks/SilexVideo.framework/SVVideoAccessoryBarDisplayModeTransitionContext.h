/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryBarDisplayModeTransitionContext : NSObject <SVVideoAccessoryItemDisplayModeTransitionContext> {
    NSSet * _appearingViews;
    id /* block */  _completionBlock;
    NSSet * _containerViews;
    NSSet * _disappearingViews;
    SVVideoAccessoryBarDisplayState * _fromState;
    SVVideoAccessoryBarDisplayState * _toState;
    bool  _transitionWasCancelled;
    NSSet * _transitioningViews;
    NSSet * _views;
}

@property (nonatomic, readonly) NSSet *appearingViews;
@property (nonatomic, readonly) id /* block */ completionBlock;
@property (nonatomic, readonly) NSSet *containerViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *disappearingViews;
@property (nonatomic, readonly) SVVideoAccessoryBarDisplayState *fromState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVVideoAccessoryBarDisplayState *toState;
@property (nonatomic) bool transitionWasCancelled;
@property (nonatomic, readonly) NSSet *transitioningViews;
@property (nonatomic, readonly) NSSet *views;

- (void).cxx_destruct;
- (id)appearingViews;
- (void)completeTransition:(bool)arg1;
- (id /* block */)completionBlock;
- (id)containerViewForDisplayMode:(unsigned long long)arg1 inState:(id)arg2;
- (id)containerViewForInitialDisplayMode:(unsigned long long)arg1;
- (id)containerViewForTargetDisplayMode:(unsigned long long)arg1;
- (id)containerViews;
- (id)disappearingViews;
- (unsigned long long)displayModeForView:(id)arg1 inState:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForView:(id)arg1 inState:(id)arg2;
- (id)fromState;
- (id)initWithFromState:(id)arg1 toState:(id)arg2 completionBlock:(id /* block */)arg3;
- (unsigned long long)initialDisplayModeForView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForView:(id)arg1 inState:(id)arg2 basedOnPositionInState:(id)arg3;
- (void)setTransitionWasCancelled:(bool)arg1;
- (unsigned long long)targetDisplayModeForView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrameForView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrameForView:(id)arg1 inState:(id)arg2 basedOnPositionInState:(id)arg3;
- (id)toState;
- (bool)transitionWasCancelled;
- (id)transitioningViews;
- (id)views;
- (id)viewsForState:(id)arg1;

@end
