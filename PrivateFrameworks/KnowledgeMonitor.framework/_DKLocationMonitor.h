/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKLocationMonitor : _DKMonitor <CLLocationManagerDelegate> {
    CLLocationManager * _locationManager;
    bool  _recordGeodesicClusterCenter;
    RTRoutineManager * _routineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventWithState:(id)arg1 locationOfInterest:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 recordCoordinates:(bool)arg5;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setCurrentLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_handleVisit:(id)arg1;
- (id)_locationFromVisit:(id)arg1;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)update;

@end
