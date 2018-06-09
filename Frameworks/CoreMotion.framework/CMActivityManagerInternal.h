/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityManagerInternal : NSObject {
    id /* block */  fActivityHandler;
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fMotionStateSimQueue;
    long long  fMotionStateSimResult;
    NSObject<OS_dispatch_semaphore> * fMotionStateSimSemaphore;
    bool  fMotionStateSimWaiting;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    NSObject<OS_dispatch_queue> * fSidebandOverrideQueue;
    long long  fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> * fSidebandOverrideSemaphore;
    bool  fSidebandOverrideWaiting;
    bool  fSubscribedToMotionState;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)overrideOscarSideband:(bool)arg1 withState:(long long)arg2;
- (void)simulateMotionState:(bool)arg1 withState:(long long)arg2;
- (void)startActivityUpdatesWithHandlerPrivate:(id /* block */)arg1;
- (void)startWatchdogCheckinsPrivate;
- (void)stopActivityUpdatesPrivate;
- (void)stopWatchdogCheckinsPrivate;

@end
