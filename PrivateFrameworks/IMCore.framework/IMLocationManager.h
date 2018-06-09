/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager> {
    NSError * _error;
    NSMutableArray * _handlers;
    NSDate * _locateStartTime;
    CLLocation * _location;
    CLLocationManager * _locationManager;
    NSTimer * _locationUpdateTimer;
    NSTimer * _timeoutHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSMutableArray *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *locateStartTime;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, readonly) bool locationAuthorizationDenied;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) NSTimer *locationUpdateTimer;
@property (readonly) Class superclass;

+ (Class)__CLLocationManagerClass;
+ (id)locationShifter;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fireCompletionHandlers;
- (void)_locationManagerTimedOut;
- (void)_locationUpdateTimerFired:(id)arg1;
- (bool)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2;
- (void)dealloc;
- (id)error;
- (id)handlers;
- (id)init;
- (id)locateStartTime;
- (id)location;
- (bool)locationAuthorizationDenied;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationUpdateTimer;
- (void)setError:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setLocateStartTime:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationUpdateTimer:(id)arg1;
- (void)shiftedLocationWithLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)startUpdatingCurrentLocationWithHandler:(id /* block */)arg1;

@end
