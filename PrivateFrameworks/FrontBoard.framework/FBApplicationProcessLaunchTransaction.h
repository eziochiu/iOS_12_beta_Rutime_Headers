/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProcessLaunchTransaction : FBTransaction {
    NSString * _bundleID;
    FBWaitForProcessDeathTransaction * _deathTransaction;
    FBProcessExecutionContext * _executionContext;
    id /* block */  _executionContextProvider;
    bool  _exited;
    bool  _failedLaunch;
    int  _interruptedOrComplete;
    FBApplicationProcess * _process;
    FBProcessManager * _processManager;
}

@property (nonatomic, readonly) bool exited;
@property (nonatomic, readonly) bool failedLaunch;
@property (nonatomic, readonly) FBApplicationProcess *process;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_queue_finishProcessLaunch:(bool)arg1;
- (void)_queue_launchProcess:(id)arg1;
- (void)_queue_noteExited;
- (void)_queue_processWillLaunch:(id)arg1;
- (bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_willComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)exited;
- (bool)failedLaunch;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(id /* block */)arg2;
- (id)initWithApplicationProcess:(id)arg1;
- (id)process;
- (void)removeObserver:(id)arg1;

@end
