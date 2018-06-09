/* made by EzioChiu.
 */

@protocol MKLocationProviderDelegate <NSObject>

@required

- (void)locationProvider:(id <MKLocationProvider>)arg1 didReceiveError:(NSError *)arg2;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateLocation:(CLLocation *)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationProvider:(id <MKLocationProvider>)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id <MKLocationProvider>)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id <MKLocationProvider>)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id <MKLocationProvider>)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id <MKLocationProvider>)arg1;

@end
