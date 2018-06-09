/* made by EzioChiu.
 */

@protocol _ATXLocationManagerWrapperProtocol

@required

+ (id)sharedInstance;
+ (NSString *)stringForLOIType:(long long)arg1;

- (void)clearLocationOfInterest;
- (long long)currentLOIType;
- (double)distanceFromGymOfCurrentLocation;
- (double)distanceFromHomeOfCurrentLocation;
- (double)distanceFromSchoolOfCurrentLocation;
- (double)distanceFromWorkOfCurrentLocation;
- (void)fetchAllLocationsOfInterest:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (CLLocation *)getCurrentLocation;
- (_ATXLocation *)locationOfInterestAtCurrentLocation;

@end
