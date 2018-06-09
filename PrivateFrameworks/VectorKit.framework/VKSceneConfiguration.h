/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSceneConfiguration : NSObject {
    unsigned char  _cameraMode;
    unsigned long long  _currentGroupedManeuverCount;
    unsigned char  _currentIncidentType;
    unsigned char  _currentManeuverComplexity;
    int  _currentManeuverType;
    unsigned char  _currentStepLength;
    struct ManeveuverDistancesRange { 
        double _immediate; 
        double _extremlyNear; 
        double _veryNear; 
        double _near; 
        double _medium; 
        double _far; 
        double _veryFar; 
    }  _distanceRanges;
    unsigned char  _distanceToCurrentManeuver;
    double  _distanceToDestination;
    unsigned int  _lineType;
    unsigned char  _navState;
    unsigned char  _navigationDestination;
    int  _nextManeuverRampType;
    unsigned char  _nextStepLength;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<GEOLocationCoordinate2D *, std::__1::allocator<GEOLocationCoordinate2D> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _pointsOfInterest;
    int  _rampType;
    unsigned char  _roadSpeed;
    unsigned long long  _roadSpeedZeroes;
    struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { 
        struct StylesheetManager<gss::ScenePropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sceneManager;
    unsigned char  _searchAlongTheRoute;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    unsigned char  _transportType;
    unsigned char  _vehicleSpeed;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateStyleManager;
- (id)analyticsLogContextWithNavigationState;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (unsigned long long)navCameraMode;
- (unsigned long long)navigationDestination;
- (unsigned char)navigationState;
- (void)resetState;
- (struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x1; struct __shared_weak_count {} *x2; })sceneManager;
- (void)setCurrentGroupedManeuverCount:(unsigned long long)arg1;
- (void)setCurrentIncidentType:(unsigned long long)arg1;
- (void)setCurrentManeuverJunctionsCount:(unsigned long long)arg1;
- (void)setCurrentManeuverType:(int)arg1;
- (void)setCurrentStepLength:(double)arg1;
- (void)setCurrentTransportationType:(int)arg1;
- (void)setDistanceToCurrentManeuver:(double)arg1;
- (void)setDistanceToDestination:(double)arg1;
- (void)setLineType:(unsigned int)arg1;
- (void)setNavCameraMode:(unsigned long long)arg1;
- (void)setNavigationDestination:(unsigned long long)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setNextManeuverRampType:(int)arg1;
- (void)setNextStepLength:(double)arg1;
- (void)setRampType:(int)arg1;
- (void)setRoadSpeed:(double)arg1;
- (void)setSceneManager:(struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setSearchAlongTheRoute:(bool)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setVehicleSpeed:(double)arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;

@end
