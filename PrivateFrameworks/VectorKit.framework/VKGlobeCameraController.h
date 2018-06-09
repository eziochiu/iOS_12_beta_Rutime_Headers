/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeCameraController : VKScreenCameraController <VKGesturingCameraController> {
    double  _beganDoublePanPitch;
    struct CameraManager { 
        int (**_vptr$CameraManager)(); 
        bool _panBegin; 
        bool _panInProgress; 
        bool _panEnd; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _panCurrentCursor; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _panPreviousCursor; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _panStartCursor; 
        struct Coordinate3D<Radians, double> { 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _panStartPosition; 
        double _panDistance; 
        bool _panAtStartPosition; 
        bool _rotateBegin; 
        bool _rotateInProgress; 
        bool _rotateEnd; 
        struct Coordinate3D<Radians, double> { 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _rotateStartPosition; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _rotateCurrentCursor; 
        double _rotateAngle; 
        bool _tiltBegin; 
        bool _tiltInProgress; 
        bool _tiltEnd; 
        struct Coordinate3D<Radians, double> { 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _tiltStartPosition; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _tiltCurrentCursor; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _tiltPreviousCursor; 
        double _tiltAngle; 
        bool _zoomBegin; 
        bool _zoomInProgress; 
        bool _zoomEnd; 
        struct Coordinate3D<Radians, double> { 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _zoomStartPosition; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _zoomCurrentCursor; 
        double _zoomFactor; 
        double _zoomStartDistance; 
        bool _zoomRotateToNorth; 
        bool _useTiltLimit; 
        int _tiltLimitMode; 
        bool _tiltLimitPushDownEnabled; 
        bool _tiltLimitTransferInProgress; 
        bool _tiltLimitPushDown; 
        double _startPushDownTilt; 
        double _tiltLimitTransferFraction; 
        double _startTiltLimitTilt; 
        struct Geocentric<double> { 
            double _e[3]; 
        } _startTiltLimitPosition; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _startTiltLimitDirection; 
        double _fullZoomTiltLimitFactor; 
    }  _cameraManager;
    bool  _couldEnter3DMode;
    double  _currentDoublePanPitch;
    double  _currentZoomLevel;
    struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; } * _globeView;
    bool  _isPitching;
    bool  _isRotating;
    double  _lastRotation;
    double  _maxZoomLevel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panLastScreenPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panStartScreenPoint;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    bool  _tourShouldResumeWhenDoneGesturing;
    bool  _wasPitched;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; /* Warning: unhandled struct encoding: '{CameraFrame<geo::Radians' */ struct x10; }*globeView; /* unknown property attribute:  altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[24C]}^{__base<altitude::TextureMap *()>}}}} */
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool tourShouldResumeWhenDoneGesturing;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { double x1; double x2; })_centerCoordinateForMapRegion:(id)arg1;
- (double)_fovAdjustment;
- (void)_updateCanEnter3DMode;
- (void)_updateGlobeFromCamera;
- (void)_updateIsPitched;
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;
- (double)altitude;
- (struct Geocentric<double> { double x1[3]; })cameraPosition;
- (bool)canEnter3DMode;
- (struct { double x1; double x2; })centerCoordinate;
- (id /* block */)createMoveToZoomOutZoomInFrameFunction:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })arg1 toLatLon:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })arg2;
- (double)currentZoomLevel;
- (void)dealloc;
- (double)distanceFromCenterCoordinate;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (double)earthRadiusAt:(double)arg1;
- (void)enter3DMode;
- (void)exit3DMode;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(bool)arg2 labelChanged:(id /* block */)arg3 stateChange:(id /* block */)arg4;
- (double)geocAngleBetween:(struct { double x1; double x2; })arg1 andCoordinate:(struct { double x1; double x2; })arg2;
- (struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; }*)globeView;
- (double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3;
- (double)heading;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)interruptFlyoverTourAnimation;
- (bool)isFlyoverTourStarted;
- (bool)isFullyPitched;
- (bool)isPitched;
- (id)mapRegion;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (void)moveTo:(struct { double x1; double x2; })arg1 height:(double)arg2 useHeight:(bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)moveTo:(struct { double x1; double x2; })arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)moveToZoomOutZoomInTransition:(struct { double x1; double x2; })arg1 height:(double)arg2 useHeight:(bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)pauseFlyoverTourAnimation;
- (double)pitch;
- (void)pitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (double)presentationYaw;
- (bool)restoreViewportFromInfo:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rotateTo:(double)arg1 animated:(bool)arg2;
- (void)setCenterCoordinate3D:(struct { double x1; double x2; double x3; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCurrentZoomLevel:(double)arg1;
- (void)setGesturing:(bool)arg1;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; }*)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setTourShouldResumeWhenDoneGesturing:(bool)arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (float)slowDownFactorFromLoadProgress;
- (bool)snapMapIfNecessary:(bool)arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (void)stopFlyoverTourAnimation;
- (void)stopGlobeAnimations;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapZoom:(struct CGPoint { double x1; double x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (long long)tileSize;
- (void)tiltTo:(double)arg1 animated:(bool)arg2 exaggerate:(bool)arg3;
- (double)topDownMinimumZoomLevel;
- (bool)tourShouldResumeWhenDoneGesturing;
- (void)updateCameraManager;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updateState;
- (id)viewportInfo;
- (double)widestLatitudeForMapRegion:(id)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomForMapRegion:(id)arg1;
- (void)zoomToDistance:(struct CGPoint { double x1; double x2; })arg1 distance:(double)arg2 time:(double)arg3;
- (void)zoomToDistance:(struct CGPoint { double x1; double x2; })arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(id /* block */)arg4;

@end
