/* made by EzioChiu.
 */

@protocol HKCurrentActivityCacheQueryClientInterface

@required

- (void)client_deliverCurrentActivityCache:(HKActivityCache *)arg1 moveStatistics:(NSArray *)arg2 exerciseStatistics:(NSArray *)arg3 standHoursInfo:(NSArray *)arg4 queryUUID:(NSUUID *)arg5;

@end
