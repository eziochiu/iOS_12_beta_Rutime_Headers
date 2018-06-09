/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationDataCollector : NSObject <CLLocationManagerDelegate> {
    unsigned long long  _activityType;
    <HDLocationEventDelegate> * _delegate;
    bool  _didSaveLocationData;
    CMElevation * _elevation;
    unsigned long long  _elevationGain;
    CLInUseAssertion * _inUseAssertion;
    double  _lastPausedTime;
    int  _lastStatus;
    CLLocationManager * _locationManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKWorkoutRoute * _route;
    <HDSampleSaving> * _sampleSavingDelegate;
    long long  _state;
    NSUUID * _workoutUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDLocationEventDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CMElevation *elevation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleElevationData:(id)arg1 error:(id)arg2;
- (void)_queue_createSeriesSample;
- (void)_queue_deleteCurrentRoute;
- (void)_queue_freezeCurrentWorkoutRoute;
- (void)_queue_pauseLocationUpdates;
- (void)_queue_resumeWorkout;
- (void)_queue_savedLocationData;
- (void)_queue_setupLocationUpdates;
- (void)_queue_stopGPSUpdates;
- (int)authorizationStatus;
- (id)createCMElevation;
- (id)delegate;
- (id)elevation;
- (id)initWithProfile:(id)arg1 sampleSavingDelegate:(id)arg2 activityType:(unsigned long long)arg3 workoutUUID:(id)arg4;
- (bool)isElevationAvailable;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (bool)locationServicesEnabled;
- (id)mainQueue_createLocationManager;
- (void)pauseUpdates;
- (void)resumeUpdates;
- (void)setDelegate:(id)arg1;
- (void)setElevation:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)startUpdates;
- (void)stopUpdates;

@end
