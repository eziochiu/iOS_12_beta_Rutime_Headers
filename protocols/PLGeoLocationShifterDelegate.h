/* made by EzioChiu.
 */

@protocol PLGeoLocationShifterDelegate <NSObject>

@required

- (void)locationShifter:(PLGeoLocationShifter *)arg1 didShiftWithResult:(PLGeoLocationShiftResult *)arg2;
- (NSDictionary *)locationShifter:(PLGeoLocationShifter *)arg1 locationCoordinatesForAssetIDs:(NSArray *)arg2;
- (void)locationShifter:(PLGeoLocationShifter *)arg1 requestsInvocation:(NSInvocation *)arg2;
- (void)locationShifterDidFinish:(PLGeoLocationShifter *)arg1;

@end
