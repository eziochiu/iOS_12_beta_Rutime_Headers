/* made by EzioChiu.
 */

@protocol ATXLaunchEventProtocol <NSObject>

@required

- (NSString *)bundleId;
- (NSDate *)endDate;
- (NSDate *)startDate;

@end
