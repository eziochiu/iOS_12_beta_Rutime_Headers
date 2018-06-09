/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionManagerInternal : NSObject {
    NSOperationQueue * _fDeviceMotionLiteClientQueue;
    id /* block */  _fDeviceMotionLiteFusedHandler;
    NSString * _fDeviceMotionLitePhysicalDeviceID;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fAccelerometerDispatcher;
    id /* block */  fAccelerometerHandler;
    NSOperationQueue * fAccelerometerQueue;
    double  fAccelerometerUpdateInterval;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fAmbientPressureDispatcher;
    id /* block */  fAmbientPressureHandler;
    NSOperationQueue * fAmbientPressureQueue;
    double  fAmbientPressureUpdateInterval;
    unsigned long long  fAttitudeReferenceFrame;
    long long  fCaptureMode;
    bool  fCompassCalibrationHud;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fCompensatedAmbientPressureDispatcher;
    id /* block */  fCompensatedAmbientPressureHandler;
    NSOperationQueue * fCompensatedAmbientPressureQueue;
    double  fCompensatedAmbientPressureUpdateInterval;
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fConnection;
    NSObject<OS_dispatch_queue> * fConnectionQueue;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fDeviceMotionDispatcher;
    id /* block */  fDeviceMotionErrorHandler;
    NSOperationQueue * fDeviceMotionErrorQueue;
    id /* block */  fDeviceMotionHandler;
    struct unique_ptr<CLDeviceMotionLiteService, std::__1::default_delete<CLDeviceMotionLiteService> > { 
        struct __compressed_pair<CLDeviceMotionLiteService *, std::__1::default_delete<CLDeviceMotionLiteService> > { 
            struct CLDeviceMotionLiteService {} *__value_; 
        } __ptr_; 
    }  fDeviceMotionLiteService;
    int  fDeviceMotionMode;
    NSOperationQueue * fDeviceMotionQueue;
    double  fDeviceMotionStartTimestamp;
    double  fDeviceMotionUpdateInterval;
    struct { 
        double x; 
        double y; 
        double z; 
        double magnitude; 
        double horizontal; 
        double declination; 
        double inclination; 
        double timestamp; 
    }  fGeomagneticModel;
    struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > { 
        struct __compressed_pair<CLGeomagneticModelProvider_Type::Client *, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > { 
            struct Client {} *__value_; 
        } __ptr_; 
    }  fGeomagneticModelProviderClient;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fGyroDispatcher;
    id /* block */  fGyroHandler;
    NSOperationQueue * fGyroQueue;
    double  fGyroUpdateInterval;
    bool  fHaveSentDeviceRequiresMovementError;
    bool  fHaveSentTrueNorthUnavailableError;
    bool  fIsApplicationActive;
    bool  fIsCompassCalibrated;
    bool  fIsUsingCalibratedCompass;
    double  fLastAccelerometerNotificationTimestamp;
    double  fLastAmbientPressureNotificationTimestamp;
    double  fLastCompensatedAmbientPressureNotificationTimestamp;
    double  fLastDeviceMotionNotificationTimestamp;
    double  fLastGyroNotificationTimestamp;
    double  fLastMagnetometerNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } acceleration; 
    }  fLatestAccelerometerSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fLatestAmbientPressureSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fLatestCompensatedAmbientPressureSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } rotationRate; 
        unsigned short sampleNum; 
        bool fsync; 
    }  fLatestGyroSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
    }  fLatestMagnetometerSample;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fMagnetometerDispatcher;
    id /* block */  fMagnetometerHandler;
    NSOperationQueue * fMagnetometerQueue;
    double  fMagnetometerUpdateInterval;
    int (* fPrivateAccelerometerDataCallback;
    void * fPrivateAccelerometerDataCallbackInfo;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateAccelerometerDataDispatcher;
    int (* fPrivateDeviceMotionCallback;
    void * fPrivateDeviceMotionCallbackInfo;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateDeviceMotionDispatcher;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateDeviceMotionSensorStatusDispatcher;
    bool  fPrivateDeviceMotionUse9Axis;
    int (* fPrivateGyroDataCallback;
    void * fPrivateGyroDataCallbackInfo;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateGyroDataDispatcher;
    int (* fPrivateMagnetometerDataCallback;
    void * fPrivateMagnetometerDataCallbackInfo;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateMagnetometerDataDispatcher;
    int (* fPrivateNotificationCallback;
    void * fPrivateNotificationCallbackInfo;
    int  fPrivatePowerConservationMode;
    bool  fPrivateUseAccelerometer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fSampleLock;
    bool  fShowsDeviceMovementDisplay;
    bool  fSidebandSensorFusionEnabled;
    bool  fSidebandSensorFusionLatency;
    bool  fSidebandSensorFusionSnoop;
    struct unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor> > { 
        struct __compressed_pair<CLIspDataVisitor *, std::__1::default_delete<CLIspDataVisitor> > { 
            struct CLIspDataVisitor {} *__value_; 
        } __ptr_; 
    }  fSidebandVisitor;
    struct __CFRunLoopTimer { } * fWatchdogTimer;
}

@property (nonatomic, retain) NSOperationQueue *fDeviceMotionLiteClientQueue;
@property (nonatomic, copy) id /* block */ fDeviceMotionLiteFusedHandler;
@property (nonatomic, retain) NSString *fDeviceMotionLitePhysicalDeviceID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fDeviceMotionLiteClientQueue;
- (id /* block */)fDeviceMotionLiteFusedHandler;
- (id)fDeviceMotionLitePhysicalDeviceID;
- (id)init;
- (void)setFDeviceMotionLiteClientQueue:(id)arg1;
- (void)setFDeviceMotionLiteFusedHandler:(id /* block */)arg1;
- (void)setFDeviceMotionLitePhysicalDeviceID:(id)arg1;
- (void)teardownPrivate;

@end
