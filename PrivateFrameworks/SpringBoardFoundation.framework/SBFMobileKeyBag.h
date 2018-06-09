/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMobileKeyBag : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    int  _firstUnlockNotification;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasPasscodeSet;
    bool  _queue_hasUnlockedSinceBoot;
    NSMutableArray * _queue_observerStateChangedCallbackBlocks;
    NSHashTable * _queue_observers;
    int  _stateChangedNotifyToken;
}

@property (nonatomic, readonly, copy) SBFMobileKeyBagState *extendedState;
@property (nonatomic, readonly) bool hasBeenUnlockedSinceBoot;
@property (nonatomic, readonly) bool hasPasscodeSet;
@property (nonatomic, readonly) long long maxUnlockAttempts;
@property (nonatomic, readonly, copy) SBFMobileKeyBagState *state;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_createStashBag:(id)arg1;
- (void)_queue_firstUnlockOccurred;
- (void)_queue_handleKeybagStatusChanged;
- (id)_queue_lockStateExtended:(bool)arg1;
- (void)_queue_setHasPasscodeIfNecessary:(id)arg1;
- (bool)_queue_verifyExpectedStashState:(long long)arg1;
- (void)addObserver:(id)arg1;
- (bool)beginRecovery:(id)arg1 error:(id*)arg2;
- (void)createStashBag:(id)arg1 completion:(id /* block */)arg2;
- (void)createStashBag:(id)arg1 completion:(id /* block */)arg2 completionQueue:(id)arg3;
- (void)dealloc;
- (id)extendedState;
- (bool)hasBeenUnlockedSinceBoot;
- (bool)hasPasscodeSet;
- (id)init;
- (void)lockSkippingGracePeriod:(bool)arg1;
- (long long)maxUnlockAttempts;
- (void)removeObserver:(id)arg1;
- (id)state;
- (bool)unlockWithPasscode:(id)arg1 error:(id*)arg2;
- (void)waitForUnlockWithTimeout:(float)arg1;

@end
