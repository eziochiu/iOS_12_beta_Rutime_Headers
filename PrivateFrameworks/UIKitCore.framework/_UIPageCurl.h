/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPageCurl : NSObject {
    NSMutableArray * _activeStateQueue;
    NSMutableSet * _completedStates;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    UIView * _contentView;
    double  _delayBetweenSuccessiveAnimations;
    double  _manualPageCurlMaxDAngle;
    _UIPageCurlState * _manualPageCurlState;
    double  _pageDiagonalAngle;
    double  _pageDiagonalLength;
    NSMutableArray * _pendingStateQueue;
    long long  _spineLocation;
}

@property (getter=_isManualPageCurlInProgressAndUncommitted, nonatomic, readonly) bool _manualPageCurlInProgressAndUncommitted;
@property (setter=_setManualPageCurlMaxDAngle:, nonatomic) double _manualPageCurlMaxDAngle;
@property (nonatomic, readonly) long long _spineLocation;
@property (nonatomic, readonly) NSNumber *_wrappedManualPageCurlDirection;

- (void).cxx_destruct;
- (void)_abortManualCurlAtLocation:(struct CGPoint { double x1; double x2; })arg1 withSuggestedVelocity:(double)arg2;
- (id)_animationKeyPaths;
- (bool)_areAnimationsInFlightOrPending;
- (double)_baseAngleOffsetForState:(id)arg1;
- (void)_beginCurlWithState:(id)arg1 previousState:(id)arg2;
- (void)_cancelAllActiveTransitionsAndAbandonCallbacks:(bool)arg1;
- (void)_cancelTransitionWithState:(id)arg1 invalidatingPageCurl:(bool)arg2;
- (void)_cleanupState:(id)arg1;
- (void)_completeManualCurlAtLocation:(struct CGPoint { double x1; double x2; })arg1 withSuggestedVelocity:(double)arg2;
- (double)_distanceToTravelWithCurrentSpineLocation;
- (double)_durationForManualCurlEndAnimationWithSuggestedVelocity:(double)arg1 shouldComplete:(bool)arg2;
- (void)_endManualCurlAtLocation:(struct CGPoint { double x1; double x2; })arg1 withSuggestedVelocity:(double)arg2 shouldComplete:(bool)arg3;
- (void)_enqueueCurlOfType:(long long)arg1 fromLocation:(struct CGPoint { double x1; double x2; })arg2 inDirection:(long long)arg3 withView:(id)arg4 revealingView:(id)arg5 completion:(id /* block */)arg6 finally:(id /* block */)arg7;
- (void)_ensureCurlFilterOnLayer:(id)arg1;
- (void)_forceCleanupState:(id)arg1 finished:(bool)arg2 completed:(bool)arg3;
- (void)_fromValue:(double*)arg1 toValue:(double*)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (double)_inputTimeForProgress:(double)arg1 distanceToTravel:(double)arg2 radius:(double*)arg3 minRadius:(double)arg4 angle:(double)arg5 dAngle:(double)arg6 touchLocation:(struct CGPoint { double x1; double x2; })arg7 state:(id)arg8;
- (bool)_isManualPageCurlInProgressAndUncommitted;
- (bool)_isPreviousCurlCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;
- (double)_manualPageCurlMaxDAngle;
- (id)_newAnimationForState:(id)arg1 withKeyPath:(id)arg2 duration:(double)arg3 fromValue:(id)arg4;
- (id)_newCurlFilter;
- (void)_pageCurlAnimationDidStop:(id)arg1 withState:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageViewFrame:(bool)arg1;
- (bool)_populateFromValue:(double*)arg1 toValue:(double*)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (struct CGPoint { double x1; double x2; })_referenceLocationForInitialLocation:(struct CGPoint { double x1; double x2; })arg1 direction:(long long)arg2;
- (void)_setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setManualPageCurlMaxDAngle:(double)arg1;
- (long long)_spineLocation;
- (void)_updateCurlFromState:(id)arg1 withTime:(double)arg2 radius:(double)arg3 angle:(double)arg4 addingAnimations:(id)arg5;
- (void)_updateManualCurlToLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updatedInputsFromState:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 time:(double*)arg3 radius:(double*)arg4 angle:(double*)arg5;
- (long long)_validatedPageCurlTypeForPageCurlType:(long long)arg1 inDirection:(long long)arg2;
- (id)_wrappedManualPageCurlDirection;
- (void)dealloc;
- (id)initWithSpineLocation:(long long)arg1 andContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContentView:(id)arg3;

@end
