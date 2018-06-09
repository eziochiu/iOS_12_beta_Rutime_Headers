/* made by EzioChiu.
 */

@protocol SLPlaceDataSource

@required

- (void)cancelPlaceFetch;
- (CLLocation *)currentLocation;
- (NSObject<SLPlaceDataSourceDelegate> *)delegate;
- (void)fetchPlaces;
- (void)fetchPlacesWithSearchString:(NSString *)arg1;
- (void)setDelegate:(NSObject<SLPlaceDataSourceDelegate> *)arg1;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;

@end
