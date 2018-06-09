/* made by EzioChiu.
 */

@protocol CLSTimeLocationTuple <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinates;
- (NSDate *)endDate;
- (NSDate *)startDate;
- (NSString *)timeLocationIdentifier;

@end
