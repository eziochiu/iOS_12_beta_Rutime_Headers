/* made by EzioChiu.
 */

@protocol RMUsageProtocol

@required

- (void)setUsageEndDate:(NSDate *)arg1;
- (void)setUsageInSeconds:(NSNumber *)arg1;
- (void)setUsageStartDate:(NSDate *)arg1;
- (NSDate *)usageEndDate;
- (NSNumber *)usageInSeconds;
- (NSDate *)usageStartDate;

@end
