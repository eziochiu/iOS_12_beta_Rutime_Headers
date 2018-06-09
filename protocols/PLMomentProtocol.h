/* made by EzioChiu.
 */

@protocol PLMomentProtocol <NSObject>

@required

- (NSDate *)pl_endDate;
- (CLLocation *)pl_location;
- (unsigned long long)pl_numberOfAssets;
- (NSDate *)pl_startDate;

@end
