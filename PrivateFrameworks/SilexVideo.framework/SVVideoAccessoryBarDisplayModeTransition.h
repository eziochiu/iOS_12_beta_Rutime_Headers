/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryBarDisplayModeTransition : NSObject {
    SVVideoAccessoryBarDisplayModeTransitionContext * _context;
    SVVideoAccessoryBarDisplayState * _fromState;
    SVVideoAccessoryBarDisplayState * _toState;
    <SVVideoAccessoryItemDisplayModeTransitioning> * _transitionCoordinator;
}

@property (nonatomic, retain) SVVideoAccessoryBarDisplayModeTransitionContext *context;
@property (nonatomic, readonly) SVVideoAccessoryBarDisplayState *fromState;
@property (nonatomic, readonly) SVVideoAccessoryBarDisplayState *toState;
@property (nonatomic, readonly) <SVVideoAccessoryItemDisplayModeTransitioning> *transitionCoordinator;

- (void).cxx_destruct;
- (void)cancel;
- (id)context;
- (id)fromState;
- (id)initWithFromState:(id)arg1 toState:(id)arg2 transitionCoordinator:(id)arg3;
- (void)performTransitionWithCompletionBlock:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (id)toState;
- (id)transitionCoordinator;

@end
