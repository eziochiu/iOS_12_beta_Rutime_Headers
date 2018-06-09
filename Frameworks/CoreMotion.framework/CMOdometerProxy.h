/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometerProxy : NSObject {
    double  _averageSpeed;
    CMOdometer * _odometer;
    double  _startDate;
    double  _totalDistance;
    NSObject<OS_dispatch_queue> * fCallbackQueue;
    long long  fGpsAvailability;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fLocationdConnection;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

@property double averageSpeed;
@property (nonatomic) CMOdometer *odometer;
@property double startDate;
@property double totalDistance;

- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesWithHandler:(id /* block */)arg1;
- (void)_startWatchdogCheckins;
- (void)_stopOdometerUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (double)averageSpeed;
- (void)dealloc;
- (id)initWithOdometer:(id)arg1;
- (id)odometer;
- (void)setAverageSpeed:(double)arg1;
- (void)setOdometer:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setTotalDistance:(double)arg1;
- (double)startDate;
- (double)totalDistance;

@end
