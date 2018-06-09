/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TURepeatingActor : NSObject {
    id /* block */  _attemptNextIterationBlock;
    TURepeatingAction * _currentRepeatingAction;
    bool  _currentlyPerformingAction;
    TURepeatingAction * _pendingRepeatingAction;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _stopped;
}

@property (nonatomic, copy) id /* block */ attemptNextIterationBlock;
@property (nonatomic, retain) TURepeatingAction *currentRepeatingAction;
@property (getter=isCurrentlyPerformingAction, nonatomic) bool currentlyPerformingAction;
@property (nonatomic, retain) TURepeatingAction *pendingRepeatingAction;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (getter=isStopped, nonatomic) bool stopped;

- (void).cxx_destruct;
- (void)_attemptNextIteration;
- (void)_beginRepeatingAction:(id)arg1;
- (void)_completeWithDidFinish:(bool)arg1;
- (bool)_hasIterationsRemaining;
- (void)_stopWithDidFinish:(bool)arg1;
- (id /* block */)attemptNextIterationBlock;
- (void)beginRepeatingAction:(id /* block */)arg1 iterations:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)beginRepeatingAction:(id /* block */)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(id /* block */)arg4;
- (id)currentRepeatingAction;
- (id)init;
- (bool)isCurrentlyPerformingAction;
- (bool)isRunning;
- (bool)isStopped;
- (id)pendingRepeatingAction;
- (id)queue;
- (void)setAttemptNextIterationBlock:(id /* block */)arg1;
- (void)setCurrentRepeatingAction:(id)arg1;
- (void)setCurrentlyPerformingAction:(bool)arg1;
- (void)setPendingRepeatingAction:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStopped:(bool)arg1;
- (void)stop;

@end
