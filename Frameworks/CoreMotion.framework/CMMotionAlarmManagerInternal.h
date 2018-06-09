/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionAlarmManagerInternal : NSObject {
    NSMutableDictionary * fAlarms;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    bool  fListening;
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fLocationdConnection;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

+ (id)instance;

- (bool)_acknowledgeAlarm:(id)arg1 error:(id*)arg2;
- (void)_handleAlarmFire:(id)arg1;
- (bool)_launchRemoteAppWithError:(id*)arg1 delegate:(id)arg2;
- (bool)_registerAlarm:(id)arg1 error:(id*)arg2;
- (void)_startListeners;
- (void)_startWatchdogCheckins;
- (void)_stopListeners;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (bool)_unregisterAlarm:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;

@end
