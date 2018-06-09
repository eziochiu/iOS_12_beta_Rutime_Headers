/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNHybridLocationProvider : NSObject <MNLocationProvider, MNLocationProviderDelegate> {
    unsigned long long  _activeServices;
    MNCoreLocationProvider * _coreLocationProvider;
    <MNLocationProviderDelegate> * _delegate;
    MNLeechedLocationProvider * _leechedLocationProvider;
    unsigned long long  _mode;
    bool  _shouldNotifyDelegate;
}

@property (nonatomic) long long activityType;
@property (nonatomic, copy) id /* block */ authorizationRequestBlock;
@property (nonatomic, readonly) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isSimulation;
@property (nonatomic, readonly) bool isTracePlayer;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) bool locationServicesPreferencesDialogEnabled;
@property (nonatomic) bool matchInfoEnabled;
@property (nonatomic) unsigned long long mode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) bool usesCLMapCorrection;

- (void).cxx_destruct;
- (id)_activeLocationProvider;
- (id)_inactiveLocationProvider;
- (bool)_isSubscribedToService:(unsigned long long)arg1;
- (void)_subscribeToService:(unsigned long long)arg1;
- (void)_unsubscribeFromService:(unsigned long long)arg1;
- (long long)activityType;
- (id /* block */)authorizationRequestBlock;
- (int)authorizationStatus;
- (id)coreLocationProvider;
- (id)delegate;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isSimulation;
- (bool)isTracePlayer;
- (id)leechedLocationProvider;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (bool)matchInfoEnabled;
- (unsigned long long)mode;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)resetForActiveTileGroupChanged;
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
- (void)setMode:(unsigned long long)arg1;
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
