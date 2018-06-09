/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaybackTransitionCoordinator : NSObject <SVInteractivePlaybackTransitioning, SVPlaybackTransitionCoordinator> {
    NSMutableArray * _completionBlocks;
    <SVPlaybackTransitionContext> * _context;
    NFStateMachine * _stateMachine;
    NSMutableArray * _transitionAlongsideBlocks;
    NFStateMachineState * _transitioningState;
}

@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (nonatomic, retain) <SVPlaybackTransitionContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *transitionAlongsideBlocks;
@property (nonatomic, readonly) NFStateMachineState *transitioningState;

- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (id)completionBlocks;
- (id)context;
- (void)finishInteractiveTransition;
- (id)init;
- (void)setContext:(id)arg1;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (id)stateMachine;
- (void)transitionAlongside:(id /* block */)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)transitionAlongsideBlocks;
- (id)transitioningState;
- (void)updateInteractiveTransition:(double)arg1;

@end
