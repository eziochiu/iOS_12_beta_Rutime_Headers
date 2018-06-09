/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {
    bool  _alternate;
    NSObject<OS_dispatch_queue> * _authorizationQueue;
    id /* block */  _authorizationRequestBlock;
    int  _authorizationStatus;
    CLLocationManager * _clLocationManager;
    <MKLocationProviderDelegate> * _delegate;
    NSBundle * _effectiveBundle;
    NSString * _effectiveBundleIdentifier;
    double  _expectedGpsUpdateInterval;
    bool  _hasQueriedAuthorization;
    bool  _locationServicesPreferencesDialogEnabled;
    bool  _waitingForAuthorization;
}

@property (nonatomic, readonly) CLLocationManager *_clLocationManager;
@property (nonatomic) long long activityType;
@property (nonatomic, copy) id /* block */ authorizationRequestBlock;
@property (nonatomic, readonly) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isTracePlayer;
@property (nonatomic, readonly) CLLocation *lastLocation;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) bool locationServicesPreferencesDialogEnabled;
@property (nonatomic) bool matchInfoEnabled;
@property (nonatomic, readonly) bool shouldShiftIfNecessary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) bool usesCLMapCorrection;

- (void).cxx_destruct;
- (int)_authorizationStatusOnQueue;
- (id)_clLocationManager;
- (void)_createCLLocationManager;
- (void)_resetForNewEffectiveBundle;
- (void)_updateAuthorizationStatus;
- (long long)activityType;
- (id /* block */)authorizationRequestBlock;
- (int)authorizationStatus;
- (void)authorizationStatusOnQueue:(id)arg1 result:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (id)init;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isTracePlayer;
- (id)lastLocation;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (bool)matchInfoEnabled;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)setActivityType:(long long)arg1;
- (void)setAuthorizationRequestBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (bool)shouldShiftIfNecessary;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (bool)usesCLMapCorrection;

@end
