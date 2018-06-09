/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFUnlockManager : NSObject {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_source> * _stateRequestTimer;
}

+ (id)sharedUnlockManager;

- (void).cxx_destruct;
- (void)cancelStateRequestTimer;
- (void)disableUnlockWithDevice:(id)arg1;
- (void)enableUnlockWithDevice:(id)arg1 fromKey:(bool)arg2 withPasscode:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)establishStashBagWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)timerWithBlock:(id /* block */)arg1;
- (void)unlockEnabledWithDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unlockStateForDevice:(id)arg1 completionHandler:(id /* block */)arg2;

@end
