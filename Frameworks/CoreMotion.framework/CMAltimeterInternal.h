/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeterInternal : NSObject {
    NSObject<OS_dispatch_queue> * fAppQueue;
    float  fBarometricBaseAltitude;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fBaseAltimeterSample;
    bool  fBaselineReceived;
    double  fElevationAscendedOffset;
    double  fElevationDescendedOffset;
    double  fFilteredElevationOffset;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fFilteredPressureDispatcher;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fLocationdConnection;
    float  fMostRecentFilteredPressure;
    struct deque<float, std::__1::allocator<float> > { 
        struct __split_buffer<float *, std::__1::allocator<float *> > { 
            float **__first_; 
            float **__begin_; 
            float **__end_; 
            struct __compressed_pair<float **, std::__1::allocator<float *> > { 
                float **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<float> > { 
            unsigned long long __value_; 
        } __size_; 
    }  fPressureSamples;
    id /* block */  fRelativeAltimeterHandler;
    NSOperationQueue * fRelativeAltimeterQueue;
    id /* block */  fSignificantElevationSampleHandler;
    bool  fStopRelativeAltitudeUpdates;
    bool  fStopSignificantElevationUpdates;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_startElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)_startRelativeAltitudeUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)_startWatchdogCheckins;
- (void)_stopElevationUpdates;
- (void)_stopRelativeAltitudeUpdates;
- (void)_stopSignificantElevationUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
