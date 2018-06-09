/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerProxy : NSObject {
    double  fActiveTimeFromStart;
    double  fActiveTimeOffset;
    NSObject<OS_dispatch_queue> * fAppQueue;
    id /* block */  fCumulativeUpdateHandler;
    double  fDistanceFromStart;
    double  fDistanceOffset;
    int  fElevationAscendedOffset;
    int  fElevationAscendedStart;
    bool  fElevationCountingAvailable;
    int  fElevationDescendedOffset;
    int  fElevationDescendedStart;
    id /* block */  fEventHandler;
    int  fFloorAscendedOffset;
    int  fFloorAscendedStart;
    bool  fFloorCountingAvailable;
    int  fFloorDescendedOffset;
    int  fFloorDescendedStart;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fLocationdConnection;
    id /* block */  fOffsetUpdateHandler;
    bool  fPaceAndCadenceAvailable;
    long long  fPushCountFromStart;
    long long  fPushCountOffset;
    long long  fStepCountFromStart;
    long long  fStepCountOffset;
    bool  fStopEventUpdates;
    bool  fStopUpdates;
    double  fValidStartDate;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
    int  fWorkoutType;
}

- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 onQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_handleRecordQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 withHandler:(id /* block */)arg2;
- (void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (void)_queryPedometerCalibrationBinsWithHandler:(id /* block */)arg1 forType:(long long)arg2 forRemote:(bool)arg3;
- (void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startPedometerEventUpdatesWithHandler:(id /* block */)arg1;
- (void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startWatchdogCheckins;
- (void)_stopPedometerEventUpdates;
- (void)_stopPedometerUpdates;
- (void)_stopWatchdogCheckins;
- (id)_strideCalibrationDump;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
