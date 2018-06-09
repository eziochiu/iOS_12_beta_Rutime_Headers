/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REEngineLocationManager : RERelevanceEngineSubsystem <RELoggable> {
    CLLocation * _currentLocation;
    CLLocation * _location;
    RELocationManager * _locationManager;
    bool  _monitoringLocation;
    REObserverStore * _observers;
    RELocationManager * _simulatedLocationManager;
}

@property (nonatomic, retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CLLocation *location;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginMonitoringLocationForManager:(id)arg1;
- (void)_beginTraining;
- (id)_currentLocationManager;
- (void)_endTraining;
- (void)_handleLocationUpdate:(id)arg1;
- (void)_stopMonitoringLocationForManager:(id)arg1;
- (void)_updateLocationStatus;
- (bool)_wantsLocation;
- (void)addObserver:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)currentLocation;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1 locationManager:(id)arg2;
- (id)location;
- (void)pause;
- (void)removeObserver:(id)arg1;
- (void)resume;
- (void)setCurrentLocation:(id)arg1;
- (void)setLocation:(id)arg1;

@end
