/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate> {
    int  _authorizationStatus;
    CLLocation * _currentLocation;
    <RCLocationsOfInterestDelegate> * _delegate;
    CLGeocoder * _geographyCoder;
    bool  _ignoringLocationUpdates;
    CLLocationManager * _locationManager;
    NSArray * _locationsOfInterest;
    NSArray * _placesOfInterest;
    NSObject<OS_dispatch_queue> * _queue;
    double  _searchRadius;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) bool authorized;
@property (readonly) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RCLocationsOfInterestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *locationsOfInterest;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double searchRadius;
@property (readonly) Class superclass;

+ (id)defaultManager;

- (void).cxx_destruct;
- (bool)active;
- (bool)authorized;
- (id)currentLocation;
- (id)delegate;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationsOfInterest;
- (id)queue;
- (double)searchRadius;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSearchRadius:(double)arg1;
- (void)start;
- (void)stop;

@end
