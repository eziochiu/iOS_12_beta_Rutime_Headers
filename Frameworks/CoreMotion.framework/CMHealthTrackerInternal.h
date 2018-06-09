/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMHealthTrackerInternal : NSObject {
    NSObject<OS_dispatch_queue> * fAppQueue;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fLocationdConnection;
}

- (void)_queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(id /* block */)arg3;
- (void)_queryVO2MaxInputsFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
