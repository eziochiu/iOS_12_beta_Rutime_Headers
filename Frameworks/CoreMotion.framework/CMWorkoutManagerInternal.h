/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWorkoutManagerInternal : NSObject {
    <CMWorkoutManagerDelegate> * fDelegate;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fLocationdConnection;
    bool  fResumeWorkoutOnInterrupt;
    CMWorkoutManager * fSender;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
    CMWorkout * fWorkout;
}

- (void)_handleDaemonEvent:(id)arg1;
- (void)_handleDaemonResponse:(id)arg1;
- (void)_registerForWorkoutEvents;
- (void)_setSuggestedStopTimeout:(double)arg1;
- (void)_startWatchdogCheckins;
- (void)_startWorkout:(id)arg1;
- (void)_stopWatchdogCheckins;
- (void)_stopWorkout:(id)arg1;
- (void)_teardown;
- (void)_unregisterForWorkoutEvents;
- (void)_userDismissedWorkoutAlert;
- (void)dealloc;
- (id)init;

@end
