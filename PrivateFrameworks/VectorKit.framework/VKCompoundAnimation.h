/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCompoundAnimation : VKAnimation {
    NSMutableArray * _animations;
    id /* block */  _groupStepHandler;
}

@property (nonatomic, readonly) NSMutableArray *animations;
@property (nonatomic, copy) id /* block */ groupStepHandler;

- (id)animations;
- (void)dealloc;
- (double)duration;
- (id /* block */)groupStepHandler;
- (id)initWithAnimations:(id)arg1;
- (void)onTimerFired:(double)arg1;
- (void)pause;
- (void)resume;
- (bool)running;
- (bool)runsForever;
- (void)setDuration:(double)arg1;
- (void)setGroupStepHandler:(id /* block */)arg1;
- (void)setRunsForever:(bool)arg1;
- (void)startWithRunner:(id)arg1;
- (void)stopAnimation:(bool)arg1;
- (bool)timed;

@end
