/* made by EzioChiu.
 */

@protocol GEOTransitDeparture <NSObject>

@required

- (NSDate *)departureDate;
- (NSString *)vehicleIdentifier;

@end
